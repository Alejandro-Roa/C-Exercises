#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    // 1
    #define PLENGTH 100
    char palindrome[PLENGTH];
    char emordnilap[PLENGTH];
    int counter = 0;
    int currentLen;

    printf("\nType some string: ");
    gets(palindrome);
    currentLen = strlen(palindrome);
    
    for (int i = currentLen -1; i >= 0; i--){
        emordnilap[currentLen-i-1] = palindrome[i];
    }
    for (int i = 0; i < currentLen; i++){
        if (emordnilap[i] == palindrome[i]){
            counter++;
        }
    }

    if (counter == currentLen){
        printf("\n%s is a palindrome.\n", palindrome);
    }else{
        printf("\n%s is not a palindrome.\n", palindrome);
    }
    
    // 2
    #define SLENGTH 50
    char sign[SLENGTH];
    char newSign[SLENGTH];
    int lenSign;
    int lenConsonants;
    int lenVocals;
    counter = 0;
    char vocals[]={'a','e','i','o','u'};  
    char consonants[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};

    printf("\nWrite a sign: "); 
    gets(sign); 

    lenSign = strlen(sign);
    lenConsonants = strlen(consonants);
    lenVocals = strlen(vocals);

    for (int i = 0; i < lenSign; i++){  
        for (int j = 0; j < lenVocals; j++){  
            if (sign[i] == vocals[j]){
                newSign[counter] = vocals[j];
                counter++;
                break;   
            }  
        }
    }  

    for (int i = 0; i < lenSign; i++){  
        for (int j = 0; j < lenConsonants; j++){  
            if (sign[i] == consonants[j]){
                newSign[counter] = consonants[j];
                counter++;  
                break;   
            }    
        }
    }   

    printf("\nNew sign:\n");   
    for (int i = 0; i < counter; i++){  
        printf("%c", newSign[i]);
    }   
    return 0;
}   
