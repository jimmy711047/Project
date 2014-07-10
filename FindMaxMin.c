//This C program is for finding the maximum and minimum number of a sequence of number generated from users.
#include <stdio.h>

int main(void)
{
    int Number,LengthOfNumber,LoopIndex,Max,Min;

    printf("please enter Length Of Number:\n");
    scanf("%d",&LengthOfNumber);

    printf("please enter the numbers:\n");

    for(LoopIndex=0;LoopIndex<LengthOfNumber;LoopIndex++)
    {
        scanf("%d",&Number);
        if (LoopIndex == 0)
        {
            Max = Number;
            Min = Number;
        }

        if (Number > Max) Max = Number;
        else if (Number < Min) Min = Number;
    }

    printf("%d is the maximum.\n",Max);
    printf("%d is the minimum.\n",Min);

    return 0;
}
