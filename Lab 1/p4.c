// Author: Eliza Malyshev 
// KUID: 3122318
// Date: 9/5/2024 
// Lab: #1.4
// Purpose: convert a hexadecimal number to a binary 

#include <stdio.h>
#include <string.h>

char* hex2binary(char string) //supporting function that converts hex to binary and gives int output
{
    //printf("\nrecived %c", string);
    switch(string) //if-else statments to convert 0-9,A-F to binary
    {
        case '0':
            return "0000"; 
            break; 
        case '1':
            return "0001"; 
            break; 
        case '2':
            return "0010"; 
            break; 
        case '3':
            return "0011"; 
            break; 
        case '4':
            return "0100"; 
            break; 
        case '5':
            return "0101"; 
            break; 
        case '6':
            return "0110"; 
            break; 
        case '7':
            return "0111"; 
            break; 
        case '8':
            return "1000"; 
            break; 
        case '9':
            return "1001"; 
            break; 
        case 'A':
            return "1010"; 
            break; 
        case 'B':
            return "1011"; 
            break; 
        case 'C':
            return "1100"; 
            break; 
        case 'D':
            return "1101"; 
            break; 
        case 'E':
            return "1110"; 
            break; 
        case 'F':
            return "1111"; 
            break; 
        default: 
            printf("\ninvalid hex character %c\n", string); 
    }
} 

int main() 
{
    int hexSize=16;
    char hex[hexSize]; 
    printf("give hex number (only uses 0-9, A-F): ");
    scanf("%s", hex); //use %s for string and dont have to use &hex since hex array is already a pointer to first thing 
    
    // printf("you entered: "); //check to make sure we got the right input translate 
    // for(int i=0; i<hexSize && hex[i]!='\0'; i++) //loop through string until null terminator (if the array doesnt fill up all the way)
    // {
    //     printf("%c ", hex[i]); //print each character
    // } 

    printf("\nbinary version of that hex: "); //has to be outside of loop or else it will print each 4 bits with this statment 
    for(int i=0; i<hexSize && hex[i]!='\0'; i++) //loop through string and send to converter
    {
        printf("%s ", hex2binary(hex[i])); //print conversion of each character 
    }

    return 0;
}