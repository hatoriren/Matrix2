#include <iostream>
#include <ctime> // Для використання функції time()
#include <cstdlib>

using namespace std;

void nadglowek() {

    for (int i = 0; i < 120; i++) {
       cout << "*";
    }

    cout << endl;


    for (int i = 0; i < 120; i++)
    {
        cout << " ";
    }


    cout << "Anastasiia Nerestenko";

    for (int i = 0; i < 120; i++) {
       cout << " ";
    }

    cout << endl;

    for (int i = 0; i < 120; i++) {
       cout << "*";
    }
    cout<< endl;
}

void wyswietlanie(int TAB[10][10], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < rozmiar; j++) {
            cout << TAB[i][j] << " ";
        }
        cout << endl;
    }
}

void losowanie(int TAB[][10], int rozmiar, int liczba1, int liczba2) {

    for (int i = 0; i < rozmiar; i++) { 
        for (int j = 0; j < rozmiar; j++) {
            TAB[i][j] = rand() % (liczba2 - liczba1 + 1) + liczba1;
        }
    }

}

void dodawanie(int TAB1[][10], int TAB2[][10], int TAB3[][10], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < rozmiar; j++) {
            TAB3[i][j] = TAB1[i][j] + TAB2[i][j];
        }
    }
}

int main()
{
    int rozmiar;
    int liczba1, liczba2;
    int TAB1[10][10], TAB2[10][10], TAB3[10][10], TAB4[10][10];
    
    nadglowek();

    cout << "Podaj rozmiar kwadratowej macierzy: ";
    cin >> rozmiar;

    
    if (rozmiar > 10) {
        cout << "Rozmiar jest za duzy!";
        return 1;
    }


    cout << "\nZadaj przedzial losowania liczb" << endl;
    cout << "\nPoczatek: ";
    cin >> liczba1;
    cout << "\nKoniec: ";
    cin >> liczba2;
    cout << endl;

    srand(time(NULL));

    losowanie(TAB1, rozmiar, liczba1, liczba2);
    losowanie(TAB2, rozmiar, liczba1, liczba2);
    losowanie(TAB3, rozmiar, liczba1, liczba2);

    
    wyswietlanie(TAB1, rozmiar);

    cout << endl;

    wyswietlanie(TAB2, rozmiar);

    cout << endl;

    wyswietlanie(TAB3, rozmiar);

    cout << endl;


    dodawanie(TAB1, TAB2, TAB4, rozmiar);
    dodawanie(TAB3, TAB4, TAB4, rozmiar);

    wyswietlanie(TAB4, rozmiar);

    cout << endl;

    system("pause");
    return 0;
}



