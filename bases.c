/*bases.c -- ��ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡʮ������*/
#include <stdio.h>
int main(void) {
	int x = 100;

	printf("dec = %d;	octal = %o;	hex = %x\n",	x,	x,	x);//%o���˽��ơ�%x��ʮ�����ơ�
	printf("dec = %d;	octal = %#o;	hex = %#x\n", x, x, x);//��#��ʾǰ׺���˽���ǰ���0��ʮ������ǰ���0x��

	return 0;
}
//��������
//dec = 100;      octal = 144;    hex = 64
//dec = 100;      octal = 0144;   hex = 0x64