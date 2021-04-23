#include <iostream>
using std::cout;
using std::cin;
using std::endl;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion = 0;
	do {
		cout<<"\n"<<"=====================MENU=================\n1.tablero de ajedrez\n2.sumatoria\n3.Sacar raiz cuadrado\n4.salir\n";
		cout<<"opcion:";
		cin>>opcion;
		switch(opcion) {
			case 1: {
				int filas;
				cout<<"ingrese numero de filas y columnas:";
				cin>>filas;
				while(filas<=0) {
					cout<<"el valor de filas y columnas no puede ser negativo, ingreselo de nuevo:";
					cin>>filas;
				}
				for(int i = 1; i<=filas; i++) {
					for(int j = 1; j<=filas; j++) {
						if(i%2==0) {
							if(j%2==0) {
								cout<<"0";
							} else {

								cout<<"1";
							}
						} else  {

							if(j%2==0) {
								cout<<"1";
							} else {

								cout<<"0";
							}


						}
					}
					cout<<"\n";
				}
				break;
			}
			case 2: {
				int n;
				cout<<"ingrese el valor de n:";
				cin>>n;
				while(n<=0) {
					cout<<"el valor de n no puede ser negativo ni 0, ingrese n de nuevo:";
					cin>>n;
				}
				int resul=0;
				for(int i=1; i<=n; i++) {
					resul+=((2*i)*(i -1));

				}
				cout<<"s("<<n<<")="<<resul<<"\n";
				break;
			}
			case 3: {
				double n;
				cout<<"ingrese valor para n:";
				cin>>n;
				while(n<=0) {
					cout<<"ingrese valor para n mayor a 0:";
					cin>>n;

				}//validacion de n
				int t;
				cout<<"ingrese valor para t mayor o igual a 10:";
				cin>>t;
				while(t<10) {
					cout<<"ingrese valor valido para t mayor o igual 10 :";
					cin>>t;
				}//validacion de t
				int ax = n;//para no perder el valor de n
				double max=n;//el valor final
				double inicio = 0;//el valor de inicio
				for(int i =0 ; i<t; i++) {
					n =  ((inicio+max)/2.0);
					if((n*n)>ax) {
						max = n;

					} else if((n*n)<ax) {
						inicio=n;

					} else if((n*n)==ax) {
						cout<<"la raiz es :" <<n;
						break;
					}


				}//fin for
				cout<<"la raiz aproximada es:" <<n;

				break;
			}
			case 4: {
				cout<<"saliendo...";
				break;
			}
		}

	} while(opcion!=4);
	return 0;
}