#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longuitud = 0;
}

void Pila::insertar(Persona* p)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longuitud++;
} 

Persona* Pila::extraer()
{
    pnodoPila nodo;
    Persona* p;

    if(!ultimo)
    {
        return 0;
    }

    nodo = ultimo;
    ultimo = nodo->siguiente;
    p = nodo->persona;
    longuitud--;
    delete nodo;

    return p;

}

Persona* Pila::cima()
{

    if (!ultimo)
    {
        return 0;
    }

    return ultimo->persona;
    
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;

    cout << "\tEl contenido de la pila es: ";
    while(aux)
    {
        cout << "->" << aux->persona->getEdad();
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

