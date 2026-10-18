///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept a Number and Print Hello or Demo
// Input         : Integer
// Output        : Hello or Demo
// Author        : Swapnil Ramrao Katare
// Date          : 18/10/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}
