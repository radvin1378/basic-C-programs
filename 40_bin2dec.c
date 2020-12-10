// Convert binary to decimal and vice-versa

#include<stdio.h>

unsigned long bin2dec(unsigned long bin);
unsigned long dec2bin(unsigned long dec);
unsigned long dec, bin;

int main(void)
{
	int mod;
	printf("Binary to Decimal: 1\nDecimal to Binary: 2\n");
	scanf("%d", &mod);
	if (mod == 1)
	{
		printf("Enter the binary number: ");
		scanf("%lu", &bin);
		bin2dec(bin);
	}
	else
	{
		printf("Enter the decimal number: ");
		scanf("%lu", &dec);
		dec2bin(dec);
	}
	
	return 0;
}

unsigned long bin2dec(unsigned long bin)
{
	int a, exp=0;
	while(bin != 0)
	{
		a = bin%10;
		for (int i=0; i<exp;i++)
			a*=2;
		dec += a;
		bin /= 10;
		exp++;
	}
	printf("%lu\n",dec);
}

unsigned long dec2bin(unsigned long dec)
{
	int a;
	while(dec != 0)
	{
		a = dec%2;
		bin = (bin*10) + a;
		dec /= 2;
	}
	printf("%lu\n",bin);
}
