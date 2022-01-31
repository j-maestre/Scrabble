
void ResetColor(int red=255,int green=255,int blue=255){
  // esat::DrawSetStrokeColor(red,green,blue);
  esat::DrawSetFillColor(red,green,blue);
}

void CreateCuadrados(){
  Color color={255,255,255};
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      //Check Triple (red)
      Cuadrado cuadrado={40.0f+(40*(i+1)),20.0f+(40*(j+1)),color,1};
      Tablero[i][j] = cuadrado;
    }
  }
  Color rojo={255,0,0};
  Color rosa={255,106,205};
  Color azul={0,0,255};
  Color azulClaro={102,204,255};

  //Set triple word
  Tablero[0][0].color=rojo;Tablero[0][0].puntos=3;Tablero[0][0].type[0]='P';
  Tablero[0][7].color=rojo;Tablero[0][7].puntos=3;Tablero[0][7].type[0]='P';
  Tablero[0][14].color=rojo;Tablero[0][14].puntos=3;Tablero[0][14].type[0]='P';
  Tablero[7][0].color=rojo;Tablero[7][0].puntos=3;Tablero[7][0].type[0]='P';
  Tablero[7][14].color=rojo;Tablero[7][14].puntos=3;Tablero[7][14].type[0]='P';
  Tablero[14][0].color=rojo;Tablero[14][0].puntos=3;Tablero[14][0].type[0]='P';
  Tablero[14][7].color=rojo;Tablero[7][7].puntos=3;Tablero[7][7].type[0]='P';
  Tablero[14][14].color=rojo;Tablero[14][14].puntos=3;Tablero[14][14].type[0]='P';


  //Set doble word
  for (int i = 1; i < 5; i++) {
    Tablero[i][i].color=rosa;Tablero[i][i].puntos=2;Tablero[i][i].type[0]='P';
    Tablero[9+i][5-i].color=rosa;Tablero[9+i][5-i].puntos=2;Tablero[9+i][5-i].type[0]='P';
    Tablero[5-i][9+i].color=rosa;Tablero[5-i][9+i].puntos=2;Tablero[5-i][9+i].type[0]='P';
    Tablero[9+i][9+i].color=rosa;Tablero[9+i][9+i].puntos=2;Tablero[9+i][9+i].type[0]='P';
  }
  Tablero[7][7].color=rosa;Tablero[7][7].puntos=2;Tablero[7][7].type[0]='P';

  //Set triple letter
  Tablero[5][1].color=azul;Tablero[5][1].puntos=3;Tablero[5][1].type[0]='L';
  Tablero[9][1].color=azul;Tablero[9][1].puntos=3;Tablero[9][1].type[0]='L';

  Tablero[1][5].color=azul;Tablero[1][5].puntos=3;Tablero[1][5].type[0]='L';
  Tablero[5][5].color=azul;Tablero[5][5].puntos=3;Tablero[5][5].type[0]='L';
  Tablero[9][5].color=azul;Tablero[9][5].puntos=3;Tablero[9][5].type[0]='L';
  Tablero[13][5].color=azul;Tablero[13][5].puntos=3;Tablero[13][5].type[0]='L';

  Tablero[1][9].color=azul;Tablero[1][9].puntos=3;Tablero[1][9].type[0]='L';
  Tablero[5][9].color=azul;Tablero[5][9].puntos=3;Tablero[5][9].type[0]='L';
  Tablero[9][9].color=azul;Tablero[9][9].puntos=3;Tablero[9][9].type[0]='L';
  Tablero[13][9].color=azul;Tablero[13][9].puntos=3;Tablero[13][9].type[0]='L';

  Tablero[5][13].color=azul;Tablero[5][13].puntos=3;Tablero[5][13].type[0]='L';
  Tablero[9][13].color=azul;Tablero[9][13].puntos=3;Tablero[9][13].type[0]='L';

  //Set doble letter
  Tablero[3][0].color=azulClaro;Tablero[3][0].puntos=2;Tablero[3][0].type[0]='L';
  Tablero[11][0].color=azulClaro;Tablero[11][0].puntos=2;Tablero[11][0].type[0]='L';
  Tablero[6][2].color=azulClaro;Tablero[6][2].puntos=2;Tablero[6][2].type[0]='L';
  Tablero[8][2].color=azulClaro;Tablero[8][2].puntos=2;Tablero[8][2].type[0]='L';
  Tablero[7][3].color=azulClaro;Tablero[7][3].puntos=2;Tablero[7][3].type[0]='L';
  Tablero[0][3].color=azulClaro;Tablero[0][3].puntos=2;Tablero[0][3].type[0]='L';
  Tablero[14][3].color=azulClaro;Tablero[14][3].puntos=2;Tablero[14][3].type[0]='L';


  Tablero[2][6].color=azulClaro;Tablero[2][6].puntos=2;Tablero[2][6].type[0]='L';
  Tablero[3][7].color=azulClaro;Tablero[3][7].puntos=2;Tablero[3][7].type[0]='L';
  Tablero[2][8].color=azulClaro;Tablero[2][8].puntos=2;Tablero[2][8].type[0]='L';

  Tablero[6][6].color=azulClaro;Tablero[6][6].puntos=2;Tablero[6][6].type[0]='L';
  Tablero[8][6].color=azulClaro;Tablero[8][6].puntos=2;Tablero[8][6].type[0]='L';
  Tablero[12][6].color=azulClaro;Tablero[12][6].puntos=2;Tablero[12][6].type[0]='L';
  Tablero[11][7].color=azulClaro;Tablero[11][7].puntos=2;Tablero[11][7].type[0]='L';
  Tablero[12][8].color=azulClaro;Tablero[12][8].puntos=2;Tablero[12][8].type[0]='L';
  Tablero[6][8].color=azulClaro;Tablero[6][8].puntos=2;Tablero[6][8].type[0]='L';
  Tablero[8][8].color=azulClaro;Tablero[8][8].puntos=2;Tablero[8][8].type[0]='L';
  Tablero[0][11].color=azulClaro;Tablero[0][11].puntos=2;Tablero[0][11].type[0]='L';
  Tablero[7][11].color=azulClaro;Tablero[7][11].puntos=2;Tablero[7][11].type[0]='L';
  Tablero[14][11].color=azulClaro;Tablero[14][11].puntos=2;Tablero[14][11].type[0]='L';
  Tablero[6][12].color=azulClaro;Tablero[6][12].puntos=2;Tablero[6][12].type[0]='L';
  Tablero[8][12].color=azulClaro;Tablero[8][12].puntos=2;Tablero[8][12].type[0]='L';
  Tablero[3][14].color=azulClaro;Tablero[3][14].puntos=2;Tablero[3][14].type[0]='L';
  Tablero[11][14].color=azulClaro;Tablero[11][14].puntos=2;Tablero[11][14].type[0]='L';



}


