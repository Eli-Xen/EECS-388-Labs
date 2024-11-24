// Author: Eliza Malyshev 
// KUID: 3122318
// Date: 9/5/2024 
// Lab: #1.1
// Purpose: basic calculator that can perform addition, subtraction, multiplication, division and squaring 

#include <stdio.h>
int calculator(int num1, char toDo, int num2); //declare the function before using it, we can define it l8r 

int main()
{
    int num1; //first operator 
    printf("give first operand: "); 
    scanf("%d", &num1); //scanf takes input from terminal, %d is expexting an integer type, we assign the input to num1 using & to save value to the memory adress num1 points to 
    
    char toDo; //operand 
    printf("give operator: "); 
    scanf(" %c", &toDo); //ALWAYS PUT SPACE IN FRONT OF %c ON SCANF SO IT DOESNT SCAN PREVIOUS INPUT ENTER

    int num2; //initalize/make num2 to use in if-statment 
    if(toDo!='s') //only ask for 2nd operand if toDo char isnt squared (s) 
    {
        printf("give 2nd operand: "); 
        scanf("%d", &num2); 
    }

    printf("result: %d\n", calculator(num1, toDo, num2)); //prints the result returned from calulcator function call

    return 0; 
}

int calculator(int num1, char toDo, int num2) //specify parameter types at function defenition 
{
    int result; 
    switch(toDo) //like if-else statment except it just finds what the variable given is equal to 
    {
        case 's': 
            result=num1*num1;
            break; //break is required at the end of each case so that it doesnt go to default case 
        case '+':
            result=num1+num2;
            break; 
        case '-': 
            result=num1-num2;
            break; 
        case '*':
            result=num1*num2; 
            break;
        case '/':
            result=num1/num2; 
            break;
        default: //if nothing else mathces to the variable given (like the last else statement)
            printf("you gave bad input");

    }
    return result; 
}