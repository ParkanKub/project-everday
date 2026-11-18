#include <stdio.h>
int main (){
    int number,i,sum=0;
    printf("Enter your Number: ");
    scanf("%d", &number);
    for(i = 0; i <= number; i++){
        sum += i;
    }
    printf("Sum: %d",sum);
    return 0;
}