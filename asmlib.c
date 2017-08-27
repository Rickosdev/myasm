#include <stdio.h>
#define MAX_BUF_SIZE 100000
#define MAX_FILE_NUM 10000
#define MAX_FILENAME_SIZE 128

char buf[MAX_BUF_SIZE];
FILE* fp[MAX_FILE_NUM];
char* SymbolTable[MAX_FILE_NUM];
int esp=0;

void ThrowError();
int checkfile(FILE* fp,char* filename);
int StrCpy(char* buf,char* str);
int StrCmp(char* ch1,char* ch2);
int FileOpen();

int FileOpen(void){
    int i=0;
    char ch;
    if((fp[i++]=fopen("sys.ini","r"))==NULL){
        ThrowError();
    }
    for(;;++i){
        int j=0;
        char filename[MAX_FILENAME_SIZE]={0};
        
        ch=getc(fp[0]);
        while(ch!=','&&ch!=EOF){
            filename[j++]=ch;
            ch=getc(fp[0]);
        }
        if((fp[i]=fopen(filename,"r"))==NULL){
            ThrowError();
        }
        if(checkfile(fp[i],filename))--i;
        else{
            SymbolTable[i-1]=buf+esp;
            esp+=StrCpy(buf+esp,filename);
        }
        if(ch==EOF)break;
    }
    return i+1;
}

int checkfile(FILE* fp,char* filename){
    char token[32]={0},ch=getc(fp);
    int i=0,j=0;
    while(ch!='='){
        if(ch==EOF)return 1;
        token[i++]=ch;
        ch=getc(fp);
    }
    if(StrCmp(token,"opcode"))return 1;
    for(j=0;j<i;j++)token[j]=0;
    i=0;
    ch=getc(fp);
    while(ch!='\n'){
        if(ch==EOF)return 1;
        token[i++]=ch;
        ch=getc(fp);
    }
    if(StrCmp(token,filename))return 1;
    return 0;
}

int StrCpy(char* buf,char*str){
    int i=0;
    do{
        buf[i]=str[i];
    }while(str[i++]);
    return i;
}

int StrCmp(char* ch1,char* ch2){
    int i=0;
    while(ch1[i]==ch2[i])
        if(!ch1[i++])return 0;
    if(ch1[i]>ch2[i])return 1;
    else return -1;
}
