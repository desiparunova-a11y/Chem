#include <stdio.h>

int main()
{
    int i, n, sum, number;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n<=0){
        return 0;
    }
    
    sum = 0;
    i = 1;
    
    while (i<=n){
        
        printf("Enter number: ");
        scanf("%d", &number );
        
        if (number%2!=0){
            sum = sum + number;
        }
        
        i++;
    }
    

    printf("The sum is: %d", sum);//test 3 5 4 5 6 7

    
    return 0;
}