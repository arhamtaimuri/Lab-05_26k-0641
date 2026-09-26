#include<stdio.h>
int main(){
    int stream;
    int science;
    int com;
    int arts;
    int bio;


    printf("1.science");
     printf("\n2.commerce");
      printf("\n3.arts");
      printf("\nchoose your stream:  ");
      scanf("%d",&stream);

      switch (stream)
      {
      case 1:
        printf("you choose science!");
        printf("1=biology , 2=physics, 3=chemistry");
        scanf("%d",&science);
        if(science==1){
            printf("you choose biology! ");
             printf("interest in medicines(1/0):  ");
            scanf("%d",&bio);
            if(bio==1){
                printf("MBBS");
            }
            else if(bio==0){
                printf("biotechnology");
            }

        }
        else if(science==2){
            printf("you choose physics! ");
        }
        else if(science==3){
            printf("you choose chemistry! ");
        }
        break;
         case 2:
        printf("you choose commerce!");
        printf("1=accounting , 2=marketing");
        scanf("%d",&com);
        if(com==1){
            printf("you choose accounting! ");
        }
        else if(com==2){
            printf("you choose marketing! ");
        }
        
        break;
         case 3:
        printf("you choose arts!");
        printf("1=literature , 2=history, 3=phsycology");
        scanf("%d",&arts);
        if(arts==1){
            printf("you choose literature! ");
        }
        else if(arts==2){
            printf("you choose history! ");
        }
        else if(arts==3){
            printf("you choose physcology! ");
        }
        break;
      
      default:
      printf("invalid choice! ");
        break;
      }

}