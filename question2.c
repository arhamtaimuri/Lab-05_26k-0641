#include<stdio.h>
int main(){
    int marks;
    int attendance;
    int family_income;
    
    printf("\nEnter marks(0-100):   ");
    scanf("%d",&marks);

    printf("\nEnter attendance(0-100):   ");
    scanf("%d",&attendance);

    printf("\nEnter family income:   ");
    scanf("%d",&family_income);
    
    if(marks<=50){
        printf("NOT ELLIGIBLE: marks too low");
    }
    else if(attendance<75){
        printf("Atendance too low");
    }
    else if(family_income>800000){
        printf("income too high");
    }
    else{
    if(marks>=90 && attendance>=90){
        printf("Full Scholarship");
    }
          else if(marks>=75 && attendance>=85){
            printf("half scholarship");
          }
          else{
            printf("quarter scholarship");
          }
    
}

}
