///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept Two Numbers and Display First Number in Second Number of Times.
// Input         : Integer,Integer
// Output        : Displays First Number in Second Number of Times
// Author        : Swapnil Ramrao Katare
// Date          : 18/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
int iCnt = 0;
//Updater 
    for (iCnt = 1; iCnt < iFrequency;
    iCnt++)
    {
        printf("%d",iNo);
    }

}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

return 0;
}
