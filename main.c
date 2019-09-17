#include <stdio.h>

int main()
{
    int topFloor = 10;
    int whichFloor;
    printf("You are currently on floor 0.\n");
    printf("What floor would like to visit?\n");
    scanf("%d", &whichFloor);
    
    if (whichFloor > 10)
    {
        printf("That floor does not exist. The top floor is 10");
    }
    else
    {
        printf("You have reached the %d",whichFloor);
        printf("th floor.");
    }
}