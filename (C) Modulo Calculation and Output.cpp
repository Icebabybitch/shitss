///基礎題：計算餘數及列印 : 撰寫一個程式，要求使用者輸入兩個數字(變數名稱分別為x,y)，再從使用者取得這兩個數字，x為被除數，y為除數，然後印出計算後的餘數(remainder)。
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int remainder = x%y;

    printf("%d",remainder); ///變數名稱要寫對
    return 0;
}
