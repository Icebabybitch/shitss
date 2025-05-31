#include <stdio.h>///基礎題：零錢總額 : 假設有50元、5元和1元等3種硬幣，請分別輸入三種硬幣的數量(分別讀入50元、5元、1元硬幣的數量)，計算出這些硬幣的總額。
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int a = 50; ///變數 a, b, c 被重複宣告，第一次是輸入的數量，第二次又重新宣告為硬幣面額，這樣是錯誤的
    int b = 5;
    int c = 1;

    sum  = 50*a+5*b+1*c; ///sum 沒有宣告型態
    printf("%d=50*%d+5*%d+1*%d",sum,a,b,c);///printf 裡的參數順序錯誤，會印出錯誤結果。
}
///沒有 return 0;


#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b,&c); /// 這一行錯在：%d 是格式化輸出用在 printf() 中的，不能出現在數學運算或變數初始化裡。你應該使用變數名稱 a, b, c，而不是 %d。

    int sum = 50*%d+5*%d+1*%d; /// 對的！在 C 語言中，所有變數都必須先宣告才能使用。sum = 50 * count50 + 5 * count5 + 1 * count1;你一定要先告訴電腦「sum 是一個整數」，像這樣：
///int sum = 50 * count50 + 5 * count5 + 1 * count1; 或分開寫也可以：int sum; sum = 50 * count50 + 5 * count5 + 1 * count1;
/// ✅ 結論：你要使用變數 sum，就必須事先寫 int sum; 或 int sum = ...;不然編譯器會報錯：「undeclared identifier」（尚未宣告的變數）。
    printf("%d=50*%d+5*%d+1*%d",sum,a,b,c);///在 printf() 裡，你要用格式符號 %d 來代表你想印的數字變數，不能直接寫變數名（像 a、b）在字串中，否則它們就只會被印成「文字」而不是數值。
    return 0; ///printf("%d=50*a+5*b+1*c",sum,a,b,c") 會直接印出：XXX=50*a+5*b+1*c, 而不會把 a、b、c 的值帶入顯示，因為你把 a、b、c 當成文字字串印出來了。printf("%d=50* %d+5* %d+1* %d",sum) 這行用了 4 個 %d，但只提供了 1 個變數 sum，所以會造成錯誤或亂印出來的值。
}
