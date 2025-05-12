#include<stdio.h>
#include<stdlib.h>
int main()
{
    tenTimesIterator();
    return 0;
}


void tenTimesIterator()
{
    int *p = (int *)malloc(sizeof(int) * 10);
    for (int i = 1; i <= 10; i++)
    {
        *(p + i - 1) = i;
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", *(p + j));
    }
}