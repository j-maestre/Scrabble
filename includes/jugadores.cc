
void SetAllLetters(){
    Letra letra;
    //A
    letra.letra[0]='A';
    letra.CantidadRestante=12;
    Letras[0]=letra;
    //E
    letra.letra[0]='E';
    letra.CantidadRestante=12;
    Letras[1]=letra;
    
    //O
    letra.letra[0]='O';
    letra.CantidadRestante=9;
    Letras[2]=letra;
    //I
    letra.letra[0]='I';
    letra.CantidadRestante=6;
    Letras[3]=letra;
    //S
    letra.letra[0]='S';
    letra.CantidadRestante=6;
    Letras[4]=letra;
    //N
    letra.letra[0]='N';
    letra.CantidadRestante=5;
    Letras[5]=letra;
    //L
    letra.letra[0]='L';
    letra.CantidadRestante=4;
    Letras[6]=letra;
    //R
    letra.letra[0]='R';
    letra.CantidadRestante=5;
    Letras[7]=letra;
    //U
    letra.letra[0]='U';
    letra.CantidadRestante=5;
    Letras[7]=letra;
    
    //T
    letra.letra[0]='T';
    letra.CantidadRestante=4;
    Letras[8]=letra;
    //D
    letra.letra[0]='D';
    letra.CantidadRestante=5;
    letra.puntos=2;
    Letras[9]=letra;
    //G
    letra.letra[0]='D';
    letra.CantidadRestante=2;
    letra.puntos=2;
    Letras[10]=letra;
    //C
    letra.letra[0]='C';
    letra.CantidadRestante=4;
    letra.puntos=3;
    Letras[11]=letra;
    //B
    letra.letra[0]='B';
    letra.CantidadRestante=2;
    letra.puntos=3;
    Letras[12]=letra;
    //M
    letra.letra[0]='M';
    letra.CantidadRestante=2;
    letra.puntos=3;
    Letras[13]=letra;
    //P
    letra.letra[0]='P';
    letra.CantidadRestante=2;
    letra.puntos=3;
    Letras[14]=letra;
    //H
    letra.letra[0]='B';
    letra.CantidadRestante=2;
    letra.puntos=4;
    Letras[15]=letra;
    //F
    letra.letra[0]='F';
    letra.CantidadRestante=1;
    letra.puntos=4;
    Letras[16]=letra;
    //V
    letra.letra[0]='V';
    letra.CantidadRestante=1;
    letra.puntos=4;
    Letras[17]=letra;
    //Y
    letra.letra[0]='Y';
    letra.CantidadRestante=1;
    letra.puntos=4;
    Letras[18]=letra;
    //CH
    letra.letra[0]='C';
    letra.letra[1]='H';
    letra.CantidadRestante=1;
    letra.puntos=5;
    Letras[19]=letra;
    letra.letra[1]='\0';
    //Q
    letra.letra[0]='Q';
    letra.CantidadRestante=1;
    letra.puntos=5;
    Letras[20]=letra;
    //J
    letra.letra[0]='J';
    letra.CantidadRestante=1;
    letra.puntos=8;
    Letras[21]=letra;
    //LL
    letra.letra[0]='L';
    letra.letra[1]='L';
    letra.CantidadRestante=1;
    letra.puntos=8;
    Letras[22]=letra;
    //Ñ
    letra.letra[1]='\0';
    letra.letra[0]='Ñ';
    letra.CantidadRestante=1;
    letra.puntos=8;
    Letras[23]=letra;
    //RR
    letra.letra[0]='R';
    letra.letra[1]='R';
    letra.CantidadRestante=1;
    letra.puntos=8;
    Letras[24]=letra;
    letra.letra[1]='\0';
    //X
    letra.letra[0]='X';
    letra.CantidadRestante=1;
    letra.puntos=8;
    Letras[25]=letra;
    //Z
    letra.letra[0]='Z';
    letra.CantidadRestante=1;
    letra.puntos=10;
    Letras[26]=letra;
    //Blanco
    letra.letra[0]='0';
    letra.CantidadRestante=2;
    letra.puntos=0;
    Letras[27]=letra;
    
}

void GetRandomLetter(Jugador *jugador, int cantidad){
    int random;
    for(int i=0;i<cantidad;i++){
        do{
            random = rand()%27;
            printf("Jugador: %d Letra Random: %s Cantidad Restante: %d\n",(*jugador).id,Letras[random].letra, Letras[random].CantidadRestante);
            if(Letras[random].CantidadRestante>0){
                printf("Asignado\n");
                (*jugador).letrasPropias[i] = Letras[random];
            }
        }while(Letras[random].CantidadRestante<=0);
        Letras[random].CantidadRestante--;
    }
}

void SetJugadores(int num=2){
    for(int i=0;i<num;i++){
        Jugador jugador={i};
        Jugadores[i]=jugador;
        GetRandomLetter(&Jugadores[i],7);
    };
}

void DebugLeters(){
    for(int i=0;i<27;i++){
        printf("Letra:%s CantidadRestante:%d Puntuacion:%d\n",Letras[i].letra,Letras[i].CantidadRestante, Letras[i].puntos);
    }
}

void DebugJugadores(){
    for(int i=0;i<2;i++){
        printf("Jugador:%d ",Jugadores[i].id);
        for(int j=0;j<7;j++){
            printf("Letras: %s",Jugadores[i].letrasPropias[j].letra);
        }
        printf("\n");
    }
}