#include <stdio.h> /// 我一開始想說放三個輸入的職(a,b,c)和輸出的值(d)在裡面，直接三個拿來比大小, 看誰是最大的就輸出d
int main()
{
    int d, a, b, c;
    scanf("%d %d %d",&a, &b, &c); /// 後來發現(1)a > b > c > 0 這種寫法在 C 語言中不合法,，必須拆開來寫
   ///(2)宣告了變數 d，但沒有給值，也沒有使用, d本身沒有值， 他也不知道要找最大的(我沒放max)
    if (a>b>c>0)
        printf(d);
    else if (b>a>c>0)
        printf(d);
    else if  (c>b>a>0)
        printf(d);
    else
    return 0;
}

#include <stdio.h>
int main() ///一定要把所有東西包起來, 要包到return 0;
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
} /// 到這裡就已經斷了
    int max=a;
    if  (b > max)  max = b;
    else if  (c > max)  max = c; /// 這裡也要用if
    printf ("%d", max);
    return 0;
}

/// NOTE 1 : 1. ✅ 如果題目說「輸入一定是正整數」→ 表示輸入「合法且安全」，可以不用檢查是不是正整數 2. ⚠️ 如果題目要求你「檢查是否為正整數」→ 那你就要加條件(下面那個就是)
///if (a <= 0 || b <= 0 || c <= 0) {
///printf("Please input positive integers only.\n");
///return 1;判斷最大值的邏輯 & 是「且」，需要所有條件都為真。|| 是「或」，只要有一個條件為真。

/// NOTE 2 : (1) if (...)
///if (...)	✅ 兩個條件都會檢查（用來找最大值超好用）(這兩行是「兩個獨立的判斷」，不是「只能執行一個」。)
///(2)if (...)
/// else if (...)	❌ 只有一個條件會執行，會跳過其他比較(只有在 b <= max 的時候，才會去比較 c > max)
 ///因為 if 成立了 → else if 不會執行 ❌,所以 c > max 根本沒被判斷 → 錯過更大的值
