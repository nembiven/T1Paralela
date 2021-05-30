CXX=g++
CXXFLAGS= -Wall -g3
LDFLAGS= -lm

main: main.cpp Estudiantes.o Funciones.o 
		$(CXX) $(CXXFLAGS) -o app main.cpp Estudiantes.o Funciones.o  $(LDFLAGS)

Funciones.o: Funciones.h Funciones.cpp
		$(CXX) $(CXXFLAGS) -c Funciones.cpp

Estudiantes.o: Estudiantes.h Estudiantes.cpp
		$(CXX) $(CXXFLAGS) -c Estudiantes.cpp


	

	

.PHONY: clean
clean:
		rm -fr *.o app