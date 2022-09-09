#include <iostream>
using namespace std;
void main()
{
	int lista[100] = { 10,5,18,-2,18,-11,21 };
	int nrElemente = 7;


	/*
	* Cautarea unui element
	*/
	int x;
	cin >> x;
	bool rezultat = false;
	for (int i = 0;i < nrElemente;i++)
	{
		if (lista[i] == x)
		{
			rezultat = true;
		}
	}
	

	if (rezultat == true)
	{
		cout << "Exista " << x << endl;
	}
	else
	{
		cout << "Nu exista " << x << endl;
	}


	/*
	* Numarul de aparitii: numara de cate ori apare un element.
	*/


	int contor = 0;
	for (int i = 0;i < nrElemente;i++)
	{
		if (lista[i] == x)
		{
			contor++;
		}
	}

	cout << "Variabila " << x << " a aparut de " << contor << " ori." << endl;


	/*
	* Cautare binara
	*/

	int listaOrdonata[100] = { -30,-15,-7,0,8,12,30,59,79,100,112,200,236,314 };
	int nrElemente2 = 14;
	int elementulDeCautat;
	cin >> elementulDeCautat;


	int capatulInferior = 0;
	int capatulSuperior = nrElemente2;
	int jumatate;
	bool elementulGasit = false;
	while (!elementulGasit)
	{
		jumatate = capatulInferior + (capatulSuperior - capatulInferior) / 2; //Calculam jumatatea dintre capatul superior si inferior.
		if (listaOrdonata[jumatate] == elementulDeCautat)  //Verificam daca elementul cautat este la jumatate
		{
			elementulGasit = true;
		}
		else
		{
			if (listaOrdonata[jumatate] < elementulDeCautat)  //Verificam unde se alfa elementul, daca este mai mare decat jumatatea sau nu.
			{
				capatulInferior = jumatate;  //Mutam capatul inferior.
			}
			else
			{
				capatulSuperior = jumatate;  //Mutam capatul superior.
			}
			if (capatulSuperior == jumatate || capatulInferior == jumatate)
			{
				break;  //Iese fortat din loop.
			}
		}
	}
	if (elementulGasit == true)
	{
		cout << "Elementul de cautat este " << elementulDeCautat << endl;
	}
	else
	{
		cout << "Nu exista elementul de cautat " << elementulDeCautat << endl;
	}













}