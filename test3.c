#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i,j;
    printf("Enter a string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    printf("enter a sring");
    char ch[10];
    scanf(" %c",ch);
    printf("%c",ch);
    
    for (i = 0; i < len; i++) {
        str[i] = tolower(str[i]);  // Convert each character to uppercase
    }
    

    
    // Using a simple bubble soSrt to sort the alphabets
    for (i = 0; i < len-1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap the characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    
    printf("String with sorted alphabets: %s\n", str);
    
    return 0;
}

