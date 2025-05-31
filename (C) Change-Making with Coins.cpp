#include <stdio.h>
int main()
{
    int a, a50, a5,a1;
    scanf("%d", &a);
    a50 =a/50;
    a5 = a%50/5;
    a1 = a%50%5;
    printf("%d=50*%d+5*%d+1*%d",a,a50,a5,a1);
    return 0;
}