void DrawTable(){
  // Color color={"224","224","176"};
  // Cuadrado cuadrado={20.0f,20.0f,color,1
  // float puntos[8]={cuadrado.x,cuadrado.y,cuadrado.x+40,cuadrado.y,cuadrado.x+40,cuadrado.y+40,cuadrado.x,cuadrado.y+40};
  ResetColor();
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      esat::DrawSetFillColor(Tablero[i][j].color.red,Tablero[i][j].color.green,Tablero[i][j].color.blue);
      float puntos[8]={Tablero[i][j].x,Tablero[i][j].y,Tablero[i][j].x+40,Tablero[i][j].y,Tablero[i][j].x+40,Tablero[i][j].y+40,Tablero[i][j].x,Tablero[i][j].y+40};
      esat::DrawSolidPath(puntos,4);
    }
  }

}


void DrawJugadores(){
  ResetColor(0,255,0);
  char Texto[20]={"Jugador: \0"};
  char NumJugador[2];
  int jugadorNum = jugadorActual+1;
  itoa(jugadorNum,NumJugador,2);
  Texto[9]=NumJugador[0];
  // Texto[9]="\0";
  esat::DrawText(300,50,Texto);
  for(int i=0;i<7;i++){
    esat::DrawText(30+((i+1)*80),750,Jugadores[jugadorActual].letrasPropias[i].letra);
  }

  for(int i=0;i<2;i++){
    char Texto[10];
    itoa(Jugadores[i].puntuacion,Texto,10);
    char Texto2[20]={"Jugador \0"};
    char NumJugador[2];
    itoa(i+1,NumJugador,2);
    Texto2[8]=NumJugador[0];
    esat::DrawText(700,150+((i+1)*100),Texto2);
    esat::DrawText(700,200+((i+1)*100),Texto);
  }
}
