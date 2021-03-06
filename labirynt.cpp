//POP 2018-12-13 projekt 1 Wozniak Mateusz IBM 3 175610  visual studio 2017


#include "pch.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
//#include <iomanip>

using namespace std;

const int MAX = 20;
const int MAXb = 6;


void reset(char[][MAX], char[][MAX]);
void menu();
void rysuj(char[][MAX]);
void pisz1_4(char[][MAX]);
void pisz2_4(char[][MAX]);
void pisz3_4(char[][MAX]);
void pisz4_4(char[][MAX]);
void uwaga(char[][MAX], int[][MAXb], int&, int&);
void ruch(char[][MAX], int&, int&, int[][MAXb], char[][MAX]);
void pulapka(char[][MAX], int[][MAXb]);
void cwiartka(int&, int &, char[][MAX], int[][MAXb], char[][MAX]);
void ruch_w(char[][MAX], int &, int&, int[][MAXb], char[][MAX]);
void ruch_a(char[][MAX], int &, int&, int[][MAXb], char[][MAX]);
void ruch_s(char[][MAX], int &, int&, int[][MAXb], char[][MAX]);
void ruch_d(char[][MAX], int &, int&, int[][MAXb], char[][MAX]);


int main()
{	
	char pole[MAX][MAX] =
	{
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X',' ',' ',' ','X','X',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','M',' ',
		'X',' ','X','X',' ','X',' ','X','X','X','X',' ',' ',' ','X','X','X',' ',' ','X',
		'X',' ',' ',' ','X','X',' ',' ',' ',' ',' ','X','X','X',' ',' ',' ','X',' ','X',
		'X','X','X',' ',' ',' ',' ','X','X','X',' ','X',' ',' ',' ','X',' ',' ',' ','X',
		'X',' ','X',' ','X','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X',
		'X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ','X',' ','X',
		'X',' ',' ','X','X','X','X',' ','X','X','X','X',' ','X',' ','X',' ','X',' ','X',
		'X',' ',' ',' ','X','X','X',' ','X','X','X','X',' ','X',' ','X',' ',' ',' ','X',
		'X',' ',' ',' ','X',' ',' ',' ',' ',' ','X','X',' ','X',' ','X',' ','X','X','X',
		'X','X','X','X','X',' ','X','X','X',' ','X','X','X','X',' ','X',' ',' ',' ','X',
		'X',' ',' ',' ',' ',' ','X',' ','X',' ','X',' ','X','X',' ','X','X','X','X','X',
		'X',' ','X','X','X','X','X',' ','X',' ','X',' ','X','X',' ',' ',' ',' ',' ','X',
		'X',' ','X',' ',' ',' ',' ',' ','X',' ','X',' ','X','X','X','X','X','X',' ','X',
		'X',' ','X',' ','X',' ','X','X','X',' ','X',' ',' ',' ',' ','X',' ','X',' ','X',
		'X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ','X','X',' ','X',' ','X',' ','X',
		'X',' ','X',' ','X','X','X','X','X','X','X',' ','X','X',' ','X',' ','X',' ','X',
		'X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X','X',' ','X',' ','X',' ','X',
		'X','#',' ',' ','X','X','X','X','X','X','X','X','X','X',' ',' ',' ',' ',' ','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
	};
	char pole_new[MAX][MAX] =
	{
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
		'X',' ',' ',' ','X','X',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','M',' ',
		'X',' ','X','X',' ','X',' ','X','X','X','X',' ',' ',' ','X','X','X',' ',' ','X',
		'X',' ',' ',' ','X','X',' ',' ',' ',' ',' ','X','X','X',' ',' ',' ','X',' ','X',
		'X','X','X',' ',' ',' ',' ','X','X','X',' ','X',' ',' ',' ','X',' ',' ',' ','X',
		'X',' ','X',' ','X','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X',
		'X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ','X',' ','X',
		'X',' ',' ','X','X','X','X',' ','X','X','X','X',' ','X',' ','X',' ','X',' ','X',
		'X',' ',' ',' ','X','X','X',' ','X','X','X','X',' ','X',' ','X',' ',' ',' ','X',
		'X',' ',' ',' ','X',' ',' ',' ',' ',' ','X','X',' ','X',' ','X',' ','X','X','X',
		'X','X','X','X','X',' ','X','X','X',' ','X','X','X','X',' ','X',' ',' ',' ','X',
		'X',' ',' ',' ',' ',' ','X',' ','X',' ','X',' ','X','X',' ','X','X','X','X','X',
		'X',' ','X','X','X','X','X',' ','X',' ','X',' ','X','X',' ',' ',' ',' ',' ','X',
		'X',' ','X',' ',' ',' ',' ',' ','X',' ','X',' ','X','X','X','X','X','X',' ','X',
		'X',' ','X',' ','X',' ','X','X','X',' ','X',' ',' ',' ',' ','X',' ','X',' ','X',
		'X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ','X','X',' ','X',' ','X',' ','X',
		'X',' ','X',' ','X','X','X','X','X','X','X',' ','X','X',' ','X',' ','X',' ','X',
		'X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X','X',' ','X',' ','X',' ','X',
		'X','#',' ',' ','X','X','X','X','X','X','X','X','X','X',' ',' ',' ',' ',' ','X',
		'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',
	};

	int bomb[2][MAXb];

	system("cls");
	menu();
	int x = 18;
	int y = 1;
	system("cls");
	pulapka(pole, bomb);
	rysuj(pole);
	cwiartka(x, y, pole, bomb, pole_new);
	//pisz3_4(pole);
	cout << endl << "WYGRALES!!!" << endl;
	cout << "\a";
	reset(pole, pole_new);
}


