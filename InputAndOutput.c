#include <stdio.h>

int main() {
    char name[50];
    int age; 

    printf("Enter your name: ");
    scanf("%s",name); // reading a single word from the user 
    printf("Enter your age: ");
    scanf("%d",&age); // read age as an integer 

    printf("Hello, %s! You are %d years old.\n", name , age);
    return 0;
}