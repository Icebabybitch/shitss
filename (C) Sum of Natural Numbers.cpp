#include (stdio.h)
int main()
{
    int n, ans=0;
    scanf("%d", &n);///�� scanf Ū��J�ɡA& �᭱�@�w�n�O�A�Q�s��J���G���ܼƦW�٪���}�C�p�G�A�n��J n�A�N�� &n�Cans �q�`�O�A�{���̥Ψӭp��B�ֿn�Ϊ��A���O�ΨӦs��J�C
///�AŪ�J ans ��An �S���Q��ȡA�ҥH�b for �j�餤 n �O����l�ƪ��A�o�|�ɭP���~�欰�C


    for (int i=1;i<=n;i++){ /// �j��q i=0 �}�l�[�� i <= n�A�o�� i=0 �[ 0 �S���D�A���q�`�D�M�|�q 1 �}�l�C
        ans += n; ///�A�g���F ans += n;�A�o�˨C���j�鳣�[���O n�A���O�ثe�� i�A�ҥH�A�o�쪺���׷|�O n * n�A���O 1 + 2 + 3 + ... + n
    }
    printf("%d",ans);
    return 0;
}
