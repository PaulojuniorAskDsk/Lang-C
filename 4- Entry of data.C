//entry of data
#include <stdio.h>
int main(){
    printf("Enter your name: ");
    char name[50];
    scanf("%s", name); // %s is used to read a string input from the user and store it in the variable name. The & operator is not used with %s because name is already an array, and its name represents the address of the first element of the array.
    printf("Hello, %s!\n", name);
    return 0;
}