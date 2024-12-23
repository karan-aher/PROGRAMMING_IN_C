//Write C Program to print addresses and values of variables using Pointer. (c.g.- Write C program to access and display address of variables.)
#include <stdio.h>

int main() {
    int num = 10;            // Declare an integer variable
    float fnum = 5.75;       // Declare a float variable
    char ch = 'A';           // Declare a character variable
    
    // Declare pointer variables
    int *ptr_num;
    float *ptr_fnum;
    char *ptr_ch;

    // Assign the addresses of variables to pointers
    ptr_num = &num;
    ptr_fnum = &fnum;
    ptr_ch = &ch;
    
    // Display addresses and values using pointers
    printf("Address of num: %p, Value of num: %d\n", ptr_num, *ptr_num);
    printf("Address of fnum: %p, Value of fnum: %.2f\n", ptr_fnum, *ptr_fnum);
    printf("Address of ch: %p, Value of ch: %c\n", ptr_ch, *ptr_ch);

    return 0;
}
