#include <iostream>
#include "View/clsMainView.h"

using namespace std;

int main()
{
    clsMainView view;
    view.Menu();


//    clsMateriaDTO dto;
//    clsMateriaDAO dao;
//    clsMateriaDTO *lista;
//
//    dto.SetNombre("Matematica");
//    dto.SetProfesor("Pedro");
//    dto.SetId(2);
//    dao.Modificar(dto);
//    //dao.Eliminar(1);
//
//    int c = dao.Count();
//    lista = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
//    dao.Listar(lista);
//    char nombre[50];
//    char profesor[50];
//    for(int x =0; x<c;x++)
//    {
//        lista[x].GetNombre(nombre);
//        lista[x].GetProfesor(profesor);
//        cout <<setw(30)<< lista[x].GetId()<<setw(30)<<nombre<<setw(30)<<profesor<<endl;
//    }



    return 0;
}
