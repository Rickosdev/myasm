#include <stdio.h>

void GetToken(FILE* fp,char* buf){
    static char ch=getc(fp);
    int i=0;
    if(ch==EOF)ch=getc(fp);
    while(ch==' '||ch=='\n')ch=getc(fp);
    while(ch!=' '&&ch!='\n'&&ch!=EOF){
        buf[i++]=ch;
        ch=getc(fp);
    }
    return;
}
