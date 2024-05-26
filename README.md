# SpaceMision

#Espanol

De acuerdo con el temario de clase, mis conocimientos previos, el tiempo y mi admiración por el espacio se me ocurrio desarrollar el siguiente proyecto.

1.- Gestión de Misión Espacial
Descripción: Un juego donde se simule una misión espacial y se tenga que cumplir 30 días a bordo de un trasbordador gestionando los suministros y energía de la nave para que la tripulación completa sobreviva. Se tienen 4 tripulantes con diferentes roles (ingeniero, doctor, explorador, líder) y cada uno muestra un porcentaje de salud y por cada partida este porcentaje puede variar (sobre todo esto depende de los roles, algunos gastaran más porcentaje que otros). Por cada partida se tomará en cuenta un día más de la misión y el jugador será el encargado de dar los suministros necesarios a la tripulación (puede no darle comida a la tripulación ciertos días si lo cree necesario y decidir la cantidad de comida que se le da a cada uno). Además, también se encargará de dirigir la energía de la nave a ciertas zonas (escudos solares, propulsores, cámaras internas, zonas de investigación) las cuales pueden beneficiar a los jugadores, pero gasta cierto porcentaje de energía (mejora salud, resta días del viaje días, no gasta salud, aumenta cantidad de suministros). Por último, en cada partida se pueden presentar problemas con la misión que obligaran al jugador a tomar decisiones (se enferman ciertos tripulantes lo que gasta salud, ciertos tripulantes realizan trabajos y gastan salud, meteoritos dañan la nave y se tiene que dirigir la energía a esa zona, avistamientos de aliens que gastan energía, escape de hoyos negros que gastan energía y aumentan días, viajes por agujeros de gusanos que ayudan o perjudican la cantidad de días, entre otras cosas).

Clases: 

Suprema 'Astronauta': base para los otros roles de los tripulantes cada uno es diferente y interactuan de diferentes formas, la cantidad de salud que tengan afectara en los resultados de sus tareas (manejados por porcentajes).
sub 'Ingeniero': cada cierto tiempo puede reparar o empeorar la nave (quita o gana energia)
sub 'Doctor': cura otros pasajeros (da salud a cambio de salud de el)
sub 'Investigador': cada ciertas rondas ganan energia o comida.
sub 'Lider': si el lider muere acaba el juego.

Suprema 'Suministro': base de todos los suministros (manejados por porcentajes).
sub 'Comida': da salud a pasajeros.
sub 'Energia': da energia a la nave

Suprema 'Nave': el escenario donde ocurre todo, dependiendo de los lugares donde se dirija la energia se obtendran diferentes resultados (manejados por porcentajes).
sub 'EscudosSolares': proteccion a eventos externos.
sub 'Propulsores': reduce la cantidad de dias.
sub 'Cabina': reduce la cantidad de eventos.
sub 'Enfermeria': ayuda a mejorar la salud de todos los pasajeros.

Suprema 'Evento': los eventos externos e internos que pueden afectar positiva o negativamente la operacion (manejados por porcentajes).
sub 'Enfermedad': todos los pasajeros se enferman excepto el doctor, reduce la salud.
sub 'Meteoro': ataque externo que reduce la energia de la nave.

El juego está diseñado para ayudar al jugador con la gestión de recursos, organización, planeación y adaptación en situaciones de emergencia. También demostrar la importancia de las misiones espaciales y del sector de investigación espacial y porque ocupa tantas personas, recursos, planeación y visión además de interesar a más personas en el tema.

#Ingles

According to the class syllabus, my previous knowledge, time and my admiration for space, I develop this project.

1.- Space Mission Management
Description: A game where a space mission is simulated and you have to complete 30 days aboard a shuttle managing the ship's supplies and energy so that the entire crew survives. There are 4 crew members with different roles (engineer, doctor, explorer, leader) and each one shows a percentage of health and for each game this percentage can vary (mostly this depends on the roles, some will spend more percentage than others). For each game, one more day of the mission will be taken into account and the player will be in charge of giving the necessary supplies to the crew (he can not give food to the crew on certain days if he believes it is necessary and decide the amount of food to be given. gives to each one). In addition, it will also be in charge of directing the ship's energy to certain areas (solar shields, thrusters, internal chambers, research areas) which can benefit the players, but it spends a certain percentage of energy (improves health, subtracts days from the trip days, does not spend health, increases supply quantity). Finally, in each game there may be problems with the mission that will force the player to make decisions (certain crew members get sick which costs health, certain crew members do jobs and spend health, meteorites damage the ship and energy must be directed to that area, sightings of aliens that waste energy, escape from black holes that waste energy and increase days, trips through wormholes that help or harm the number of days, among other things).


The game is designed to help the player with resource management, organization, planning and adaptation in emergency situations. Also demonstrate the importance of space missions and the space research sector and why it occupies so many people, resources, planning and vision in addition to interesting more people in the topic.

Classes: 

Supreme 'Astronaut': basis for the other roles of the crew members, each one is different and interact in different ways, the amount of health they have will affect the results of their tasks (managed by percentages).
'Engineer' sub: from time to time you can repair or worsen the ship (remove or gain energy)
sub 'Doctor': heals other passengers (gives health in exchange for his health)
sub 'Investigator': every few rounds they gain energy or food.
sub 'Leader': if the leader dies the game ends.

Supreme 'Supply': base of all supplies (managed by percentages).
sub 'Food': gives health to passengers.
sub 'Energy': gives energy to the ship

Supreme 'Ship': the scenario where everything happens, depending on the places where the energy is directed, different results will be obtained (managed by percentages).
sub 'SolarShields': protection from external events.
sub 'Thrusters': reduces the number of days.
'Cockpit' sub: reduces the number of events.
sub 'Nursing': helps improve the health of all passengers.

Supreme 'Event': external and internal events that can positively or negatively affect the operation (managed by percentages).
sub 'Illness': all passengers get sick except the doctor, reduces health.
sub 'Meteor': external attack that reduces the ship's energy.
