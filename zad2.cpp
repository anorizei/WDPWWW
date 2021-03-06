// zad2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;

}

void losuj(int tab[], int rozmiar, int koniec)
{
	srand(time(NULL));
	for(int i=0;i<rozmiar;i++)
		tab[i] = rand() % (koniec + 1);
}

void wypisz(int tab[], int rozmiar)
{
	for(int i=0;i<rozmiar;i++)
		cout << tab[i] << ", " << ;
	cout << endl;
}

int suma(int tab[], int rozmiar)
{
	int suma1 = 0;
	for (int i = 0; i < rozmiar; i++)
		suma1 += tab[i];
	return suma1;
}

int main()
{
	int a = 8;
	int b = 5;
	cout << "wieksza jest: " << max(a, b) << endl;
	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
