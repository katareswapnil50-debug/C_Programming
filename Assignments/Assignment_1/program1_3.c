///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Program to print Numbers from 5 to 1 on screen
// Input         : None
// Output        : 5 4 3 2 1
// Author        : Swapnil Ramrao Katare
// Date          : 18/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while (i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}
