// Author: Eliza Malyshev 
// KUID: 3122318
// Date: 9/5/2024 
// Lab: #1.6
// Purpose: calculates the length of a string 

#include <stdio.h>

int main()  
{   char string[100]; //initilize array that will take user string (since strings are just arrays of chars)
    printf("give me a string (less than 100 chars) and ill count how many characters are in it: "); //plz i hope user is nice 
    scanf("%s", string); //takes user input as %s and saves it to array
    //char string[] = "hello";
    char *ptr=string; //pointer points to string array, automatically points to first index
    int counter=0;
    while (*ptr!='\0') //loop through string until null terminator (when the array becomes empty)
    {
        counter++; 
        //printf("%c", *p);
        ptr++; //this incriments the pointer; at first it points to index 0, then 1, etc. 
    }  
    printf("counted: %d",counter);
    
    return 0; 
}
