#include <iostream>
using namespace std;

int main() {

char repetir;

int saldo=500;
int a=0;
int retiro=0;
int deposito=0;

 do {
 	cout<<endl<<"ingrese 1 si quire consultar saldo, ingrese 2 si quiere retirar fondos, ingrese 3 si quiere depositar: ";
 	cin>>a;
 	
 	saldo=500;
 	
 	switch(a) {
 		case 1:
 			cout<<"Su saldo es: $"<<saldo;
 			break;
 		case 2:
 			cout<<"cuantos fondos quiere retirar: ";
 			cin>>retiro;
 			if(retiro < saldo){
 			saldo=saldo - retiro;
 			cout<<"dinero retirado. Saldo actual: "<<saldo;
 		} else {
 			cout<<"fondos insuficientes";
		 }
		 break;
		 case 3:
		 	cout<<"ingrese los fondos que quiere depositar: ";
		 	cin>>deposito;
		 	saldo=saldo+deposito;
		 	cout<<"Fondos depositados. Su saldo actual es: "<<saldo;
		 	break;
	
	 }
 	
 	
 	cout<<endl<<"ingrese 'y' si quiere continuar: ";
    cin>>repetir;
    } while(repetir=='y'||repetir=='Y');

	return 0;
}