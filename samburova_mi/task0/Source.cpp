#include <stdio.h>
#include "math.h"
#include "locale.h"
void main()
{
	double r1, r2, a, q, x1, y1, x2, y2;
	setlocale(LC_ALL, "Russian");
	printf ("������� ���������� ������� �����������");
    scanf_s ("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	q = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf ("������� ������� �����������");
	scanf_s ("%f %f", &r1, &r2);
	if (r2 > r1)
		{
			a = r1;
			r1 = r2;
			r2 = a;
		}
	 if ((r1 == r2) && (q == 0))
		printf ("���������� ���������");
		else if (q == 0) 
		 printf ("���� ���������� ��������� ������ ������ � �� ������ ���������");
		else return;

		if ((q < r1) && (r1 > 2 * r2)) 
		 printf ("����� ���������� ��������� ������ �������");
		else if (q == r1)
		  printf ("����� ����� ���������� ����� �� �������");
		else if ((q > r1) && (q < r1 + r2))
		 printf ("����� ���������� ���������� ������� � 2 ������ � ������� �� ����� ����� ������ �������");
		else if ((q < r1) && (q + r2 > r1)) 
		 printf ("����� ���������� ���������� ������� � 2 ������ � ������� �� ����� ����� ������ �������");
		else if (q == r1 + r2) 
		 printf ("���������� �������� ������� �������");
		else if (q > r1 + r2)
		 printf("���������� ��������� �� ����������� ���������� ���� �� �����");

		
		scanf_s("%f", &a);
}