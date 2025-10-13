// Draughts.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>

std::vector<char> board{
    '.', 'x', '.', 'x', '.', 'x', '.', 'x',
    'x', '.', 'x', '.', 'x', '.', 'x', '.',
    '.', 'x', '.', 'x', '.', 'x', '.', 'x',
    '.', '.', '.', '.', '.', '.', '.', '.',
    '.', '.', '.', '.', '.', '.', '.', '.',
    'o', '.', 'o', '.', 'o', '.', 'o', '.',
    '.', 'o', '.', 'o', '.', 'o', '.', 'o',
    'o', '.', 'o', '.', 'o', '.', 'o', '.',
};


int main()
{
    for (int i = 0; i < board.size(); ++i) {
        if (i % 8 == 0)
            std::cout << '\n';


        std::cout << board.at(i);
    }
    std::cout << "\n\n";
}

    

/*
int main()
{
    std::cout << "Row 0: 0 1 2 3 4 5 6 7\n";
    std::cout << "Row 1: 0 1 2 3 4 5 6 7\n";
    std::cout << "Row 2: 0 1 2 3 4 5 6 7\n";
    std::cout << "Row 3: 0 1 2 3 4 5 6 7\n";
    std::cout << "Row 4: 0 1 2 3 4 5 6 7\n";
    std::cout << "Row 5: 0 1 2 3 4 5 6 7\n";
    std::cout << "Row 6: 0 1 2 3 4 5 6 7\n";
    std::cout << "Row 7: 0 1 2 3 4 5 6 7\n";
}
*/
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
