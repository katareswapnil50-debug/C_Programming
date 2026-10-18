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
void Accept(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("*");
    }
} 
int main ()
{

    int iValue =0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Accept(iValue);
    
    return 0;

}
