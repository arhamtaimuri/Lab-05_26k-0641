#include<stdio.h>
int main(){
    float final_fee;
    int hours_parked;
    int type;
    int membership;
    float fee;
    float discount=0.15;

   
    printf("\n1.bike");
    printf("\n2.car");
    printf("\n3.truck");
    printf("\nEnter type of vehicle:   ");
    scanf("%d",&type);
    
    

    printf("1=yes , 0=no  ");
    printf("\nEnter memebership status:  ");
    scanf("%d",&membership);

     printf("enter hours parked:  ");
     scanf("%d",&hours_parked);
     if(hours_parked<=0){
        printf("invalid duration");
    }
    else if(type==1){
        fee=20*hours_parked;
    }

    else if(type==2 && hours_parked<=2){
                fee=50;
    }
   else if(type==3 && hours_parked<=3){
        fee=100;
    }
    else if(type==3){
         fee=100+50*(hours_parked-3);   
    }
     else if(type==2) {
        fee=50+30*(hours_parked-2);
    }
    else {
        printf("invalid!");
    }   

if(membership==1 && fee>200){
    final_fee=fee-(discount*fee);
}
else{
    final_fee=fee;
}

printf("Your Final fee is:  $%.2f",final_fee);

}