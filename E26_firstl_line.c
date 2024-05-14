// Write a C program to read the first line from a file.

#include<stdio.h>
#include<stdlib.h>

int main(){
    char sentence[100];
    FILE *fptr;
    if((fptr = fopen("firstline_file.txt", "r")) == NULL){
        printf("Error!");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", sentence);
    printf("First line : \n%s", sentence);
    fclose(fptr);
    return 0;
}