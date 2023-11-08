#include<stdio.h>

float findArea(int a)
{
    return (3.1416*(a*a));
}

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    float area1 = findArea(a);
    float area2 = findArea(b);
    if(area1>area2){
        printf("%f\n", area1);
    }
    else if(area1<area2){
        printf("%f\n", area2);
    }
    else if(area1==area2){
        printf("Equal Areas\n");
    }
    return 0;
}
