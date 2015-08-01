#include <iostream>
#include "presentation.h"
#include "Mathematiques.h"
using namespace std;

int main()
{
    cout << "\t\tBIENVENU SUR LA MINI CALCULATRICE" << endl;
    calculPossible();

    char choixOperation('x');
    do
    {
        cout << "\n\nFaite votre choix : ";
        cin >> choixOperation;
    }while(choixOperation != 'a' && choixOperation != 's' && choixOperation != 'm' && choixOperation != 'd');

    switch (choixOperation)
    {
    case 'a':
        cout << "Vous avez pris l'addition !" << endl;
        additionAplusB(choixOperation);
        break;

    case 's':
        cout << "Vous avez pris la soustraction !" << endl;
        soustractionAmoinB(choixOperation);
        break;

    case 'm':
        cout << "Vous avez pris la multiplication !" << endl;
        multiplicationAfoiB (choixOperation);
        break;
    case 'd':
        cout << "Vous avez pris la division !" << endl;
        divisionAdiviseB(choixOperation);
        break;
    }


    return 0;
}
