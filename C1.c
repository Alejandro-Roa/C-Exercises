#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1
    int myNumVar;
    printf("\nType a number: \n");
    scanf("%d", &myNumVar);

    for (int i = 1; i <= myNumVar; i++){ 
        if(myNumVar % i == 0){
            printf("%d is a divisor of %d \n", i, myNumVar);
        }
    }
        
    // 2
    #define EVEN 9
    int evens[EVEN];
    int counter = 0;
    int totalEven = 0;

    printf("\nEnter 10 numbers to determine how many of them are even: \n");
    do{
        scanf("%d", &evens[counter]);
        if (evens[counter] % 2 == 0)
        {
            totalEven++;
        }
        counter ++;
    }while(counter < 10);
    printf("Amount of even numbers is :%d\n", totalEven);


    // 3
    int factor1;
    int factor2;
    int modificator = 0;

    printf("\nFirst factor: \n");
    scanf("%d", &factor1);

    printf("\nSecond factor: \n");
    scanf("%d", &factor2); 

    if (factor1 != 0 && factor2 != 0) 
    {
        printf("%d times %d  -> ", factor2, factor1);
        while (modificator != factor2){
            if (modificator  == factor2-1)
            {
                printf("%d  ", factor1);
            }else{
                printf("%d + ", factor1);
            }
            modificator++;
        }printf("is: %d.", factor1*factor2);
    }else{
        printf("Result is 0");
    }
    
    return 0;
}
