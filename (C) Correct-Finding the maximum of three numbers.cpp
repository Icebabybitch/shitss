#include <stdio.h> /// �Ĥ@��
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);///&a �̪� & �O �u��}�B��l�v�A�N��Oa �O�ܼƥ����A�N��̭����u�ȡv ; &a �O�ܼ� a �b�O���餤���u��}�v�Ρu�a�}�v
/// �b C �y�����A�� scanf �o��Ū����J����ơA�ݭn���D�u�ܼƪ���}�v�~���ϥΪ̿�J���Ȧs���ܼƸ̡A�ҥH�n�ǤJ &a�C
/// E.g. :�ܼ� a �O�@�ӫH�c�A�̭��˪F��]�ȡ^, &a �O�o�ӫH�c���a�}�A�i�D�t�ΪF��n����ӫH�c

    int max; /// �N��A�ŧi�@�Ӿ���ܼƥs max�A���٨S���i�D���O�h�֡]�i��O�U���^C �y�����|�۰����A�� max �ܦ� 0 �Ψ�L�F��C���i��O�G732984. -945120. 0...
                 ///�]�H���O����̪�ż�F��^�o�s�� �u�U���ȡv�]garbage value�^�C

    if (a>=b && a>=c){ ///&& �O �޿�u�B�v�B��l�]logical AND operator�^�A�ΨӧP�_�h�ӱ���O�_�P�ɬ��u�C
///if (����1 && ����2) {
/// �����1�M����2�����ߡ]�����u�^�ɡA�~�|����o�̪��{���X
///}
        max = a; /// ��max���,  �ä�j�p
    }
    else if (b>=a && b>=c){
        max = b; /// ��max���,  �ä�j�p
    }
    else{
        max = c; ///��max���,  �ä�j�p
    }
    printf("%d",max);
    return 0;
}

#include <stdio.h> /// �ĤG��-�T�Ƴ̤j��²�g���G
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
