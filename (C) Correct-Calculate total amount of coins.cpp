///基礎題：零錢總額 : 假設有50元、5元和1元等3種硬幣，請分別輸入三種硬幣的數量(分別讀入50元、5元、1元硬幣的數量)，計算出這些硬幣的總額。
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum = 50*a+5*b+1*c;

    printf("%d = 50*%d+5*%d+1*%d", sum, a, b, c);
    return 0;
}
