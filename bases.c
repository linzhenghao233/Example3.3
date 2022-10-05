/*bases.c -- 以十进制、八进制、十六进制打印十进制数*/
#include <stdio.h>
int main(void) {
	int x = 100;

	printf("dec = %d;	octal = %o;	hex = %x\n",	x,	x,	x);//%o：八进制。%x：十六进制。
	printf("dec = %d;	octal = %#o;	hex = %#x\n", x, x, x);//加#显示前缀，八进制前面加0，十六进制前面加0x。

	return 0;
}
//输出结果：
//dec = 100;      octal = 144;    hex = 64
//dec = 100;      octal = 0144;   hex = 0x64