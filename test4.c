#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Using strupr to convert the string to uppercase
    // Note: strupr is not a standard function and might not be available on all systems
    strupr(str);
    
    printf("Uppercase string: %s\n", str);
    
    return 0;
}


