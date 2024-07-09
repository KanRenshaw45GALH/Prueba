#include <iostream>
#include <fstream>
using namespace std;
string nombre (string Jugador)
{
    string j1;
    cout << "Inserte su nombre Jugador" << "\n";
    cin >> Jugador;
    j1= Jugador;
    cout << "Bienvenido " << j1 << endl;
    return Jugador;
}
int turnos(int t)
{
    int i;
    i=t/2;
    t=t-i;
    return t;
}
int resultados(int x, int y, int z)
{
    cout << "Jugador 1 gano " << x << " de " << z << " rondas" << '\n';
    cout << "Cpu gano " << y << " de " << z << " rondas" << '\n';
    return(z);
}
int archivouno(int j1, int cpu, int j2)
{
    string nombreArchivo = "Victorias.txt";
    ofstream archivo;
    archivo.open(nombreArchivo.c_str(), fstream::app);
    archivo << "Victorias jugador 1: " << j1 << endl;
    archivo << "Victorias jugador 2: " << j2 << endl;
    archivo.close();
    cout << "listo";
    return 0;
}
int main()
{
       int i=0;
       int j=0;
       string J1;
       string J2;
       int Jugador1=0;
       int Jugador2=0;
       int Pj1=0;
       int Pj2=0;
       int Rondas=0;
       bool Back=0;

        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<" |   Usted a elegido el modo Jugador vs Jugador     | " <<"\n";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
        J1=nombre(J1); cout<<"\n";
        J2=nombre(J2); cout<<"\n";
        cout<<"Ingrese la cantidad de Rondas que desea jugar: "<<"\n";
        cin>>Rondas; i=Rondas; Rondas = 1;
        cout<<"De acuerdo a la cantidad de Rondas, cada jugador posee la misma cantidad de vida "<<"\n";
        cout<<"==============================================================================="<<"\n";
        cout<<"Ya comienza el duelo "<<"\n";
        do
        {        
            cout<<"Ronda #" << Rondas <<"\n";
            cout<<"==============================================================================="<<"\n";
            cout<<"Jugador 1 escoga una opcion "<<"\n";
            cout<<" 1.Piedra - 2.Papel - 3.Tijera "<<"\n";
            cin>>Jugador1; cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
            cout<<"Jugador 2 escoga una opcion "<<"\n";
            cout<<" 1.Piedra - 2.Papel - 3.Tijera "<<"\n";
            cin>>Jugador2; cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
            if (Jugador1==Jugador2)
            {
                cout <<"Empate "<< "\n";
            }
            else if (Jugador1==1&&Jugador2==3)
            {
                cout <<" Ganaste "<<J1<< " Perdiste "<<J2<< "\n"; Pj1++;
            }
            else if (Jugador1==2&&Jugador2==1)
            {
                cout <<" Ganaste "<<J1<< " Perdiste "<<J2<< "\n"; Pj1++;
            }
            else if (Jugador1==3&&Jugador2==2)
            { 
                cout <<" Ganaste "<<J1<< " Perdiste "<<J2<< "\n"; Pj1++;
            }                                 
            else if (Jugador1==3&&Jugador2==1)
            {  
                cout <<" Ganaste "<<J2<< " Perdiste "<<J1<< "\n"; Pj2++;
            }                                
            else if (Jugador1==1&&Jugador2==2)
            {
                cout <<" Ganaste "<<J2<< " Perdiste "<<J1<< "\n"; Pj2++;
            }                                
            else if (Jugador1==2&&Jugador2==3) 
            {
                cout <<" Ganaste "<<J2<< " Perdiste "<<J1<< "\n"; Pj2++;
            }
            if (Pj1>=(turnos(i)))
            {
               cout<<"Gana "<<J1<< " con ("<<Pj1<<") punto/s"<<endl;
               j++;
            }
            if (Pj2>=(turnos(i)))
            {
               cout<<"Gana "<<J2<<" con ("<<Pj2<<") punto/s"<<endl;
               j++;
            }
               Rondas++;
        }while(Rondas<=i && j<1);
}           