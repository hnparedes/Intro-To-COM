#include <stdio.h>
#include <ctype.h>
#define MAX_STRING_SIZE 1000

void text_statistics(const char *str);

int main() {
    char inputString[MAX_STRING_SIZE];

    printf("Enter a string\n");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; i < MAX_STRING_SIZE; i++) {
        if (inputString[i] == '\n') {
            inputString[i] = '\0';
            break;
        }
    }

    text_statistics(inputString);

    return 0;
}

void text_statistics(const char *str) {
    int wordCount = 0;
    int uppercaseStartCount = 0;
    int lowercaseStartCount = 0;

    int isNewWord = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (isNewWord) {
                wordCount++;
                if (isupper(str[i])) {
                    uppercaseStartCount++;
                } else if (islower(str[i])) {
                    lowercaseStartCount++;
                }
                isNewWord = 0;
            }
        } else {
            isNewWord = 1;
        }
    }

    printf("The given string has %d words (%d starts%s with uppercase, %d starts%s  with lower case)\n",
           wordCount, uppercaseStartCount, (uppercaseStartCount == 1) ? "s" : "",
           lowercaseStartCount, (lowercaseStartCount == 1) ? "s" : "");
}