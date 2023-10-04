/*
https://sevendays-study.com/algorithm/pr-day5.html
５つの数値を入力し、その合計を表示するプログラム
*/
#include <stdio.h>//スタンダード・インプット・アウトプットの意

void main() {
    //  整数の値を入れる配列
    int a[5], i, sum;//変数定義
    printf("5つの数値を代入してください。\n");//入力の指示
    for (i = 0; i < 5; i++) {//forループ（入力）
        printf("a[%d]=", i);//何番目の要素かを出力
        scanf("%d", &a[i]);//値入力
    }
    //  配列の値の合計を計算する。
    sum = 0;    //  合計値（初期値は0)
    for (i = 0; i < 5; i++) {//forループ（計算）
        sum += a[i];//各要素の値を変数sumに足していく
    }
    //  結果の出力
    printf("数値の合計は%dです。\n", sum);//結果を出力
}