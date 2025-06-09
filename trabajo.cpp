#include <iostream>
using namespace std;
int main()
{
    int numeroSecreto = 5;
    int opcion = 0;

    do
    {
        cout << "  mostrar menu" << endl;
        cout << " 1 saludar" << endl;
        cout << " 2 mostar numero secreto" << endl;
        cout << " 3 salir " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "hola , que tal" << endl;
            break;

        case 2:
            cout << "el numero secreto es " << numeroSecreto << endl;
            break;

        case 3:
            cout << "saliendo del programa" << endl;
            break;
        default:
            cout << "opcion no valida, intente de nuevo" << endl;
            break;
        }

    } while (opcion != 3);

    return 0;
}
