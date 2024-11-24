// Author: Eliza Malyshev 
// KUID: 3122318
// Date: 9/5/2024 
// Lab: #1.3
// Purpose: print all the prime numbers within a limit set by a user input 

#include <stdio.h>
#include <math.h> 
int primeChecker(int num) 
{
    for(int i=2;i<=sqrt(num);i++) //starts at 2 becuase all numbers are divisible by 1; criteria for prime numbers 
    {
        if(num%i==0) //if no remainder then divided evenly 
        {
            return 0;
        }
    }
    return 1; 
}

int main()
{
    int limiter; 
    printf("give me a number: ");
    scanf("%d", &limiter);
    
    if(limiter<=2) //preliminary check 
        {
            printf("the only prime number is 1 or 2(only in the case that your input is 2)");
        }
    else
    {
        //int primes[limiter]; //array that stores all prime numbers before limiter; deemed unnecessary 
        //int arrayCounter=0; //keeps track of where next empty space is in array 
        for(int i=2;i<=limiter;i++) //every number before the limiter gets put into function that checks if its prime 
        {
            //primeChecker(i);
            if(primeChecker(i)==1) //if prime checker returns true...
            {
                printf("%d\t",i);
                //primes[arrayCounter]=i; //...saves value to array 
                //arrayCounter++;
            }
        }
    }
    return 0; 
}