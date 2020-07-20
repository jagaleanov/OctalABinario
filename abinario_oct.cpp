#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

//Firma de la función 
long binario(long octal);

int main(int argc, char** argv) {
	
	//Solicita el numero al usuario
	long a;
	cout<<"Ingrese un numero en base octal para obtenerlo en base binaria"<<endl;
	cin>>a;
	
	//Calcula e imprime el numero en binario
	cout<<"El numero en binario es: "<<binario(a)<<endl;
	
	return 0;
}


long binario(long octal){
	
	//Matriz de valores binarios
	int matrix [8] = { 0, 1, 10, 11, 100, 101, 110, 111 };
	
	//separa el ultimo digito del numero
	long dig = octal % 10;
	
	//separa el resto del numero
	long octa = ( octal - dig ) / 10
	
	
	
}
