#include <iostream>
using namespace std;
int main()
{
       int i=1;
       int Decision1=0;
       int Decision2=0;
       int Decision3=0;
       int Decision4=0;
       string J1;
       string J2;
       int Jugador1=0;
       int Jugador2=0;
       int Rondas=0;
       bool Back=0;
            cout<<"---PARA INTERACTUAR CON EL MENU ELIJE EL NUMERAL CORRESPONDIENTE---"<<"\n";
            cout<<"==============================================================================="<<"\n";
            cout<<"     Bienvenido a: -----2P1T-----"<<"\n";
            cout<<"             Desea jugar?"<<"\n"<<"     1. SI                  2. NO "<<"\n";
            cin >> Decision1; cout<<"\n";
    do  {
               switch (Decision1)                            
               {
                    case 1://Si elige la opcion 0 se abre el menu del Juego.
                    cout<<"Ha seleccionado la opcion: "<<Decision1<<" "<<"\n";
                    cout<<"==============================================================================="<<"\n";
                    cout <<"Bienvenido al menu principal del juego"<< "\n";
                    cout <<" Escoga una de las opciones siguientes: "<< "\n";
                    cout <<"  1. Reglas "<<"\n";
                    cout <<"  2. Modo de Juego "<< "\n";
                    cout <<"  3. Creditos "<<"\n";
                    cin>>Decision2; cout<<"\n";
                    switch (Decision2)
                    {    
                        case 1://Si elige la opcion 1 se abre la opcion de reglas para el juego.
                        cout<<"Ha escogido la opcion: "<<Decision2<<" "<<"\n";
                        cout<<" -Reglas para Modo Individual: "<< ""<<"\n";
                        cout<<" Las reglas son las siguientes: "<< ""<<"\n";
                        cout<<"   1. El jugador competira contra la computadora. "<<"\n";
                        cout<<"   2. El jugador podra jugar contra la computadora las veces que este desee. "<<"\n";
                        cout<<"   3. El jugador podra elegir entre tres items para desafiar a la computadora. "<<"\n";
                        cout<<" -Reglas para Modo Multujugador "<<"\n";
                        cout<<" Las reglas son las siguientes: "<<"\n";
                        cout<<"   1. Los jugadores deberan elegir la cantidad de rondas que deseen jugar. "<<"\n";
                        cout<<"   2. Cada jugador por medio de turnos realizara una eleccion entre los diferentes items que se presentan. "<< ""<<"\n";
                        cout<<"   3. El ganador se aquel que posea una mayor cantidad de puntos de partida. "<<"\n";
                        cout<<"   4. Si ambos jugadores poseen la misma cantidad de vida habra un empate. "<< ""<<"\n";
                        cout<<" Si desea volver a la ventana anterior presionar 1. "<<"\n";
                        cin>>Back;
                        break;
                        
                            case 2://Si elige la opcion 2 se abre la opcion de Modos de Juego.
                            cout<<"Ha escogido la opcion: "<<Decision2<<" "<<"\n";
                            cout<<" Selecione un Modo de juego "<<"\n";
                            cout<<" 2. Modo de juego Individual. "<<"\n";
                            cout<<" 3. Modo de juego de 2 Jugadores. "<<"\n";
                            cout<<" 4. Modo de juego de 3 Jugadores. "<<"\n";
                            cout<<" Si desea regresar a la ventana anterior presione 1. "<<"\n";
                            cin>>Decision3; cout<<"\n";
                    do {    
                                switch (Decision3)                            
                               {
                                    case 2://Si elige la opcion 1 se abre el modo de Juego Individual.
                                    cout<<"Ha escogido la opcion: "<<Decision3<<"\n";
                                    cout<<"==============================================================================="<<"\n";
                                    //
                                        cout<<"Desea continuar?? "<<"\n";
                                        cout<<"Si es asi seleccione 6. "<<"\n";
                                        cout<<" Si desea terminar el juego presione cualquier tecla numeral "<<"\n";
                                        cin>>Decision4; cout<<"\n";
                                    break;
                                    
                                    case 3://si elige la opcion 2 se abre el modo de 2 Jugadores.
                                    cout<<"Ha escogido la opcion: "<<Decision3<<" "<<"\n";
                                    //
                                        cout<<"Desea continuar?? "<<"\n";
                                        cout<<"Si es asi seleccione 6. "<<"\n";
                                        cout<<" Si desea terminar el juego presione cualquier tecla numeral "<<"\n";
                                        cin>>Decision4; cout<<"\n";
                                    break;
                                    
                                    case 4://si elige la opcion 2 se abre el modo de 3 Jugadores.
                                     cout<<"Ha escogido la opcion: "<<Decision3<<"\n";
                                    cout<<"==============================================================================="<<"\n";
                                    //
                                        cout<<"Desea continuar?? "<<"\n";
                                        cout<<"Si es asi seleccione 6. "<<"\n";
                                        cout<<" Si desea terminar el juego presione cualquier tecla numeral "<<"\n";
                                        cin>>Decision4; cout<<"\n";
                                    break;
                            }
                        } while(Decision4==6);
                            break;
                            
                        case 3://si elige la opcion 3 se abre la ventana de Credito, Con el fin de Hablar acerca de los creadores del juego.
                        cout<<" 2P1T es un proyecto de formado por un grupo de de estudiantes miembros de la UCA, los cuales estan cursando su primer ciclo de carrera. "<<"\n";
                        cout<<" Estos estudiantes forman parte del grupo de Encrypter's "<<"\n";
                        cout<<" Estos estudiantes son: "<<"\n";
                        cout<<" Gerardo Andres Landaverry Huezo 00137224"<<"\n";
                        cout<<" Rene Eduardo Iraheta Gonzales 00182724"<<"\n";
                        cout<<" Francisco Miguel Castro Moran 00128624"<<"\n";
                        cout<<" Si desea volver a la ventana anterior presionar 1. "<<"\n";
                        cin>>Back; 
                        break;
                    }
                    break;
                    case 2: //Si elige la opcion 1 se cierra el juego.
                    cout<<"Ha escogido la opcion: "<<Decision1<<" "<<"\n";
                    cout <<"Se ha cerrado el juego" <<"\n";
                    break;
                    
                    default: //Si no elige ninguna de la anteriores, el juego envia un mensaje que informa el error y cierra el juego.
                    cout << "No existe la opcion seleccionada"<<"\n";
                }
        }while(Back==1); 
  return 0;
}
