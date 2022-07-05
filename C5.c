#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    // 1
    char myMatrix[5][5] = {{'A','N','G','O','P'},
                           {'W','B','T','F','D'},
                           {'C','M','U','V','Q'},
                           {'K','X','H','E','Y'},
                           {'J','I','S','L','R'}
                           };


    printf("\nInitial matrix:\n\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%c ",myMatrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix inverted 90 degrees to the left:\n\n");
    for (int i = 0; i < 5; i++){
        for (int j = 4; j >= 0; j--){
            printf("%c ",myMatrix[j][i]);
        }
        printf("\n");
    }

    // 2
    char vowels[5]= {'A','E','I','O','U'}; 
    char consonants[21]= {'B','C','D','F','G','H','J',
                           'K','L','M','N','P','Q','R',
                           'S','T','V','W','X','Y','Z',
                           };
  
    char matrizVowels[5][5] = {{' '}};
    char matrizConsonants[5][5] = {{' '}};
   
    for (int k = 0; k < 5; k++){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if (myMatrix[i][j] == vowels[k]){
                    matrizVowels[i][j] = vowels[k];
                }
            }
        }
    }
 
    printf("\nInitial vowel matrix: \n\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%c ", matrizVowels[i][j]);
        }
        printf("\n");
    }

    for (int k = 0; k < 21; k++){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if (myMatrix[i][j] == consonants[k]){
                    matrizConsonants[i][j] = consonants[k];
                }
            }
        }
    }

    printf("\nInitial consonant matrix: \n\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%c ", matrizConsonants[i][j]);
        }
        printf("\n");
    }
    return 0;
}