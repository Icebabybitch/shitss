///基礎題：我們與惡的距離 : 輸入一個整數，輸出該整數與2的距離。

#include <stdio.h>
#include <stdlib.h>// 引入標準函式庫，讓你可以使用 abs() 函式
int main()
{
    int num;
    scanf("%d", &num);

    int distance = abs(num-2);// 計算輸入數字與 2 的距離（絕對值）
    printf("%d", distance);
    return 0;
}

///「距離」是指兩點之間的非負距離（不能是負的）,表示的是「兩者差多少」，但不帶方向。
///「距離」就是絕對值（absolute value），意思是忽略正負號，只看大小。
///在程式裡，寫 a - 2 會得到正數或負數，但題目要求的是距離，應該是「a 和 2 之間的絕對差值」，所以要用 abs() 函式或者自己判斷，如果是負的就取反。
