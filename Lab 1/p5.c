// Author: Eliza Malyshev 
// KUID: 3122318
// Date: 9/5/2024 
// Lab: #1.5
// Purpose: count the total number of elements that have a duplicate in an array 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() 
{
    int arraySize; 
    printf("how big is the array?: ");
    scanf("%d", &arraySize);
    getchar(); //clear the newline character left in the buffer after scanf
    char input[arraySize];
    int nums[arraySize];
    printf("enter %d numbers, each seperated by a comma: ", arraySize); 
    fgets(input,arraySize*2,stdin); //this thing takes a line of text and stores it in an array 
    //takes array, the max amount of characters (i did double the array to account for commas and initilization at 0), and the type of input (stdin is keyboard input)
    char *token=strtok(input, ","); //strtok splits a string into parts based on a delimiter, takes a string and string of delimiters; here it points to first char in the string 
    int arrayPlace=0; //keeps place in array
    while(token!=NULL) //strtok remembers its position in the original string and deletes the delimiter, moving to the next char 
    {
        nums[arrayPlace]=atoi(token);  //convert the string to an int using atoi() and store it in the array
        arrayPlace++; 
        token=strtok(NULL,",");  //get the next number
    }

    // printf("You entered: "); //check to make sure we got the right input translate 
    // for(int i=0; i<arrayPlace; i++) 
    // {
    //     printf("%d ", nums[i]);
    // }

    int uniqueNums[arraySize]; //we use this to compare the original input to, and then we count how many unique numbers there are 
    int uniqueCount=0; //keeps place of uniqueNums 
    int duplicateNums[arraySize]; //keeps track of duplicat values so that we dont count duplicates twice 
    int duplicateCount = 0;  //counts how many duplicates there are     
    for(int i=0; i<arrayPlace; i++) //omg this loop is killing me ahhhhhh idek whats going on anymore if it works it works 
    {
        bool unique=true; //if the current value in nums[i] being checked is unique to the uniqueNums array
        bool duplicate=false; //checks if a duplicate is already in duplicateNums 
        for(int j=0; j<uniqueCount; j++) 
        {
            if(nums[i]==uniqueNums[j]) 
            {
                unique=false; //indicates that duplicate found 
                for(int k=0; k < duplicateCount; k++) //check if the duplicate is already in duplicateNums
                {
                    if(nums[i]==duplicateNums[k]) 
                    {
                        duplicate=true;
                        break;
                    }
                }
                if(!duplicate) //if duplicate=flase after we check if its already in duplicateNums; if not in duplicateNums
                {
                    duplicateNums[duplicateCount]=nums[i];
                    duplicateCount++;
                }
                break;
            }
        }
        if(unique) //if unique=true
        {
            uniqueNums[uniqueCount]=nums[i]; //puts new unique number into uniqueNums 
            uniqueCount++; //incriments unique count 
        }
    }
    
    // printf("\nunique numbers: %d\n", uniqueCount);
    printf("There are %d duplicate numbers.\n", duplicateCount);
    return 0;
}

