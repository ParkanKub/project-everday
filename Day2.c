#include <stdio.h>

int main (){
    int score;
    char name[20];

    printf("Enter your name: ");
    scanf("%s",name);

    printf("Enter your score: ");
    scanf("%d",&score);
    if(score >=80 && score <=100){
        printf("Student: %s\n",name);
        printf("Score: %d\n",score);
        printf("Grade: A\n");
    }
    else if(score >=70 && score <=79){
        printf("Student: %s\n",name);
        printf("Score: %d\n",score);
        printf("Grade: B\n");
    }
    else if(score >=60 && score <=69){
        printf("Student: %s\n",name);
        printf("Score: %d\n",score);
        printf("Grade: C\n");
    }
    else if(score >=50 && score <=59){
        printf("Student: %s\n",name);
        printf("Score: %d\n",score);
        printf("Grade: D\n");
    }
    else if(score >=0 && score <=49){
        printf("Student: %s\n",name);
        printf("Score: %d\n",score);
        printf("Grade: F\n");
    }
    else{
        printf("Invalid score.\n");
    }
    return 0;
}