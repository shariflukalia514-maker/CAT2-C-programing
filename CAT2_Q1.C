/*
Name : Shariff Lukalia
Reg no : PA106/G/28761/25
Description : Program displaying 2D array
*/

#include <stdio.h>

int main() {
    // Declaring and initializing 2D array
    int score[2][2] = {
        {65, 92},
        {84, 72}
    };

    printf("Elements of the 2D array 'score':\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", score[i][j]);  // Correctly prints each element
        }
        printf("\n");  // New line after each row
    }

    return 0;
}