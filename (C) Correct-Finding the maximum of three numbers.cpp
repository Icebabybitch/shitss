#include <stdio.h> /// 第一種
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);///&a 裡的 & 是 「位址運算子」，意思是a 是變數本身，代表裡面的「值」 ; &a 是變數 a 在記憶體中的「位址」或「地址」
/// 在 C 語言中，像 scanf 這種讀取輸入的函數，需要知道「變數的位址」才能把使用者輸入的值存到變數裡，所以要傳入 &a。
/// E.g. :變數 a 是一個信箱，裡面裝東西（值）, &a 是這個信箱的地址，告訴系統東西要放哪個信箱

    int max; /// 代表你宣告一個整數變數叫 max，但還沒有告訴它是多少（可能是垃圾）C 語言不會自動幫你把 max 變成 0 或其他東西。它可能是：732984. -945120. 0...
                 ///（隨機記憶體裡的髒東西）這叫做 「垃圾值」（garbage value）。

    if (a>=b && a>=c){ ///&& 是 邏輯「且」運算子（logical AND operator），用來判斷多個條件是否同時為真。
///if (條件1 && 條件2) {
/// 當條件1和條件2都成立（都為真）時，才會執行這裡的程式碼
///}
        max = a; /// 對max賦值,  並比大小
    }
    else if (b>=a && b>=c){
        max = b; /// 對max賦值,  並比大小
    }
    else{
        max = c; ///對max賦值,  並比大小
    }
    printf("%d",max);
    return 0;
}

#include <stdio.h> /// 第二種-三數最大值簡寫版：
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max=a;
    if  (b > max)  max = b;
    if  (c > max)  max = c;
    printf ("%d", max);
    return 0;
}
