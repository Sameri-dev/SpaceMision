#include "Astronaut.h"
#include "BlackHole.h"
#include "BlackOut.h"
#include "Doctor.h"
#include "Energy.h"
#include "Engineer.h"
#include "Event.h"
#include "Food.h"
#include "Ship.h"
#include "Sickness.h"
#include "Supply.h"

#include <iostream>
#include <vector>
#include <cstdlib> //para rand()
#include <ctime> //para time()

using namespace std;

int main()
{
    srand(time(0)); //num aleatorios

    cout << "In a universe where people travel through the stars, a small crew is at your command, you must decide their next moves to survive 30 days of travel without the ship's fuel running out." << endl; //intro

    Engineer ingeniero("Robert", 100); //creacion de inge1
    Doctor doctor("Allan", 100); //creacion de doctor 1

    vector<Astronaut*> tripulacion = {&ingeniero, &doctor}; //tripulacion

    Ship nave(100); //creacion de la nave
    Food comida(15); // comida
    Energy energia(100); //energia


     //creacion de eventos aleatorios por medio de un vector
     vector<Event*> evento;
     evento.push_back(new Sickness());
     evento.push_back(new BlackHole());
     evento.push_back(new BlackOut());

    //Para que la partida dure 30 dias
    for (int day = 1; day <= 30; day++){
        cout << "Mission day #" << day << endl;
    //mostramos el estado de la nave y la tripulacion
        nave.Status();
        for(auto& tripulante : tripulacion){
            tripulante -> Status();
        }

        //le damos la opcion de esocger su siguiente movimiento al jugador
        bool contin = false;
        while(!contin){
                //opciones
            cout << "Whats your next move? " << endl;
            cout << endl << "1. Eat" << endl;
            cout << "2. Healing" << endl;
            cout << "3. Repair ship" << endl;
            cout << "4. Endure" << endl;

                int opcion;
                cin >> opcion;

                switch (opcion){
                case 1:
                    for(auto& tripulante : tripulacion){
                        comida.use(*tripulante);
                    }
                    break;

                case 2:
                    doctor.interact(tripulacion);
                    break;

                case 3:
                    ingeniero.interact(tripulacion, nave);
                    break;

                case 4:
                    contin = true;
                    break;

                default:
                    cout << "Not a valid option . . . Try again" << endl;
            }
        }

        //uso de los eventos random
        int evRandom = rand() % 4; //num random 0-2 (cambiar del 0-4 o mas num para que tenga posibilidad de que no haya nada)
        evento[evRandom]->happen(nave, tripulacion);

        cout << ".     .     ." << endl;
    }

    return 0;
}
