#include <stdio.h>
int main (){
    int number,i,Factorial=1;
    printf("Enter your Number:");
    scanf("%d", &number);
    for(i = 1; i <= number; i++){
        Factorial *= i;
    }
    printf("Factorial: %d",Factorial);
    return 0;
}