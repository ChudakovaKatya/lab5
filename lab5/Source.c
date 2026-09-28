#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI   3.14159265358979323846

int z1()
{
	setlocale(LC_CTYPE, "UTF-8");
	int gr;
	double sinus;
	puts("Введите градус угла:");
	scanf("%d", &gr);
	printf("Перевод градусов в радианы: %f\n", gr * M_PI / 180);
	sinus = sin (gr * M_PI / 180);
	printf("Синус угла = %.6f\n", sinus);
	system("pause");
}
int z2()
{
	setlocale(LC_CTYPE, "UTF-8");
	printf("Вариант работы: %d\n", 31 % 13 + 1);
	double x;
	double y;
	double k;
	double a;
	double b;
	k = 8.2;
	puts("Переменная k = 8.2");
	puts("Введите переменную x: ");
	scanf("%lf", &x);
	b = sqrt(fabs(x));
	printf("Значение переменной b = %.2lf\n", b);
	a = pow(b, 4) + pow(k, 3);
	printf("Значение переменной a = %.2lf\n", a);
	y = pow(log(a), 3) + exp(-x);
	printf("Значение переменной y = %.2lf\n", y);



}


int main()
{
	z1();
	z2();

}