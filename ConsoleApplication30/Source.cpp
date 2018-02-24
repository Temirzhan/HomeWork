#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"


using namespace std;
char f;
void main()
{
	setlocale(LC_ALL, "RUS");
	do
	{
		int N;
		cout << "Выберите задание" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			int N;
			cout << "Введите N" << endl;
			cin >> N;
			int K[10];
			 randK( K, 10);
			 for (int i = 1; i < 10; i++)
				 cout << IsPowerN(&K[i], &N) << endl;

		}
		break;
		case 2:
		{
			cout << "Введите число" << endl;
			cin >> N;
			if (IsPrime(&N) == 1)
			{
				cout << "число простое " << endl;
		   }
			else 
				cout << "число не простое " << endl;
		}
		break;
		case 3:
		{
			int K;
			cout << "Ведите число" << endl;
			cin >> K;
			cout << "Какое число вернуть" << endl;
			cin >> N;
			cout << DigitN(&K, &N) << endl;
		}
		break;
		case 4:
		{
			float D;
			cout << "Введите число" << endl;
			cin >> D;
			cout << DegToRad(&D) << endl;
		}
		break;
		case 5:
		{
			float R;
			cout << "Введите радианы" << endl;
			cin >> R;
			cout << RadToRad(&R) << endl;
		}
		break;
		case 6:
		{int K[5];
		randK(K, 5);
		coutFract(K);

		}
		break;
		}

	} while (f == 'y');
}
