///��¦�D�G�ڭ̻P�c���Z�� : ��J�@�Ӿ�ơA��X�Ӿ�ƻP2���Z���C

#include <stdio.h>
#include <stdlib.h>// �ޤJ�зǨ禡�w�A���A�i�H�ϥ� abs() �禡
int main()
{
    int num;
    scanf("%d", &num);

    int distance = abs(num-2);// �p���J�Ʀr�P 2 ���Z���]����ȡ^
    printf("%d", distance);
    return 0;
}

///�u�Z���v�O�����I�������D�t�Z���]����O�t���^,��ܪ��O�u��̮t�h�֡v�A�����a��V�C
///�u�Z���v�N�O����ȡ]absolute value�^�A�N��O�������t���A�u�ݤj�p�C
///�b�{���̡A�g a - 2 �|�o�쥿�Ʃέt�ơA���D�حn�D���O�Z���A���ӬO�ua �M 2 ����������t�ȡv�A�ҥH�n�� abs() �禡�Ϊ̦ۤv�P�_�A�p�G�O�t���N���ϡC
