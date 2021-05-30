#include "Estudiantes.h"

Estudiantes::Estudiantes()
{
    //ctor
}
Estudiantes::~Estudiantes()
{
    //dtor
}
int Estudiantes::getId()
{
    return id;
}
string Estudiantes::getIdentificador()
{
    return identificador;
}
float Estudiantes::getLengua()
{
    return Lengua;
}
float Estudiantes::getIngles()
{
    return Ingles;
}
float Estudiantes::getMate()
{
    return Mate;
}
float Estudiantes::getCiencias()
{
    return Ciencias;
}
float Estudiantes::getHistoria()
{
    return Historia;
}
float Estudiantes::getTecno()
{
    return Tecno;
}
float Estudiantes::getArte()
{
    return Arte;
}
float Estudiantes::getEdFisica()
{
    return EdFisica;
}
void Estudiantes::setidint(float e)
{
    id=e;
}
void Estudiantes::setidstr(string e)
{
    identificador=e;
}
void Estudiantes::setL(float e)
{
    Lengua=e;
}
void Estudiantes::setI(float e)
{
    Ingles=e;
}
void Estudiantes::setM(float e)
{
    Mate=e;
}
void Estudiantes::setC(float e)
{
    Ciencias=e;
}
void Estudiantes::setH(float e)
{
    Historia=e;
}
void Estudiantes::setT(float e)
{
    Tecno=e;
}
void Estudiantes::setA(float e)
{
    Arte=e;
}
void Estudiantes::setE(float e)
{
    EdFisica=e;
}
void Estudiantes::setPromedio()//Calcular el promedio general del estudiante
{
    Promedio=Lengua+Ingles+Mate+Ciencias+Historia+Tecno+Arte+EdFisica;
    Promedio/=8;
}

void Estudiantes::setPromedio2(int a, int b, int c,int n) // Calcular promedio especifico para evaluaciones post maximos
{
    Promedio=a+b+c;
    Promedio/=n;
}
float Estudiantes::getPromedio()
{
    return Promedio;
}
