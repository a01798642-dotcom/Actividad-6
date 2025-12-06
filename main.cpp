#include <iostream>
#include "Fraccion.h"

using std::cout;
using std::cin;

int main()
{
    Fraccion fracciones[5];

    for (int i = 0; i < 5; ++i)
    {
        int num, den;

        cout << "Fraccion #" << (i + 1) << "\n";

        cout << "  Ingresa el numerador: ";
        cin >> num;

        do // Para asegurarse que el denominador no sea 0
        {
            cout << "  Ingresa el denominador (no puede ser 0): ";
            cin >> den;
        } while (den == 0);

        fracciones[i] = Fraccion(num, den);
    }

    Fraccion sumatoria(0, 1); // Fracción inicial
    for (int i = 0; i < 5; ++i)
    {
        sumatoria.sumar(fracciones[i]);
    }

    cout << "\nSumatoria de las 5 fracciones: "
         << sumatoria.to_string() << "\n";

    return 0;
}
