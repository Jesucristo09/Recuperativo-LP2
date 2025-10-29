#include <iostream>
using namespace std;

int main() {
	
	int operacion=0;
	float a = 0;
	float b = 0;
	float resultado = 0;
	
	char repetir;
	do {
	
	cout<<"ingrese 1 si quiere sumar."<<endl<<"ingrese 2 si quiere restar."<<endl<<"ingrese 3 si quiere multiplicar."<<endl<<"ingrese 4 si quiere dividir."<<endl;
	cin>>operacion;
	
	switch(operacion){
		case 1:
			cout<<"ingrese el primer numero: ";
			cin>>a;
			cout<<"ingrese el segundo numero: ";
			cin>>b;
			resultado = a + b;
			cout<<a<<"+"<<b<<"="<<resultado;
			break;
		case 2:
			cout<<"ingrese el primer numero: ";
			cin>>a;
			cout<<"ingrese el segundo numero: ";
			cin>>b;
			resultado = a - b;
			cout<<a<<"-"<<b<<"="<<resultado;
			break;
		case 3:
			cout<<"ingrese el primer numero: ";
			cin>>a;
			cout<<"ingrese el segundo numero: ";
			cin>>b;
			resultado = a * b;
			cout<<a<<"x"<<b<<"="<<resultado;
			break;
		case 4:
			cout<<"ingrese el dividendo: ";
			cin>>a;
			cout<<"ingrese el divisor: ";
			cin>>b;
			if(b==0){
				cout<<"no se puede dividir entre '0'";
			} else {
			resultado = a / b;
			cout<<a<<"/"<<b<<"="<<resultado;
		}
			break;
	}
	
	cout<<endl<<"ingrese 'y' si quiere continuar: ";
    cin>>repetir;
    } while(repetir=='y'||repetir=='Y');
	
	
}