#include<stdio.h>

int main(){
    int accuracy;
    int confidence_score;
    int dataset_size;
    double model_score;
    int user_role;
    int trained=1;
    int validated=2;
    int approved=4;
    int deprecated=8;
    int status_flag;


    printf("enter accuracy(0-100):  ");
    scanf("%d",&accuracy);

    printf("Enter confidence score:  ");
    scanf("%d",&confidence_score);

    printf("Enter dataset size:  ");
    scanf("%d",&dataset_size);

    printf("enter status flag:  ");
    scanf("%d",&status_flag);


     printf("\n1=Intern  ");
    printf("\n2.Engineer ");
    printf("\n3=admin  ");
    
    printf("\nEnter user role:  ");
    scanf("%d",&user_role);

    float avg=(confidence_score+accuracy)/2;
    double size_term = dataset_size / 1000.0;
    if(size_term > 10){
        size_term = 10;
    }

    model_score = (accuracy * 0.5) + (confidence_score * 0.3) + (size_term * 2);

printf("\nModel score:  %.2f",model_score);

if(status_flag&deprecated){
    printf("\nrejected: model deprecated");
}
else if(!(status_flag&trained)){
     printf("\nrejected: model not trained");
}
else if(!(status_flag&validated)){
     printf("\nrejected: not validated");
}
else if(!(status_flag&approved)){
     printf("\npending: waiting approval! ");
}
else if(accuracy<70 || confidence_score<60){
     printf("\nrejected: performance too low! ");
}
else if(dataset_size<5000){
     printf("\nrejected: dataset too small");
}
else if(user_role==1){
    printf("\ndenied: interns cannot deploy");
}
else if(user_role==2 && model_score<80){
    printf("\ndenied: engineers need high score");
}
else {
    printf("\napproved for deployment");
}

if(model_score>avg){
    printf("\nmodel score is greater than avergae of both");
}
else{
    printf("\nmodel score is less than the average of both");
}

  printf("\n\nSizes of variables used:");
    printf("\nsizeof(accuracy) = %zu bytes", sizeof(accuracy));
    printf("\nsizeof(confidence_score) = %zu bytes", sizeof(confidence_score));
    printf("\nsizeof(dataset_size) = %zu bytes", sizeof(dataset_size));
    printf("\nsizeof(model_score) = %zu bytes", sizeof(model_score));
    printf("\nsizeof(user_role) = %zu bytes", sizeof(user_role));
    printf("\nsizeof(status_flag) = %zu bytes", sizeof(status_flag));

}