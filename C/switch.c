#include <stdio.h>
 
int main()
{
    int i;
    printf("enter no: ");scanf("%d",&i);
 
    switch (i)
    {
    case 1:
        printf("Statement 1");
        break;
 
    case 2:
        printf("Statement 2");
        break;
 
    case 3:
        printf("Statement 3");
        break;
 
    default:
        printf("No valid i to switch to.");
        break;
    }
    return 0;
}