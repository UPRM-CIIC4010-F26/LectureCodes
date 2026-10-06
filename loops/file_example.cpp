#include <fstream>
#include<iostream>

using namespace std;
int main()
{
    ifstream archivo("entrada.txt"); // read file

    if (!archivo.is_open())
    {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    string linea; // Current file line
    while (getline(archivo, linea))
    { // Print every line in file
        cout << linea << endl;
    }
    archivo.close();
}
