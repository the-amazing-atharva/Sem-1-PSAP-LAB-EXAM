#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Upper case string: %s\n", str);

    return 0;
}
