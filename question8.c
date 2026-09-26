#include<stdio.h>
int main(){
    int permission;
    printf("\n1=read only:  ");
    printf("\n3=write and read only:  ");
    printf("\n4=executive  ");
    printf("\nEnter persmission:  ");

    scanf("%d",&permission);
    int read=1;
    int write=2;
    int execute=4;


    if(permission&execute){
        printf("access granted,full control! ");
    }
    else if(permission&read && permission&write){
        printf("access granted , read and write");
    }
    else if(permission&read){
        printf("access granted , read only");
    }
    else{
        printf("access denied");
    }
}