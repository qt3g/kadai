﻿/*
データ構造：スタック
https://sevendays-study.com/algorithm/day2.html
*/
#include <stdio.h>

//  配列の最大の大きさ
#define MAX_LENGTH  100

/*構造体*/
typedef struct {
    int array[MAX_LENGTH];    //  データを格納数る配列
    int current;            //  現在の位置
}STACK;

//  スタックの初期化
void init(STACK* pStack)
{
    int i;
    for (i = 0; i < MAX_LENGTH; i++) {//全要素ぶんループ
        pStack->array[i] = 0;//0を格納
    }
    //  カレントの値を0に。
    pStack->current = 0;
}
//  値のプッシュ
int push(STACK* pStack, int value)
{
    if (pStack->current < MAX_LENGTH) {
        //  まだデータが格納できるのなら、データを格納し、一つずらす。
        pStack->array[pStack->current] = value;
        pStack->current++;
        return 1;
    }
    //  データを格納しきれなかった
    return 0;
}
//  値のポップ
int pop(STACK* pStack, int* pValue)
{
    if (pStack->current > 0) {
        //  まだデータが格納できるのなら、データを格納し、一つずらす。
        pStack->current--;
        *pValue = pStack->array[pStack->current];
        return 1;
    }
    return 0;
}

void main() {//メイン関数
    STACK s;
    int value;
    init(&s);   //  スタックを初期化
    //  1,2,3の順で値をプッシュ
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    //  値をポップ
    while (pop(&s, &value)) {
        printf("%d ", value);//結果出力
    }
    printf("\n");//改行
}
