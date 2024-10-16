#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longuitud = 0;
}

void Pila::insertar(int v)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longuitud++;
} 

int Pila::extraer()
{
    pnodoPila nodo;
    int v;

    if(!ultimo)
    {
        return 0;
    }

    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longuitud--;
    delete nodo;

    return v;

}

int Pila::cima()
{
    pnodoPila nodo;

    if (!ultimo)
    {
        return 0;
    }

    return ultimo->valor;
    
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;

    cout << "\tEl contenido de la pila es: ";
    while(aux)
    {
        cout << "->" <<aux->valor ;
        aux = aux->siguiente;
    }

    cout << endl;
}   

int Pila::getLongitud()
{
    return this->longuitud;
}

Pila::~Pila()
{
}

