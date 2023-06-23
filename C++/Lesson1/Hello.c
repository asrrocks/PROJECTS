// Hello World Program

#include <stdio.h> // Preprocessor Directives

int main() // Main program
{
    int age;
    int number = 25;
    char star = '*';
    float pi = 3.14;
    printf("Hello, World! - \n%d\n%c\n%f\n", number, star, pi);

    printf("Please enter your age - ");
    scanf("%d", &age);

    printf("Your age is \n%d", age);
    return 0; // Exit program
}

// C is a case sensitive language
// return 0 shows 0 error code

// is a single line comment
/*
is a
multi
line
comment
*/

// Printf is for display information and Scanf is for printing information
// %d is double, %f is float, %c is character

// GCC Compilation - Hello.c -> C Compiler -> a.exe is for windows and a.out is for linux and macos