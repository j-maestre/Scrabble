#include <esat/window.h>
#include <esat/draw.h>
#include <esat/input.h>
#include <esat/sprite.h>
#include <esat/time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



const int ANCHO = 950, ALTO = 800;
unsigned char fps=60;
double current_time,last_time;
bool interfaz = false, jugadores = false;
float puntos[8] = {50,10,750,10,750,600,50,600};
int jugadorActual = 1;

//Player para guardar la puntuacion y mostrarla
struct Player{    
  int puntuacionMax=0;
  char nombre[40];
};

struct Color{
  int red;
  int green;
  int blue;
};

struct Cuadrado{
  float x,y;          //Posicion X e Y en la pantalla
  Color color;      //Color en el que será pintado
  int puntos=1;       //Puntuacion a la que equivale el cuadrado
  char type[3]={"N\0"};  //Palabra || Letra
};

struct Letra{
  char letra[3];             //Letra correspondiente
  int CantidadRestante;   //Cantidad de letras que quedan
  int puntos=1;           //Puntos a los que equivale la letra
};

//Struct del jugador que esta jugando
struct Jugador{
  int id;
  Letra letrasPropias[7];
  int puntuacion=0;
};

Cuadrado Tablero[15][15];
Letra Letras[28];           //27 letras diferentes
Jugador Jugadores[5];


#include "includes/interfaz.cc"
#include "includes/tablero.cc"
#include "includes/jugadores.cc"
