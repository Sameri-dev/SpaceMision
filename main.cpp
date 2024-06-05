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

    Engineer ingeniero("Roberto", 100); //creacion de inge1
    Doctor doctor("Nicole", 100); //creacion de doctor 1

    vector<Astronaut*> tripulacion = {&ingeniero, &doctor}; //tripulacion

    Ship nave(100); //creacion de la nave

    //Para que la partida dure 30 dias
    for (int day = 1; day <= 30; day++){
        cout << "Mission day #" << day << endl;
    //mostramos el estado de la nave y la tripulacion
        nave.Status();
        for(auto& tripulante : tripulacion){
            tripulante -> Status();
        }
     //creacion de eventos aleatorios
        int evRandom = rand() % 3; //num random 0-2 (cambiar del 0-4 o mas num para que tenga posibilidad de que no haya nada)
        Event* evento;
        if (evRandom == 0) evento = new Sickness();
        else if (evRandom == 1) evento = new BlackOut();
        else evento = new BlackHole();

        evento -> happen(nave, tripulacion);

        delete evento;

        cout << ".     .     ." << endl;
    }

    return 0;
}
