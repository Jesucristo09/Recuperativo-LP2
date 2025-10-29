#include <iostream>
#include<cstdlib>
#include <ctime> 
using namespace std;
 
 int main() {
 	
 	int aleatorio=0;
 	int intento=0;
 	int contadorIntentos=0;
 	
 	char repetir;
 	
	do {
 	srand(time(0));
    int aleatorio = rand() % 100 + 1;
    contadorIntentos = 0;

    
    while(contadorIntentos < 5){
    	
    cout<<"escriba un numero del 1 al 100: ";
    cin>>intento;
    if(intento>aleatorio){
    	cout<<"el numero secreto es mas bajo"<<endl;
 
	} else if(intento<aleatorio){
		cout<<"el numero secreto es mas alto"<<endl;
    
	}else if(intento==aleatorio){
		cout<<"correcto, "<<intento<<" es el numero secreto.";
		break;
    }
    contadorIntentos++;
    
    if(contadorIntentos == 5 && intento!=aleatorio){
		cout<<"fallaste, el numero secreto era: "<<aleatorio<<endl;
	}
	
	}

    
    cout<<endl<<"ingrese 'y' si quiere continuar: ";
    cin>>repetir;
    } while(repetir=='y'||repetir=='Y');
	
 	
 }