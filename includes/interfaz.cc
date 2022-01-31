
bool Interfaz(){
    esat::DrawSetStrokeColor(255,255,255);
    esat::DrawSetFillColor(255,255,255);
    esat::DrawSetTextSize(35);
    // printf("Ole los caracoles\n");
    esat::DrawText(250.0f,100.0f,"SCRABBLE\0");
    esat::DrawText(250.0f,180.0f,"Puntuaciones\0");
    FILE *fbin = fopen("assets/puntuaciones.dat","rb");
    Player player;


    float y = 220.0f;
    int index = 1;
    char puntuacion[5];
    esat::DrawSetTextSize(25);
    while(fread(&player,sizeof(Player),1,fbin)){
      esat::DrawText(270.0f,y+index,player.nombre);
      esat::DrawText(450.0f,y+index,itoa(player.puntuacionMax,puntuacion,10));
      index+=50;
    }

    fclose(fbin);

    esat::DrawSetTextSize(35);
    esat::DrawSetStrokeColor(0,160,0);
    esat::DrawSetFillColor(0,160,0);
    esat::DrawText(200.0f,550.0f,"Press Enter to continue\0");

    if(esat::IsSpecialKeyDown(esat::kSpecialKey_Enter))return true;


   return false;
}

bool CantidadJugadores(){

  esat::DrawSetStrokeColor(255,255,255);
  esat::DrawSetFillColor(255,255,255);
  esat::DrawText(250.0f,180.0f,"Introduzca el numero de jugadores (2 por defecto)\0");
  if(esat::IsSpecialKeyDown(esat::kSpecialKey_Enter))return true;

  return false;
}
