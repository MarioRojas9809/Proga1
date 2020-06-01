#include <iostream>

using namespace std;

void IndiceMasaCorporal()
{
	float Metros = 0;
	int KG = 0;
	int IMC = 0;

	cout << "Ingrese estatura en metros" << endl;
	cin >> Metros;
	cout << "Ingrese peso en kilogramos" << endl;
	cin >> KG;

	IMC = KG / (Metros * Metros);

	if (IMC < 18.5)
	{
		cout << "Peso inferior al normal" << endl;
	}
	else if (IMC == 18.5 || IMC == 24.9)
	{
		cout << "Peso normal" << endl;
	}
	else if (IMC > 25 && IMC < 30)
	{
		cout << "Peso arriba del normal" << endl;
	}
	else
	{
		cout << "Sobrepeso" << endl;
	}

}

void Hipotenusa()
{
	double CatetoO = 0;
	double CatetoA = 0;
	double Hipotenusa = 0;
	 
	cout << "Ingrese cateto opuesto" << endl;
	cin >> CatetoO;
	cout << "Ingrese cateto adyacente" << endl;
	cin >> CatetoA;

	CatetoA = CatetoA * CatetoA;
	CatetoO = CatetoO * CatetoO;
	Hipotenusa = sqrt(CatetoA + CatetoO);

	cout << Hipotenusa << endl;
}

void VolumenEsfera()
{
	float Radio = 0;

	cout << "ingrese el radio de la esfera" << endl;
	cin >> Radio;

	cout << 4 / (3 * (4.1416 * (pow(Radio, 3.0))));
}

void AreaCuadrado()
{
	int Lado;

	cout << "Ingrese el tamaño de un lado del cuadrado" << endl;
	cin >> Lado;
	cout << pow(Lado, 2) << endl;
	
}

void SimuladorBancario()
{
	int Saldo = 0;
	int Cantidad = 0;
	int a = 0;
	bool Exit = 0;
	while (Exit == 0)
	{
		cout << "[1] Consultar saldo" << endl;
		cout << "[2] Sacar dinero" << endl;
		cout << "[3] Depositar dinero" << endl;
		cout << "[4] Salir" << endl;

		cin >> a;
		switch (a)
		{
		case 1:
			cout << Saldo << endl;
			break;
		case 2:
			if (Saldo == 0)
			{
				cout << "No tienes dinero" << endl;
			}
			else
			{
				cout << "Cuanto quiere retirar" << endl;
				cin >> Cantidad;
				if (Cantidad > Saldo)
				{
					cout << "Tu saldo es insuficiente" << endl;
				}
				else
				{
					Saldo -= Cantidad;
					cout << "Tu saldo es: " << Saldo << endl;
				}

			}
			Cantidad = 0;
			break;
		case 3:
			cout << "Ingrese cantidad a depositar" << endl;
			cin >> Cantidad;
			Saldo += Cantidad;
			Cantidad = 0;
			break;
		case 4:
			Exit = 1;
		default:
			break;
		}
	}
}

int main()
{
	int Menu = 0;
	bool Exit = 0;
	cout << "Ingrese un numero" << endl;
	cout << "[1] Indice de masa corporal" << endl;
	cout << "[2] Sacar Hipotenusa" << endl;
	cout << "[3] Volumen de una esfera" << endl;
	cout << "[4] Area de un cuadrado" << endl;
	cout << "[5] Simulador bancario" << endl;
	cout << "[6] Salir" << endl;


	while (Exit == 0)
	{
		cin >> Menu;
		switch (Menu)
		{
		case 1:
			IndiceMasaCorporal();
			break;
		case 2:
			Hipotenusa();
			break;
		case 3:
			VolumenEsfera();
			break;
		case 4:
			AreaCuadrado();
			break;
		case 5:
			SimuladorBancario();
			break;
		case 6:
			Exit = 1;
		default:
			break;
		}
	}
}