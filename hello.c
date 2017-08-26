#include <stdio.h>

int tesmocule(void);

int main(){
    printf("hello,world!!\n");
    tesmocule();
    return 0;
}

int tesmocule(void){
    int a;
    for(a=0;a<10;a++){
        printf("hello!!\n");
    }
    return 0;
}
