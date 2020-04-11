#include "clsMateriaView.h"

void clsMateriaView::Menu()
{
    char op;
    bool salir = false;
    while(!salir)
    {
        system("cls");
        cout <<"*----------MATERIAS------------------*"<<endl;
        cout <<"* N - Nueva Materia                  *"<<endl;
        cout <<"* L - Listar Materias                *"<<endl;
        cout <<"* S - Salir                          *"<<endl;
        cout <<"*------------------------------------*"<<endl;
        cout <<"Ingrese una opcion:";
        cin>>op;
        cin.ignore();
        switch(op)
        {
        case 'N':
        case 'n':
        {
            Insertar();
        }
        break;
        case 'l':
        case 'L':
        {
            Listar();
        } break;
        case 's':
        case 'S':
        {
            salir  = true;
        }
        break;
        default:
        {
            cout <<"Opcion incorrecta!!!";
        }
        break;
        }

        cin.get();
    }


}
void clsMateriaView::Insertar()
{
    char nombre[50];
    char profesor[50];
    clsMateriaDTO dto;
    clsMateriaBL bl;

    system("cls");
    cout <<"-------NUEVA MATERIA--------"<<endl;
    cout <<"Ingrese un nombre:";
    cin.getline(nombre,50);

    cout <<"Ingrese el profesor:";
    cin.getline(profesor,50);

    dto.SetNombre(nombre);
    dto.SetProfesor(profesor);
    bl.Insertar(dto);
}

void clsMateriaView::Listar()
{
    clsMateriaBL bl;
    system("cls");
    cout <<"----------LISTADO DE MATERIAS--------"<<endl;

    int c = bl.Count();
    clsMateriaDTO* lista = (clsMateriaDTO*)malloc(sizeof(clsMateriaDTO)*c);
    bl.Listar(lista);

    char nombre[50];
    char profesor[50];
    for(int x =0; x<c; x++)
    {
        lista[x].GetNombre(nombre);
        lista[x].GetProfesor(profesor);
        cout <<setw(30)<< lista[x].GetId()<<setw(30)<<nombre<<setw(30)<<profesor<<endl;
    }
}
