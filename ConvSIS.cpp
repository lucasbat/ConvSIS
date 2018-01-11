/*

DATA: 10/08/17
PROGRAMA: ConvSIS
LINGUAGEM: C++ 
Lucas Batista

-Converte número decimal para binário, octal e hexadecimal
*/

#include<iostream>
#include<cstdlib>
using namespace std;

void menu1(){
	
	cout<<"\n ========================================= ";
	cout<<"\n  CONVERSOR DE SISTEMAS NUMERICOS CSN 1.0";
	cout<<"\n \t\tLucas Batista ";
	cout<<"\n ========================================= ";

	cout<<"\n\n[1] - Decimal -> Binario";
	cout<<"\n[2] - Decimal -> Octal";
	cout<<"\n[3] - Decimal -> Hexadecimal";
	cout<<"\n[0] - Sair";
	cout<<"\n\n";
}
void decbin(int x)//converte dec para bin
{

		if(x!=0){
			decbin(x/2);
			cout<<x%2;
		}
}
void decoct(int x)//converte dec para oct
{
	if(x!=0){
		decoct(x/8);
		cout<<(x%8);
	}
}
void dechex(int x)//converte dec para hex
{
	if(x!=0){
		dechex(x/16);	
		//A partir troca os números por letras
		if(x%16==10)
			cout<<"A";
			else	
				if(x%16==11)
					cout<<"B";
				else
					if(x%16==12)
						cout<<"C";
					else
						if(x%16==13)
							cout<<"D";
						else
							if(x%16==14)
								cout<<"E";
							else
								if(x%16==15)
									cout<<"F";
								else
									cout<<(x%16);			
	}		
}
int main(){
	int x, op=0;
	char resp;
	do{
		
		menu1(); //chama o menu1
		cout<<"\n\nEscolha uma opcao: [   ]\b\b\b"; 
		cin>>op; //lê a resposta e armazena em op
		
			if(op==1)
			{
				do{
					system("cls"); //em linux usa ("clear") 
					menu1();
					cout << "\n\n-------------------------------";
					cout << "\n-CONVERSAO: Decimal -> Binario-";
					cout << "\n-------------------------------";
					cout<<"\nDigite um numero: "; cin>>x;
					decbin(x);
					cout<<"\n\nDeseja converter outro? [s/n] "; cin>>resp;
					system("cls"); //em linux usa ("clear")
				}while(resp=='s' || resp=='S');
			}
			else
				if(op==2)
				{
					do{
						system("cls");
						menu1();
						cout << "\n\n-----------------------------";
						cout << "\n-CONVERSAO: Decimal -> Octal-";
						cout << "\n-----------------------------";
						cout<<"\nDigite um numero: "; cin>>x;
						decoct(x);
						cout<<"\n\nDeseja converter outro? [s/n] "; cin>>resp;
						system("cls");;
					}while(resp=='s' || resp=='S');
				}
				else
					if(op==3)
					{
						do{
							system("cls");
							menu1();
							cout << "\n\n-----------------------------------";
							cout << "\n-CONVERSAO: Decimal -> Hexadecimal-";
							cout << "\n-----------------------------------";
							cout<<"\nDigite um numero: "; cin>>x;
							dechex(x);
							cout<<"\n\nDeseja converter outro? [s/n] "; cin>>resp;
							system("cls");
						}while(resp=='s' || resp=='S');
					}
					else{
						system("cls");
						cout<<"\nOpcao Invalida.";
					}
						
	}while(op!=0);
	
	cout<<"\n\n";
	return 0;	
}
