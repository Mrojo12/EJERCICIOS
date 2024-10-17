#include "NodoCola.hpp"

NodoCola::NodoCola(Persona* p, NodoCola* sig)
{
    persona = p;
    siguiente = sig;
}

NodoCola::~NodoCola()
{
}

