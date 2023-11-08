#include<stdio.h>

int isEven(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else if(a%2!=0)
    {
        return 0;
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    int check = isEven(a);
    if(check==1)
    {
        printf("Even\n");
    }
    else if(check == 0)
    {
        printf("Odd\n");
    }
    return 0;
}

