/*
https://sevendays-study.com/algorithm/pr-day5.html
����̍ő�l��\������
*/

#include <stdio.h>//�X�^���_�[�h�C���v�b�g�A�E�g�v�b�g

void main() {//���C���֐�
    //  �����̒l������z��
    int a[5], i, max;//������l���󂯎��p�̔z��Afor���[�v�p�̕ϐ�i�A�ő�l���i�[���邽�߂̕ϐ�
    printf("5�̐��l�������Ă��������B\n");//���͎w��
    for (i = 0; i < 5; i++) {//for���[�v
        printf("a[%d]=", i);//���Ԗڂ̗v�f���\��
        scanf("%d", &a[i]);//�l����
    }
    //  �z��̒l�̍��v���v�Z����B
    max = a[0]; //  ���̍ő�l��a[0]�ɂ���B
    for (i = 1; i < 5; i++) {//for���[�v
        if (a[i] > max) {//���̂Ƃ�a[i]��max���傫�����
            max = a[i];//max�̒l���X�V
        }
    }
    //  ���ʂ̏o��
    printf("�z����̍ő�̐��l��%d�ł��B\n", max);
}