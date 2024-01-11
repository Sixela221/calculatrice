#include <iostream>

using namespace std;

int main() {
    float nombre1, nombre2;
    char operateur;

    
    cout << "Entrez le premier nombre : ";
    cin >> nombre1;
    cout << "Entrez le deuxième nombre : ";
    cin >> nombre2;

    
    cout << "Choisissez l'operateur (+, -, *, /) : ";
    cin >> operateur;

    float resultat;

    
    switch (operateur) {
        case '+':
            resultat = nombre1 + nombre2;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            break;
        case '/':
            if (nombre2 != 0) {
                resultat = nombre1 / nombre2;
            } else {
                cout << "Division par zéro impossible !" << endl;
                return 1; 
            }
            break;
        default:
            cout << "Operateur non valide !" << endl;
            return 1; 
    }

    cout << "Le resultat de " << nombre1 << " " << operateur << " " << nombre2 << " est : " << resultat << endl;

    return 0; 
}
