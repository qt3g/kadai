/*
https://sevendays-study.com/algorithm/pr-day5.html
数列の最大値を表示する
*/

#include <stdio.h>//スタンダードインプットアウトプット

void main() {//メイン関数
    //  整数の値を入れる配列
    int a[5], i, max;//左から値を受け取る用の配列、forループ用の変数i、最大値を格納するための変数
    printf("5つの数値を代入してください。\n");//入力指示
    for (i = 0; i < 5; i++) {//forループ
        printf("a[%d]=", i);//何番目の要素か表示
        scanf("%d", &a[i]);//値入力
    }
    //  配列の値の合計を計算する。
    max = a[0]; //  仮の最大値をa[0]にする。
    for (i = 1; i < 5; i++) {//forループ
        if (a[i] > max) {//このときa[i]がmaxより大きければ
            max = a[i];//maxの値を更新
        }
    }
    //  結果の出力
    printf("配列内の最大の数値は%dです。\n", max);
}