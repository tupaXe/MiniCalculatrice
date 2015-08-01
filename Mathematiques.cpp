#include "Mathematiques.h"
#include <iostream>

using namespace std;

char additionAplusB (char choix)
{
    double a(0.0), b(0.0);
    do
    {
    cout << "Saisir la valeur de A : ";
    cin >> a;
    cout << "Saisir la valeur de B : ";
    cin >> b;
    }while(a == 0 && a == b);

    double const resultat (a + b);
    cout << a << " + " << b << " = " << resultat << endl;

    return resultat;
}

char soustractionAmoinB (char choix)
{
    double a(0.0), b(0.0);
    do
    {
    cout << "Saisir la valeur de A : ";
    cin >> a;
    cout << "Saisir la valeur de B : ";
    cin >> b;
    }while(a == 0 && a == b);

    double const resultat (a - b);
    cout << a << " - " << b << " = " << resultat << endl;

    return resultat;
}

char multiplicationAfoiB (char choix)
{
    double a(0.0), b(0.0);
    do
    {
    cout << "Saisir la valeur de A : ";
    cin >> a;
    cout << "Saisir la valeur de B : ";
    cin >> b;
    }while(a == 0 && a == b);

    double const resultat (a * b);
    cout << a << " * " << b << " = " << resultat << endl;

    return resultat;
}

char divisionAdiviseB (char choix)
{
    double a(0.0), b(0.0);
    do
    {
    cout << "Saisir la valeur de A : ";
    cin >> a;
    cout << "Saisir la valeur de B : ";
    cin >> b;
    }while(a == 0 && a == b);

    double const resultat (a / b);
    cout << a << " / " << b << " = " << resultat << endl;

    int resteA (a), resteB (b);
    const int resultatDuReste(resteA % resteB);
    cout << "Il vous reste : " <<  resultatDuReste << endl;

    return resultat, resultatDuReste;
}
