#include<stdio.h>
int main(){
    int permission;
    printf("Enter your permission status:  ");
    scanf("%d",&permission);
    int read=1;
    int write=2;
    int execute=4;
    int delete=8;
    int admin=16;


    if(permission&admin){
        printf("full access : admin ");
    }
    else if(permission&delete && permission&write){
        printf("Access: delete and write");
    }
    else if(permission&execute && !(permission&write)){
        printf("access granted , execute only");
    }
    else if(permission&read && !(permission&write) && !(permission&execute)){
        printf("access: read only");
    }
    else if(permission==0){
        printf("access denied");
    }

else{
    printf("access: custom permissions");

}
}