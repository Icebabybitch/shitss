/// 基礎題：判別正方形 : 撰寫一個程式要求使用者輸入矩形的長與寬，然後讀進這兩個整數。假如長與寬相同則印出訊息「It is a square」，否則印出訊息「It is not a square」。只能使用本章所學到的單一if敘述式。
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x==y){
        printf("It is a square");
    }
    if(x!=y){ /// 這題只能用if, 不能用else
       printf("It is not a square");
    }
    return 0;
}
/// 「if 後面」加不加 {} 是看你要執行的敘述有幾行：✅ 只有一行敘述 → 可以 不加 {}（但建議還是加）;✅ 超過一行敘述 → 一定要加 {}：
