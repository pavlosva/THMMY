/**
* main.cpp
* ����������������� ��������, 4� �������
* ����� ���������
* �������� ���������, 8551
* 03/11/2015
*/

#include <iostream>
#include "calendar.h"

int main()
{
	calendar a(10, 1, 2014), b(35, 14, 2015); //���������� ��� ������������ a �� ����� ����������, b �� �� ����� ���������� ��� ����������� ���������.
	calendar c, d; //���������� ��� ������������ c, d, e �� �� �������������� ����������.
	a.getDate(); //�������� ��� ����������� ��� a.
	b.getDate(); //�������� ��� ����������� ����� ����������� ��� b.

	c = a + b; //'������� ��� ����������� ��� a, b ��� �������� ��� ����������� ���� ��� c.
	d = a - b; //�������� ��� ����������� ��� a, b ��� �������� ��� �������� ���� ��� c.

	c.getDate(); //�������� ��� ����������� ��� c.
	d.getDate(); //�������� ��� ����������� ��� d.

	calendar f(a); //���������� ��� ������������ e ��� ����� ��� copy constructor ��� ��������� ��� a ��� e;
	calendar e = a; //����� �� �� �������� �� ����������� ����� ��������;
	calendar g;
	g = a; //� ��������� ������ �� ����� �� ����, ���� ��� ������ ��� ���������� destructor, ���� ���� ����������� ��� ������� "=".

	e.getDate(); //�������� ��� ����������� ��� e.
	f.getDate(); //�������� ��� ����������� ��� e.
	g.getDate(); //�������� ��� ����������� ��� e.

	system("pause");
	return 0;
}