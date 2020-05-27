#include <iostream>
#include <vector>

using namespace std;

/*
int NumerosRomanos(string a) 
{
	int Numbers[11]{ 0,0,0,0,0,0,0,0,0,0,0 };
	int Arabic = 0;
	for (int i = 0; i < a.size(); i++)
	{
		switch (a[i])
		{
		case 'i':
			Numbers[i] = 1;
			break;
		case 'v':
			Numbers[i] = 5;
			break;
		case 'x':
			Numbers[i] = 10;
			break;
		case 'l':
			Numbers[i] = 50;
			break;
		case 'c':
			Numbers[i] = 100;
			break;
		default:
			break;
		}
	}
	for (int i = 10; i >= 0 ; i--)
	{
		while (Numbers[i - 1] == Numbers[0])
		{
			if (Numbers[i - 1] < Numbers[i])
			{
				Arabic = (Numbers[i - 1] - Numbers[i]);
			}
			else
			{
				Arabic = (Numbers[i - 1] + Numbers[i]);
			}
		}

	}
	return Arabic;
}*/
int Fibonacci(int a) 
{
	vector <int> Fib;

	Fib.push_back(0);
	Fib.push_back(1);

	for (int i = 2; i < a; i++)
	{
		Fib.push_back(Fib[i - 1] + Fib[i - 2]);
	} 
	return Fib[a-1];
}
int main()
{
	cout << Fibonacci(10) << endl;
}