void reset(char pole[][MAX], char pole_new[][MAX]) //funkcja resetuje zapisana mape do pierwotnej
{
	
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			pole[i][j] = pole_new[i][j];  //"zuzyta" tablica zastapiona przez poczatkowa
		}

	}
	cout << endl << "Klinnij dowolony klawisz aby wrocic do menu! ";
	char k;
	cin >> k;
	main();
}

void menu()
{
	system("cls");
	cout << "   ||  MENU  ||" << endl;
	cout << "1. Rozpocznij gre" << endl;
	cout << "2. Instrukcja" << endl;
	cout << "0. Wyjscie" << endl;
	char i;
	cin >> i;
	switch (i)
	{
	case '1':
		return;
		break;
	case '2':
		system("cls");
		cout << "Aby wygrac musisz przesunac pionek - ''#'' na pole mety - ''M'' znajdujace sie w prawym gornym rogu mapy" << endl;
		cout << "Badz czujny! Na mapie losuja sie pulapki, jesli bedziesz w poblizu zostaniesz o tym poinformowany" << endl << endl;
		cout << "Poruszanie:" << endl;
		cout << "W gore - w" << endl;
		cout << "W dol - s" << endl;
		cout << "W lewo - a" << endl;
		cout << "W prawo - d" << endl;
		cout << "Kliknij dowolny klawisz aby wrocic ";
		char i;
		cin >> i;
		menu();
		break;
	case '0': 
		exit(0);
		break;
	default:
		menu();
		break;
	}
}

void rysuj(char pole[][MAX])      //cala tablica na poczatek gry
{

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{

			cout << pole[i][j] << " ";
		}
		cout << endl;
	}
	char k;
	cout << endl << "Kliknij dowolny klawisz by rozpoczac rozgrywke: ";
	cin >> k;
}

void pisz1_4(char pole[][MAX]) //rysuje odpowiednia cwirtke w trakcie gry
{
	system("cls");
	for (int i = 10; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			cout << pole[i][j] << " ";
		}
		cout << endl;
	}

}

void pisz2_4(char pole[][MAX])
{
	system("cls");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			cout << pole[i][j] << " ";
		}
		cout << endl;
	}
}

void pisz3_4(char pole[][MAX])
{
	system("cls");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 10; j < 20; j++)
		{

			cout << pole[i][j] << " ";
		}
		cout << endl;
	}
}
void pisz4_4(char pole[][MAX])
{
	system("cls");
	for (int i = 10; i < 20; i++)
	{
		for (int j = 10; j < 20; j++)
		{

			cout << pole[i][j] << " ";
		}
		cout << endl;
	}
}

void uwaga(char pole[][MAX], int bomb[][MAXb], int& x, int& y) // Ostrzega przed polem z pulapka
{
	int i = 0;
	for (int j = 0; j < MAXb; j++)
	{
		if ((x - 1) == bomb[i][j] && y == bomb[i + 1][j])
			cout << "UWAZAJ!";
		else if (x == bomb[i][j] && (y - 1) == bomb[i + 1][j])
			cout << "UWAZAJ!";
		else if ((x + 1) == bomb[i][j] && y == bomb[i + 1][j])
			cout << "UWAZAJ!";
		else if (x == bomb[i][j] && (y + 1) == bomb[i + 1][j])
			cout << "UWAZAJ!";
	}

}

void ruch(char pole[][MAX], int &x, int &y, int bomb[][MAXb], char pole_new[][MAX]) //odpowiada za przesuwanie sie pionka
{
	int i = 0;
	uwaga(pole, bomb, x, y);
	char klik;
	klik = _getch();

	switch (klik)
	{
	case 'w':
	case 'W':
		ruch_w(pole, x, y, bomb, pole_new); 
		break;
	case 'a':
	case 'A':
		ruch_a(pole, x, y, bomb, pole_new);
		break;
	case 's':
	case 'S':
		ruch_s(pole, x, y, bomb, pole_new);
		break;
	case 'd':
	case 'D':
		ruch_d(pole, x, y, bomb, pole_new);
		break;
	}

}

