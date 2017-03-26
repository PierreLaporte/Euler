#include "utils.hpp"

int main()
{
	ifstream input("inputPb13.txt");
	const int nbNombres = 99;

	deque<int> resultat(50);
	deque<int> nombre(50);
	for(int i=0; i<resultat.size(); i++)
		resultat[i] = 0;
	for(int i=0; i<nombre.size(); i++)
		nombre[i] = 0;

	// premier nombre direct dans le vecteur résultat
	char c;
	for(int i=0; i<resultat.size(); i++)
	{
		input >> c;
		resultat[i] = c - '0';
	}

	cout << "res iter 1 : ";
	for(int i=0; i<resultat.size(); i++) cout << resultat[i];
	cout << endl << endl;

	// ensuite on somme chaque nombre
	for(int i=0; i<nbNombres; i++)
	{
		for(int j=0; j<nombre.size(); j++)
		{
			input >> c;
			nombre[j] = c - '0';
		}

		cout << "nbr iter " << i+1 << " : ";
		for(int j=0; j<nombre.size(); j++)
			cout << nombre[j];
		cout << endl << endl;

		resultat = sommeGrandsNombres(resultat, nombre);
		cout << "res iter " << i+1 << " : ";
		for(int j=0; j<resultat.size(); j++)
			cout << resultat[j];
		cout << endl << endl;
	}


	cout << endl;
	return 0;
}