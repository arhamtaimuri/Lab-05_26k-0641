#include<stdio.h>
int main(){
      int age;
      int heart_rate;
      int oxygen;

     printf("\nEnter age:   ");
    scanf("%d",&age);
     
    printf("\nEnter heart rate(bpm):   ");
    scanf("%d",&heart_rate);

    printf("\nEnter oxygen:   ");
    scanf("%d",&oxygen);


    if(oxygen<90){
        printf("immediate action");
    }
        else if(heart_rate>130 || heart_rate<40){
            printf("cardiac alert");
        }
           else if(age>=65 && oxygen<95){
                printf("high priority");
           }
                else if(age<=5 && heart_rate>110){
                    printf("high priority");
                }
                   else if(oxygen<97){
                         printf("medium priority");
                    }
                    else{
                        printf("low priority");
                    }
                 }