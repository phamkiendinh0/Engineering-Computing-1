#include <stdio.h>

//A word is a sequence of characters with no whitespace characters. Count the number of words 
//in a given sentence.

int main() {
    char sentence[100] = "For   example,    this sentence has 7 words.";
    int counter = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i-1] != ' ' && (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '.')) {
            printf("The word is: %c\n", sentence[i-1]);
            counter++;
        }
    }
    printf("There are %d words in this sentence.", counter);

    return 0;
}