#include "Funciones.h"

//-------Función para leer el csv estudiantes e ir almacenandolo en cada Estudiante
void leeProcesa(Estudiantes A[]) 
{
    string lineadatos;
    int i=0;
    ifstream datos;
	datos.open("estudiantes.csv", ios::in); //Abrimos en el archivo datos el estudiantes.csv

	if (datos.fail()) { //En caso de no encontrarse el archvo coutear que no se puede acceder
		cout << "No se pudo acceder al archivo ";
		exit(1);
	}
	int ini, fin;
	string leer;//string para almacenar los datos leidos en el archivo
	char delimitador=';';

	while (getline(datos, lineadatos)){ //Iteración para leer todo el csv

	///  1) id numerico
		ini = 0;								//| Variable auxiliar para definir inicio de string
		fin = lineadatos.find(delimitador);		//| Variable para encontrar el ; y encontrar el final
		leer = lineadatos.substr(ini, fin);		//| Restar el ultimo ; para dejar el string libre
        leer.erase(leer.begin());				//| Borrar la primera "
		leer.pop_back();						//|	Borrar la segunda "
		A[i].setidint(atoi(leer.c_str()));		//| Almacenar el dato de string a entero en el campo

    ///  2) id string
        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer = lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setidstr(leer);

    ///  3) Lenguaje
        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer =  lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setL(atof(leer.c_str()));

    ///  4) Ingles
        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer = lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setI(atof(leer.c_str()));

    ///  5) Matematicas

        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer = lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setM(atof(leer.c_str()));


    ///  6) Ciencias
        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer = lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setC(atof(leer.c_str()));


    ///  7) Historia
        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer = lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setH(atof(leer.c_str()));


    ///  8) Tecnologia
        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer = lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setT(atof(leer.c_str()));


    ///  9) Arte
        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer = lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setA(atof(leer.c_str()));


    ///  10) Ed Fisica
        lineadatos = lineadatos.substr(fin + 1);
		ini = 0;
		fin = lineadatos.find(delimitador);
		leer = lineadatos.substr(ini, fin);
		leer.erase(leer.begin());
		leer.pop_back();
		A[i].setE(atof(leer.c_str()));


		A[i].setPromedio();

		i++;//iterador para mover el array
	}


	datos.close();//cierre del archivo
}
float round(float var) //Funcion para redondear promedios 
{

    float value = (int)(var * 100 ); 
    return (float)value / 100;
}
void imprimir(Estudiantes A[],int n, string x) //Funcion para escribir en los csv requeridos
{											   // A = Arreglo ordenado segun criterio evaluado
											   //n = estudiantes sin considerar evaluados anteriormente
											   //x = nombre a asignar al archivo
    std::ofstream myfile;
    myfile.open (x);

    for(int i=n;i>n-100;i--)
    {
		//Imprimir id ; identificadornumerico ; promedio 
        myfile<<A[i].getId()<<";"<<A[i].getIdentificador()<<";"<<round(A[i].getPromedio())<<endl;
    }
      myfile.close();
}
void definirPromedios(Estudiantes A[], int tipo) // Funcion para asignar valor a variable promedio dependiendo de los requerimientos 
{
    for(int p=0;p<15000;p++)
        {
            if(tipo==1)//artistico
                A[p].setPromedio2(A[p].getArte(),A[p].getEdFisica(),0,2);
            if(tipo==2)//humanismo
                A[p].setPromedio2(A[p].getLengua(),A[p].getHistoria(),0,2);
            if(tipo==3)//tenicos
                A[p].setPromedio2(A[p].getTecno(),A[p].getMate(),A[p].getCiencias(),3);
        }
}

void quicksort(Estudiantes A[],int izq, int der) //Quick sort para ordenar arreglo en base a los promedios
{

    int i, j ;
    Estudiantes aux;
    i = izq;
    j = der;

    float x = A[ (izq + der) /2 ].getPromedio();
    do{
        while( (A[i].getPromedio() < x) && (j <= der) )
        {
            i++;
        }

        while( (x < A[j].getPromedio()) && (j > izq) )
        {
            j--;
        }

        if( i <= j )
        {
            aux = A[i]; A[i] = A[j]; A[j] = aux;
            i++;  j--;
        }

    }while( i <= j );

    if( izq < j )
        quicksort( A, izq, j );
    if( i < der )
        quicksort( A, i, der);
}

