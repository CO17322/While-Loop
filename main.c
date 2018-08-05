#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter ;
    while (counter <=100){
        printf("Enter any number %d", counter);
        scanf("%d",counter);
        counter++;
    }
    getch();
    return 0;
}
