#include<stdio.h>
int main(){
    int category;
    int time;
    int query;
    int complaint;
    int feedback;
    int delay;

    printf("1.greeting");
    printf("\n2.query");
    printf("\n3.complaint");
    printf("\n4.feedback");
    printf("\nchoose  a category:  ");
    scanf("%d",&category);

    if(category!=1 && category!=2 && category!=3 && category!=4){
        printf("Invalid category! ");
    }
    else {
        if(category==1){
            printf("morning(1), evening(2):  ");
            scanf("%d",&time);
            if(time==1){
            printf("Good morning!");
        }
        else if(time==2){
            printf("Good evening!");
        }
        }
        if(category==2){
            printf("Product(1), billing(2), techincal(3)");
            scanf("%d",&query);
            if(query==1){
                printf("you want query related our products");
            }
            else if(query==2){
                printf("you have query related billing");
            }
            else if(query==3){
                printf("you have query related technical");
            }
        }
        if(category==3){
            printf("delivery(1), quality(2):  ");
            scanf("%d",&complaint);
            if(complaint==2){
                printf("delayed order(1/0):  ");
                scanf("%d",&delay);
                if(delay==1){
                    printf("sorry! we are working on your order! ");
                }
                else if(delay==0){
                    printf("order is not delayed! ");
                }
            }
            else if(complaint==2){
                printf("You can reverse the order , if you dont like quality!");
            }
        }
        if(category==4){
            printf("positive(1), negative(2):  ");
            scanf("%d",&feedback);
            if(feedback==1){
                printf("thank you for positive feedback! ");
            }
            else if(feedback==2){
                printf("negative");
                printf("\nsorry! we are improving! ");
            }
        }
    }

}