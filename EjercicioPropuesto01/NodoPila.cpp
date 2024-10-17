#include "NodoPila.hpp"

NodoPila::NodoPila(Persona* p, NodoPila* sig)
{
    persona = p;
    siguiente = sig;
}

NodoPila::~NodoPila()
{
}

