// Author: Eliza Malyshev 
// KUID: 3122318
// Date: 9/5/2024 
// Lab: #1.2
// Purpose: program that accepts the weight of a vehicle as an input from the user and classifies it based on light, medium, heavy 

#include <stdio.h>
int main()
{
    int num; 
    printf("input weight of vehicle: "); 
    scanf("%d", &num); 
    if(num<10000)
    {
        printf("l");
    }
    else if(num>=10000 && num<26000) //has to be seperate statments or else it just reads that num>=10000 is 0 or 1 and compares that to 26000 (if dont 10000<=num<26000)
    {  
        printf("m");
    }
    else if(num>=26000)
    {  
        printf("h");
    }
    else
    {
        printf("invalid input of your vehicle doesnt fit in any weight category we have");
    }

    return 0; 
} 
