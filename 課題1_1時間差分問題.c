/*
https://sevendays-study.com/algorithm/pr-day4.html
���Ԃ̍��������߂�A���S���Y����C����v���O����
*/
#include <stdio.h>//�X�^���_�[�h�C���v�b�g�A�E�g�v�b�g�̈�

void main() {//���C���֐�
    int h, h1, h2;//����
    int m, m1, m2;//��
    int s, s1, s2;//�b
    int diff, time1, time2, n;//�v�Z�p�̕ϐ����`
    //  ���Ԃ����
    printf("��ڂ̎��Ԃ���͂��Ă��������B\n");//���͎w���i�P�j
    printf("��:");
    scanf("%d", &h1);//���Ԃ���́i�P�j
    printf("��:");
    scanf("%d", &m1);//������́i�P�j
    printf("�b:");
    scanf("%d", &s1);//�b����́i�P�j
    printf("��ڂ̎��Ԃ���͂��Ă��������B\n");//���͎w���i�Q�j
    printf("��:");
    scanf("%d", &h2);//���Ԃ���́i�Q�j
    printf("��:");
    scanf("%d", &m2);//������́i�Q�j
    printf("�b:");
    scanf("%d", &s2);//�b����́i�Q�j
    //  ���ꂼ��̎��Ԃ��A�u�b�v�P�ʂɕϊ�
    time1 = h1 * 3600 + m1 * 60 + s1;//���ԁ{���{�b
    time2 = h2 * 3600 + m2 * 60 + s2;//���ԁ{���{�b
    if (time1 > time2) {//�傫�������珬�������������i�l���}�C�i�X�ɂȂ�Ȃ����߁j�̕���
        diff = time1 - time2;   //  �b�P�ʂł̎��ԍ������߂�
    }
    else {
        diff = time2 - time1;   //  �b�P�ʂł̎��ԍ������߂�
    }
    h = diff / 3600;    //  ���Ԃ����߂�B
    n = diff % 3600;    //  ���ԍ���3600�Ŋ������]����An�ɑ���B
    m = n / 60;//���̍����߂�
    s = n % 60;//�b�̍����߂�
    printf("��̎��Ԃ̎��ԍ��́A%d����%d��%d�b�ł��B\n", h, m, s);

}
