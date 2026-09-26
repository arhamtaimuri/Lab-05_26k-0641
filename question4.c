#include<stdio.h>
int main(){
    int card_status;
    int pin_status;
    int account_balance;
    int withdrawal_amount;
    


     printf("\nEnter card status(1=valid 0=block):   ");
     scanf("%d",&card_status);

      printf("\nEnter pin status(1=correct 0=wrong):   ");
     scanf("%d",&pin_status);

      printf("\nEnter account balance:   ");
     scanf("%d",&account_balance);

      printf("\nEnter withdrawal amount:   ");
     scanf("%d",&withdrawal_amount);

     
     int new_balance=account_balance-withdrawal_amount;

     if(card_status==0){
        printf("Card blocked. Contact bank ");
     }
     else if(pin_status==0){
        printf("Incorrect PIN");
     }
     else if(withdrawal_amount<=0){
        printf("Invalid amount");
     }
      else if(withdrawal_amount>account_balance){
        printf("Insufficient balance");
     }
      else if(withdrawal_amount>25000){
        printf("Daily limit exceed");
     }
      else if(new_balance<1000){
        printf("Minimum balance must be maintained.");
     }
     else {
        printf("new balance : $%d",new_balance);
     }

     int notes_2000=withdrawal_amount/2000;
     int remaining=withdrawal_amount%2000;

     int notes_500=remaining/500;
      remaining=remaining%500;

     int notes_100=remaining/100;
      remaining=remaining%100;


    printf("\nnotes of 2000: %d",notes_2000);
    printf("\nnotes of 500: %d",notes_500);
    printf("\nnotes of 100: %d",notes_100);
    printf("\nPlease collect your cash! ");

}