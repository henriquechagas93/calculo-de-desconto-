#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double totalgasto= 0, logica= 0;
	int opcao= 0, parcelas= 0;
	
	cout<<"Digite o valor gasto \n";
	cin>>totalgasto;
	cout<<"\n Escolha uma forma de pagamento: \n ";
	cout<<"\n Opcao 1: A vista com 10% de desconto \n";  
	cout<<"\n Opcao 2: Em duas vezes (preco da etiqueta) \n";
	cout<<"\n Opcao 3: de 3 ate 10 vezes com 3% de juros ao mes (somenta para compras acima de R$100,00)\n";
	cin>>opcao;	
	
	
	switch (opcao){
		
		case 1:
			logica= (totalgasto*90)/100;
			cout<<"A vista com 10% de desconto e: ""R$"<<logica<<" Reais";
			break;
			
		case 2:
			logica= totalgasto/2;
			cout<<"\n Em 2x o valor de cada parcela sera: "<<logica<<" Reais \n";
			break;
			
		case 3:
			cout<<"\n Digite o numero de parcelas \n";
			cin>>parcelas;
			
			if (parcelas==3){
				logica= (totalgasto*3)/100;
				cout<<"O valor das parcelas com juros de 3% sera de "<<(totalgasto+logica)/3<<" Reais";}
				
				else if (parcelas==4){
					logica= (totalgasto*3)/100;
					cout<<"O valor das parcelas com juros de 3% sera de "<<(totalgasto+logica)/4<<" Reais";}
					
				else if (parcelas==5){
					logica= (totalgasto*3)/100;
					cout<<"O valor das parcelas com juros de 3% sera de "<<(totalgasto+logica)/5<<" Reais";}
					
				else if (parcelas==6){
					logica= (totalgasto*3)/100;
					cout<<"O valor das parcelas com juros de 3% sera de "<<(totalgasto+logica)/6<<" Reais";}
					
				else if (parcelas==7){
					logica= (totalgasto*3)/100;
					cout<<"O valor das parcelas com juros de 3% sera de "<<(totalgasto+logica)/7<<" Reais";}
				
				else if (parcelas==8){
					logica= (totalgasto*3)/100;
					cout<<"O valor das parcelas com juros de 3% sera de "<<(totalgasto+logica)/8<<" Reais";}
				
				else if (parcelas==9){
					logica= (totalgasto*3)/100;
					cout<<"O valor das parcelas com juros de 3% sera de "<<(totalgasto+logica)/9<<" Reais";}
				
				else if (parcelas==10){
					logica= (totalgasto*3)/100;
					cout<<"O valor das parcelas com juros de 3% sera de "<<(totalgasto+logica)/10<<" Reais";}
			
			else
			cout<<"\nNUMERO DE PARCELAS INVALIDO!!\n";
			cout<<"\nMaximo de parcelas permitida e 10\n";
			
		
				
				
				
				
		
	
	}
		
	
	return 0;
}
