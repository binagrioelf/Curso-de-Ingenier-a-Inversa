#include <stdio.h>

void operacion1(){
	int a = 2;
	int b = 1;
	int resta = a - b;
	printf("%d\n",resta);
}

void operacion2(){
	int a = 20;
	int b = 1;
	int c = 1;
	int ans = (a - b)+c;
	printf("%d\n",ans);
}

void operacion3(){
	int a = 20;
	int b = 10;
	int c = 1;
	int d = 3;
	int ans = ((a - b)+c)-d;
	printf("%d\n",ans);
}

int
main()
{
	operacion1();
	operacion2();
	operacion3();
	return 0;
}
