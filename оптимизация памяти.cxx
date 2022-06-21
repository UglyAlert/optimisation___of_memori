#include <iostream>

int sqrt(const int& a)
{return a*a;}

int main()
{
	const int& f_sqrt = sqrt (2); //лучше чем
	int f_s = sqrt (2);                       //это
	return 0;
}
// для хранения 8 строчки используется sizeof(int) байт
//для хранения 8 строчки используется sizeof(int) * 2 байт