///////////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : Accept a Number and Print that Number Count in *
// Input         : Integer
// Output        : *
// Author        : Swapnil Ramrao Katare
// Date          : 18/10/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{

    int iCnt = 0;
    //Updater
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
