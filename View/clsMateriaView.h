#ifndef CLSMATERIAVIEW_H
#define CLSMATERIAVIEW_H
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "../DTO/clsMateriaDTO.h"
#include "../BL/clsMateriaBL.h"

using namespace std;

class clsMateriaView
{
    public:
        void Menu();
        void Insertar();
        void Listar();

};

#endif // CLSMATERIAVIEW_H
