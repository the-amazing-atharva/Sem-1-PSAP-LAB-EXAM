// Write a C program to insert a sub-string in to given main string.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[40], str2[20];
    int l1, l2, n, i;

    printf("Enter the string 1:\n");
    fgets(str1, sizeof(str1), stdin);
    l1 = strlen(str1);
    
    printf("Enter the string 2:\n");
    fgets(str2, sizeof(str2), stdin);
    l2 = strlen(str2);
    
    printf("Enter the position where the string is to be inserted:\n");
    scanf("%d", &n);

    for(i = l1; i >= n; i--) {
        str1[i + l2] = str1[i];
    }

    for(i = 0; i < l2; i++) {
        str1[n + i] = str2[i];
    }

    str1[l1 + l2] = '\0';

    printf("After inserting the string, the result is: \n%s", str1);

    return 0;
}