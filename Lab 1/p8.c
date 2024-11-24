// Author: Eliza Malyshev 
// KUID: 3122318
// Date: 9/5/2024 
// Lab: #1.7
// Purpose: akes an integer input and a bit and returns whether or not that bit is set to 1

#include <stdio.h>
int main()
{
    int num; 
    printf("enter an integer: ");
    scanf("%d", &num); 

    int bit; 
    printf("enter bit position that you think is set to 1: ");
    scanf("%d", &bit); 


    if(((1<<bit) & num)!=0) //this ANDs the bit shifted "bit" many times with num, when it ANDs if two bit positions are both 1 they stay one, thus being non-zero and making it true 
    {     //cannot do if((1<<bitnum)==1) becaused it would just compare if that shifted binary value is equal to 0001 
        printf("true, the bit is set to 1 at the bit you gave");        //ie is bit=2, 1 shifted 2 times is     0100 
    }                                                                  //and num=7, when you AND th         //& 0111
    else                                                               //then the result would be:              0100    which !=0 
    {
        printf("flase, you got it wrong");
    }

    return 0; //this code tortured me, i couldnt figure out what was wrong, i just forgot to do &num and &bit in my scanf
}
