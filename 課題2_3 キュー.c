/*
�f�[�^�\���F�L���[�i�����O�o�b�t�@�j
https://sevendays-study.com/algorithm/day2.html
*/
#include <stdio.h>

//  �z��̍ő�̑傫��
#define MAX_LENGTH  100

typedef struct {
    //  �f�[�^���i�[����z��
    int array[MAX_LENGTH];
    //  �ŏ��̈ʒu
    int first;
    //  �Ō�̈ʒu
    int last;
}QUEUE;

//  �X�^�b�N�̏�����
void init(QUEUE*);
//  �l�̃G���L���[
int enqueu(QUEUE*, int);
//  �l�̃f�L���[
int dequeue(QUEUE*, int*);

void main() {
    QUEUE q;
    int value;
    init(&q);   //  �X�^�b�N��������
    //  1,2,3�̏��Œl���v�b�V��
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    //  �l���|�b�v
    while (dequeue(&q, &value)) {
        printf("%d ", value);
    }
    printf("\n");
}

//  �X�^�b�N�̏�����
void init(QUEUE* pQueue)
{
    int i;
    for (i = 0; i < MAX_LENGTH; i++) {
        pQueue->array[i] = 0;
    }
    //  �ŏ��ƍŌ�̈ʒu��擪�ɁB
    pQueue->first = 0;
    pQueue->last = 0;
}
//  �l�̃v�b�V��
int enqueue(QUEUE* pQueue, int value)
{
    //  last�̎����Afirst�Ȃ�΁A���s
    if ((pQueue->last + 1) % MAX_LENGTH == pQueue->first) {
        return 0;
    }
    pQueue->array[pQueue->last] = value;          // �L���[�ɐV�����l������
    pQueue->last = (pQueue->last + 1) % MAX_LENGTH;   // last�̍X�V
    //  �f�[�^���i�[������Ȃ�����
    return 1;
}
//  �l�̃|�b�v
int dequeue(QUEUE* pQueue, int* pValue)
{
    //  �L���[�Ƀf�[�^������Ȃ��Ȃ�A���s
    if (pQueue->first == pQueue->last)
    {
        return 0;
    }
    *pValue = pQueue->array[pQueue->first];           // �����΂�擪�̃L���[��Ԃ�����
    pQueue->first = (pQueue->first + 1) % MAX_LENGTH;   // �L���[�̐擪�����Ɉړ�����
    return 1;

}