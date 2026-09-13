#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){

    // Task 3:
    char student_name[30];
    int first_letter;
    
    fgets(student_name, sizeof(student_name), stdin);

    puts(student_name);

    // for single character:
    first_letter = getchar();

    printf("First Letter is: %c\n", first_letter);

    return 0;
}