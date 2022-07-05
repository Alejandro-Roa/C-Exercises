#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    // 1
    #define STRIPES 1
    #define ASTERISKS 2
    #define EQUALSIGN 3
    int counter = 0;
    int counter2 = 0;
    int length;
    int height;
    int model;
    int l;

    printf("\nChoose a model: \n");
    printf("1. STRIPES \n");
    printf("2. ASTERISKS \n");
    printf("3. EQUALSIGN \n");
    scanf("%d", &model);

    printf("\nLength: ");
    scanf("%d", &length);

    printf("\nHeight: ");
    scanf("%d", &height);
    printf("\n");
    if(model == STRIPES){
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < length; j++){
                printf("_");
            }
            if (i == 1)
            {
                break;
            }
            printf("\n");
            for (int k = 0; k < height; k++){
                for ( l = 0; l < length; l++){
                    if (l == 0 || l == length-1)
                    {
                        printf("|");
                    }else{
                        printf(" ");
                    }
                }
                if (k == height-1 && l == length-1){
                        printf("|");
                        continue;
                    }else{   
                        printf("\n");
                    }
            }
        }
    }else if (model == ASTERISKS)
    {
        while (counter < length+2)
        {
            if (counter == 0 || counter == length+1)
            {
                printf(" ");
            }else{
                printf("*");
            }
            counter++;
        }
        counter = 0;
        while (counter2 < height-2)
        {
            printf("\n");
            while (counter < length+2)
            {
                if(counter == 0 || counter == length+1)
                {
                    printf("*");
                }else{
                    printf(" ");
                }
                counter++;
            }
            counter2++;
            counter = 0;
        }
        counter = 0;
        printf("\n");
        while (counter < length+2)
        {
            if (counter == 1 || counter == length)
            {
                printf(" ");
            }else if (counter == 0 || counter == length+1)
            {
                printf(" ");
            }else{
                printf("*");
            }
            counter++;
        }        
    }else if (model == EQUALSIGN)
    {
        do
        {
            counter++;
            printf("=");
        } while (counter < length);
        counter = 0;
        do
        {
            counter++;
            printf("\n");
        } while (counter < height);
         counter = 0;
        do
        {
            counter++; 
            printf("=");
        } while (counter < length);
    }else{
        printf("Invalid option.");
    }

    // 2
    int primes;
    counter = 0;
    printf("\n");
    printf("\nType n to find x prime numbers in range:\n"); 
    scanf("%d", &primes);
    printf("\nResult: \n");
    if (primes >= 2){
        for (int i = primes; i > 1; i--){ 
            for (int j = 2; j <= i; j++){ 
                if (i % j == 0){
                    counter++;
                }
            }
            if (counter == 1){
                printf("%d\n", i);
            }
            counter=0;
        }
    }else{
        printf("Invalid number!");
    }
    return 0;
}