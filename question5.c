#include<stdio.h>
int main(){

   int time;
   int motion_detected;
   int light_level;
   int type;
   int cooking;

   printf("enter time(0-23):  ");
   scanf("%d",&time);

   printf("enter motion detected(1/0):  ");
   scanf("%d",&motion_detected);

   printf("enter light level(0-100):  ");
   scanf("%d",&light_level);

   printf("\n1.Living room");
   printf("\n2.bed room");
   printf("\n3. kitchen");
   printf("\nchoose room:  ");
   scanf("%d",&type);

   if(type==1){
    printf("living room");
   }
   else if(type==2){
    printf("bed room");
   }
   else if(type==3){
    printf("kitchen");
   }

   if(motion_detected==0){
    printf("\naway mode: all off");
   }
   else if(time>=6 && time<18){
    printf("\nDay mode: lights ON");
   }
   else if(time>=18 && time<23){
    printf("\nEvening mode : dim lights");
   }
   else {
    printf("\nNight mode: turn off the lights ");
   }
   if(type==3){
    printf("\nAre you cooking?(1/0):  ");
    scanf("%d",&cooking);
    if(cooking==1){
        printf("turn on exhasut fan");
    }
   }


}