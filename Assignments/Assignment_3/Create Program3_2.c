#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

//Updater for Negative Number
    if( iNo < 0)
    {
        iNo = -iNo;
    }

    //Loop Through 1 to Half of iNo (iNo / 2)
    for(i = 1; i <= (iNo/2); i++)
    {
        if((iNo % i )==0) //Condition to Check Factors
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