void pulapka(char pole[][MAX], int bomb[][MAXb]) 
{
	srand(time(NULL));
	int x = (rand() % 3) + 4; //losuje od 4 do 6 pulapek
	int b = 0;
	int a = 0;
	for (int q = 0; q < x; q++)
	{
		int i = (rand() % 19);  //losuje wspolrzedna 
		int j = (rand() % 19);	//druga wspolrzedna 
		if (pole[i][j] == ' ')  //sprawdza czy jest puste to pole
		{
			                    // pole[i][j] = 'O'; // opcjonalnie mozna wyswieltic pulapki 

			bomb[a][b] = i;     //nowa tablica ze wspolrzednymi bomb 
			bomb[a + 1][b] = j; 
			b++;
		}
		else q--; 
	}


}

void cwiartka(int &x, int &y, char pole[][MAX], int bomb[][MAXb], char pole_new[][MAX])
{
	system("cls");
	while (x != 1 || y != 18) //dziala az pionek zajmie wspolrzedne mety
	{

		if (x >= 10 && y < 10) //wspolrzedne 1/4 cwiartki, sprawdza ktora ma sie wyswietlic 
		{
			pisz1_4(pole);
			ruch(pole, x, y, bomb, pole_new);
		}
		else if (x < 10 && y < 10)
		{
			pisz2_4(pole);
			ruch(pole, x, y, bomb, pole_new);
		}
		else if (x >= 10 && y >= 10)
		{
			pisz4_4(pole);
			ruch(pole, x, y, bomb, pole_new);
		}
		else
		{
			pisz3_4(pole);
			ruch(pole, x, y, bomb, pole_new);
		}
	}
}

void ruch_w(char pole[][MAX], int& x, int& y, int  bomb[][MAXb], char pole_new[][MAX])
{
	int i = 0;
	if (pole[x - 1][y] == 'X')								  //sprawdza czy pole jest zajete
	{
		ruch(pole, x, y, bomb, pole_new);

	}
	else
	{
		for (int j = 0; j < MAXb; j++)
		{
			if ((x - 1) == bomb[i][j] && y == bomb[i + 1][j]) //sprawdza czy na polu ktorym sie ruszam jest jest bomba
			{
				cout << endl << "PRZEGRALES :(" << endl;	  //jesli tak - przegrana
				reset(pole, pole_new);
			}
		}
		pole[x - 1][y] = '#';								  //jesli nie - pionek sie rusza
		pole[x][y] = '.';
		x--;

	}
}

void ruch_a(char pole[][MAX], int& x, int& y, int  bomb[][MAXb], char pole_new[][MAX])
{
	int i = 0;
	if (pole[x][y - 1] == 'X')
	{
		ruch(pole, x, y, bomb, pole_new);
	}
	else
	{
		for (int j = 0; j < MAXb; j++)
		{
			if (x == bomb[i][j] && (y - 1) == bomb[i + 1][j]) 
			{
				cout << endl << "PRZEGRALES :(" << endl; 
				reset(pole, pole_new);
			}
		}
		pole[x][y - 1] = '#';
		pole[x][y] = '.';
		y--;

	}
}

void ruch_s(char pole[][MAX], int& x, int& y, int  bomb[][MAXb], char pole_new[][MAX])
{
	int i = 0;
	if (pole[x + 1][y] == 'X')
	{
		ruch(pole, x, y, bomb, pole_new);
	}
	else
	{
		for (int j = 0; j < MAXb; j++)
		{
			if ((x + 1) == bomb[i][j] && y == bomb[i + 1][j])
			{
				cout << endl << "PRZEGRALES :(" << endl;
				reset(pole, pole_new);
			}
		}

		pole[x + 1][y] = '#';
		pole[x][y] = '.';
		x++;

	}
}

void ruch_d(char pole[][MAX], int& x, int& y, int  bomb[][MAXb], char pole_new[][MAX])
{
	int i = 0;
	if (pole[x][y + 1] == 'X')
	{
		ruch(pole, x, y, bomb, pole_new);
	}
	else
	{
		for (int j = 0; j < MAXb; j++)
		{
			if ((x) == bomb[i][j] && (y + 1) == bomb[i + 1][j])
			{
				cout << endl << "PRZEGRALES :(" << endl;
				reset(pole, pole_new);

			}
		}
		pole[x][y + 1] = '#';
		pole[x][y] = '.';
		y++;

	}
}