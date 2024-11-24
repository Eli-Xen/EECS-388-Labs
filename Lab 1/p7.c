// Author: Eliza Malyshev 
// KUID: 3122318
// Date: 9/5/2024 
// Lab: #1.7
// Purpose: show how values and addresses work with pointers 

#include <stdio.h>
int main()
{
    int temp; 
    printf("enter an integer: ");
    scanf("%d", &temp); 
    int *temp_ptr;
    temp_ptr=&temp; 

    printf("\nvalue of %d using temp", temp); //what we usually do 
    printf("\nvalue of %d using temp_ptr", *temp_ptr); //dereferance pointer, now it is the actual value that the memory address stores 
    printf("\nvalue of %d using temp", &temp); //& means 'address of' so this littery gives address of where the variable lies 
    printf("\nvalue of %d using temp_ptr", temp_ptr); //temp_ptr just holds the address of temp so this is literal 

    return 0; 
}