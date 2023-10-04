/*
https://sevendays-study.com/algorithm/pr-day4.html
時間の差分を求めるアルゴリズムとC言語プログラム
*/
#include <stdio.h>//スタンダードインプットアウトプットの意

void main() {//メイン関数
    int h, h1, h2;//時間
    int m, m1, m2;//分
    int s, s1, s2;//秒
    int diff, time1, time2, n;//計算用の変数を定義
    //  時間を入力
    printf("一つ目の時間を入力してください。\n");//入力指示（１）
    printf("時:");
    scanf("%d", &h1);//時間を入力（１）
    printf("分:");
    scanf("%d", &m1);//分を入力（１）
    printf("秒:");
    scanf("%d", &s1);//秒を入力（１）
    printf("二つ目の時間を入力してください。\n");//入力指示（２）
    printf("時:");
    scanf("%d", &h2);//時間を入力（２）
    printf("分:");
    scanf("%d", &m2);//分を入力（２）
    printf("秒:");
    scanf("%d", &s2);//秒を入力（２）
    //  それぞれの時間を、「秒」単位に変換
    time1 = h1 * 3600 + m1 * 60 + s1;//時間＋分＋秒
    time2 = h2 * 3600 + m2 * 60 + s2;//時間＋分＋秒
    if (time1 > time2) {//大きい方から小さい方を引く（値がマイナスにならないため）の分岐
        diff = time1 - time2;   //  秒単位での時間差を求める
    }
    else {
        diff = time2 - time1;   //  秒単位での時間差を求める
    }
    h = diff / 3600;    //  時間を求める。
    n = diff % 3600;    //  時間差を3600で割った余りを、nに代入。
    m = n / 60;//分の差求める
    s = n % 60;//秒の差求める
    printf("二つの時間の時間差は、%d時間%d分%d秒です。\n", h, m, s);

}
