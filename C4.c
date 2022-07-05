#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// change me
#define DIMENSIONX 100
#define DIGITS 3  // from 1 up to 999

// dont change me
int amountPalindrome[DIMENSIONX];

int primeFoo(int lowerLimit, int upperLimit){
    int counter = 0;
    int index = 0;
    for (int i = upperLimit; i > lowerLimit; i--){
        for (int j = 2; j <= i; j++){ 
            if (i % j == 0){
                 counter++;
            }
        }
        if (counter == 1){
            //printf("%d\n", i); //optional  primes in range
            amountPalindrome[index] = i;
            index++;
        }
        counter=0;
    }
    return index;
}
 
int backwards(int num){

    int digits[DIGITS];
    int digitsAux[DIGITS];
    int counter = 0;
    int myNum = num;
    int palindrome = 0;
    int n; 

    while (num > 0){
        int digit = num%10;
        num /= 10;
        digits[counter] = digit;
        counter++;
    } 
    for (int i = 1; i <= DIGITS; i++){
        digitsAux[DIGITS-i] = digits[i-1];  
        }

    for (int i = DIGITS-1; i >= 0; i--){
        n = pow(10,i);
        if (digits[i] == digitsAux[i]){   
            if (i == 0)
            {
               palindrome += digits[i];
            }else{
                palindrome += digits[i]*n;
            }
        }else{
            break;
        }  
    }  

    if (palindrome == myNum){  
        return palindrome;
    }else{
        return 0;
    }
} 

int main(int argc, char const *argv[]){

    #define LETTERS 20 // change me 
    char listA[LETTERS]; // from 0 to n-1
    char listB[LETTERS];
    char alphabet[]= {"zyxwvutsrqponmlkjihgfedcba"};
    int lenAlpha;
    int lenListA;
    int index = 0;
    int next = 0;

    printf("\nType in up to a %d char string: \n", LETTERS-1); 
    gets(listA);

    lenAlpha = strlen(alphabet);
    lenListA = strlen(listA);

    for (int i = 0; i < lenAlpha; i++){
        for (int j = 0; j < lenListA; j++){
            if (alphabet[i] == listA[j]){
                listB[index] = listA[j];
                index++;                   
            }
        } 
        if (index == lenListA){
            break;
        }
    }
    printf("\nList A:  %s", listB); 
    
    // 2
    int down; // 100
    int up; // 200
    int primes;
    int newNum;
    printf("\nEnter range:\n");
    scanf("%d",&down);
    scanf("%d",&up);  
    printf("\n");

    primes = primeFoo(down, up);
    printf("Amount of primes in range : %d\n", primes);
    printf("Result : \n");
    for (int i = 0; i < primes; i++){
        newNum = backwards(amountPalindrome[i]);
        if (newNum != 0)
        {
           printf("%d\n", newNum);
        }
    }
    return 0;
}

