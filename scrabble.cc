#include "includes/all.cc"


int esat::main(int argc, char **argv) {


	esat::WindowInit(ANCHO,ALTO);
	WindowSetMouseVisibility(true);

	// esat::DrawSetTextFont("assets/Biscuit&Chocolat.ttf");
	esat::DrawSetTextFont("assets/LoveCraft/Love_Craft_Italic.ttf");
	srand(NULL);
	CreateCuadrados();
	SetAllLetters();
	DebugLeters();
	SetJugadores();
	DebugJugadores();
	DebugLeters();

    while(esat::WindowIsOpened() && !esat::IsSpecialKeyDown(esat::kSpecialKey_Escape)) {

    	last_time = esat::Time();
    	esat::DrawBegin();
    	esat::DrawClear(0,0,0);
			
			if(!interfaz){
				interfaz = Interfaz();
			}else if(!jugadores){
				//Mostrar menu jugadores
				jugadores = CantidadJugadores();
			}else{
				//Empieza el juego
				DrawTable();
				DrawJugadores();
			}


    	esat::DrawEnd();



    	//Control fps
    	do{
    		current_time = esat::Time();
    	}while((current_time-last_time)<=1000.0/fps);
    	esat::WindowFrame();
  }


  esat::WindowDestroy();


  return 0;

}
