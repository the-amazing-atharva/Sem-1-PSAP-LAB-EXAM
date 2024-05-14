#include <stdio.h>
#include <string.h>

void shuffle(char *s, int *indices, int size) {
    char temp[size];
    for (int i = 0; i < size; i++) {
        temp[indices[i]] = s[i];
    }
    for (int i = 0; i < size; i++) {
        s[i] = temp[i];
    }
}

int main() {
    char s[100];
    int indices[100], size;

    printf("Enter the string: ");
    scanf("%s", s);

    size = strlen(s);

    printf("Enter the indices array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &indices[i]);
    }

    shuffle(s, indices, size);

    printf("Shuffled string: %s\n", s);

    return 0;
}
