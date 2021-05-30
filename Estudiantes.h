#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H
#include<stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
class Estudiantes
{
    public:
        Estudiantes();
        virtual ~Estudiantes();
        int getId();
        string getIdentificador();
        float getLengua();
        float getIngles();
        float getMate();
        float getCiencias();
        float getHistoria();
        float getTecno();
        float getArte();
        float getEdFisica();
        float getPromedio();


        void setidint(float );
        void setidstr(string );
        void setL(float );
        void setI(float );
        void setM(float );
        void setC(float );
        void setH(float );
        void setT(float );
        void setA(float );
        void setE(float );
        void setPromedio();
        void setPromedio2(int,int,int,int);


    protected:

    private:
        int id;
        string identificador;
        float Lengua;
        float Ingles;
        float Mate;
        float Ciencias;
        float Historia;
        float Tecno;
        float Arte;
        float EdFisica;
        float Promedio;
        float Promedio2;

};


#endif // ESTUDIANTES_H
