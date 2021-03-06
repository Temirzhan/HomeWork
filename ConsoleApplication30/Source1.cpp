﻿#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;
int IsPowerN(int *K,int  *N)
{
	if ((*K > 0) && (*N > 1) && (sqrt(*K) == *N))
		return 1;

		return 0;
 }
void randK(int *K, int B)
{
	for (int i = 0; i < B; i++)
	{
		K[i] = 1 + rand() % 10;
  }
}
int IsPrime(int *N)
{
	/*Описать функцию IsPrime(N) логического типа, возвращающую True, если целый параметр N(> 1) является простым числом, и False в противном случае(число, большее 1, называется простым, если оно не имеет положительных делителей, кроме 1 и самого себя).Дан набор из 10 целых чисел, больших 1. С помощью функции IsPrime найти количество простых чисел в данном наборе.*/
	for (int i = 2; i < *N; i++)
	{
		if ((*N % i) == 0)
			return 0;
	}
	return 1;

}
int DigitN(int *K, int *N)
{
	/*Описать функцию DigitN(K, N) целого типа, возвращающую N - ю цифру целого положительного числа K(цифры в числе нумеруются справа на - лево).
	Если количество цифр в числе K меньше N, то функция возвращает –1.
	Для каждого из пяти данных целых положительных чисел K1, K2, …, K5 вызвать функцию DigitN с параметром N, изменяющимся от 1 до 5.*/
	if (*K < *N)
		return -1;
	int Nul=1;
	for (int i = 1; i < *N; i++)
	{
		Nul *= 10;
	}
	return (*K / Nul) % 10;
}
#define p 3.14;
float DegToRad(float *D)
{
	if (0 < *D < 360)
	{
		*D = (*D / 180)*p;
		return *D;
	}
	/*Описать функцию DegToRad(D) вещественного типа, находящую величину угла в радианах, если дана его величина D в градусах(D — вещественное число, 0 < D < 360)
	.Воспользоваться следующим соотношением : 180° = π радианов.В качестве значения π использовать 3.14.С помощью функции DegToRad перевести из градусов в радианы пять данных углов.*/
	return 0;
}

float RadToRad(float *R)
{
	if (0 < *R < 2*3.14)
	{
		*R = (*R /3.14)*180;
		return *R;
	}
	/*Описать функцию RadToDeg(R) вещественного типа, находящую вели- чину угла в градусах, если дана его величина R в радианах (R — вещественное число, 0 < R < 2·π).
	Воспользоваться следующим соотношением: 180° = π радианов. В качестве значения π использовать 3.14. С помощью функции RadToDeg перевести из радианов в градусы пять данных углов
	*/
	return 0;
}
int Fact(int*n)
{
	/*Описать функцию Fact(N) вещественного типа, вычисляющую значение факториала N! = 1·2·…·N (N > 0 — параметр целого типа; вещественное возвращаемое значение используется для того,
	чтобы избежать цело- численного переполнения при больших значениях N).
	С помощью этой функции найти факториалы пяти данных целых чисел.*/
	int factorial = 1;
	if (*n> 0)
	{
		for (int i = 1; i<=*n; i++)
		{
			factorial *= i;
		}
		return factorial;
}
	return 0;
}

void coutFract(int*K)
{
	for (int i = 0; i < 5; i++)
	{
		cout << Fact(&K[i]) << endl;
	}
}