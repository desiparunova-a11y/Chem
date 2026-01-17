#include <stdio.h>

int main()
{
    int number, firstDigit, lastDigit;
    
    printf("The number is: ");
    scanf("%d", &number);
    
    if (number<=0){
        return 0;
    }
    
    if (number>=10){
        lastDigit = number%10;
    }
    
    while (number>=10){
        firstDigit = number/10;
        number = number/10;
    }
    
    printf("The first digit is: %d", firstDigit);
    
    printf("The last digit is: %d", lastDigit);
    
    return 0;
}
