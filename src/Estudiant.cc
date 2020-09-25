#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;

void Estudiant :: Estudiant (){
	dni = 0;
	amb_nota = false;
}

void Estudiant::afegir_nota(double n){
	nota = n;
	amb_nota = true;
}

void Estudiant::modificar_nota(double n){
	nota = n;
}

int Estudiant::consultar_DNI() const{
	return dni;
}
