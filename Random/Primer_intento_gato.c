//primer intento haciendo un gato

#include <stdio.h>
#include <windows.h>
#include <time.h>

void ingresarzero();
void tableropsicion();
void imprimir();
void player1();
void playerbot();
void comprobacion();

int main(){
	int tablero[3][3];//0,1,2. Esos son los 3 digitos
	int turnos;
	int ganador=0;//1=player1 es el ganador   2=bot es el ganador

	printf(" ___________________________________\n");
	printf("|                                   |\n");
	printf("|   ESTE ES EL JUEGO DEL GATO!!!!   |\n");
	printf("|___________________________________|\n");

	ingresarzero(tablero);
	printf("\n");
	//imprimir(tablero);
	for(turnos=0;turnos<9;turnos++){
		system("cls");
		printf("ELIGE LA POSICION:\n");
		printf(" |1| |2| |3|\n");
		printf(" -----------\n");
		printf(" |4| |5| |6|\n");
		printf(" -----------\n");
		printf(" |7| |8| |9|\n");
		//tableroposicion();
		printf("\n\n");

		imprimir(tablero);
		player1(tablero);
		playerbot(tablero);
		imprimir(tablero);
		comprobacion(tablero,&ganador);
		if(ganador!=0){
			turnos=8;
		}
	}
	system("cls");
	printf("TABLERO DE POSICIONES!!!\n");
	printf(" |1| |2| |3|\n");
	printf(" -----------\n");
	printf(" |4| |5| |6|\n");
	printf(" -----------\n");
	printf(" |7| |8| |9|\n");
	if(ganador==1){
		imprimir(tablero);
		printf(" ___________________________________\n");
		printf("|                                   |\n");
		printf("|    FELICIDADES!!! HAS GANADO!!!   |\n");
		printf("|___________________________________|\n");
	}
	else if(ganador==2){
		imprimir(tablero);
		printf(" ___________________________________\n");
		printf("|                                   |\n");
		printf("|             BOT WINS!!!           |\n");
		printf("|___________________________________|\n");
	}
	return 0;
}
//------------------------------------------------------------------------------
void ingresarzero(int tablero[][3]){
	int i, j;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			tablero[i][j]=0;
		}
	}
}

void imprimir(int tablero[][3]){
	int i, j;
	printf("TABLERO DE JUEGO!!!!\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" |%i|",tablero[i][j]);
		}
		printf("\n -----------\n");
	}
}
void player1(int tablero[][3]){
	int x=0;//posicion que ese elija osea 1, 2, 3...9, luego se transforma a vector

	printf("Elige en que posicion quieres poner tu ficha: ");
	scanf("%i",&x);
	printf("\n");

	switch(x){
		case 1:{
			tablero[0][0]=1;
			break;
		}
		case 2:{
			tablero[0][1]=1;
			break;
		}
		case 3:{
			tablero[0][2]=1;
			break;
		}
		case 4:{
			tablero[1][0]=1;
			break;
		}
		case 5:{
			tablero[1][1]=1;
			break;
		}
		case 6:{
			tablero[1][2]=1;
			break;
		}
		case 7:{
			tablero[2][0]=1;
			break;
		}
		case 8:{
			tablero[2][1]=1;
			break;
		}
		case 9:{
			tablero[2][2]=1;
			break;
		}
	}
}
void playerbot(int tablero[][3]){
	int i, j, x;//posicion que ese elija osea 1, 2, 3...9, luego se transforma a vector
	int aux;//si es 1 sale del while


	srand(time(NULL));

	//printf("bot: %i",x);
	x=0;
	aux=0;


	do{
		x=rand()%9;
		//printf("Bot: %i \n",x+1);
		switch(x){
			case 0:{
				if(tablero[0][0]==0){
					tablero[0][0]=5;
					aux=1;
				}
				break;
			}
			case 1:{
				if(tablero[0][1]==0){
					tablero[0][1]=5;
					aux=1;
				}
				break;
			}
			case 2:{
				if(tablero[0][2]==0){
					tablero[0][2]=5;
					aux=1;
				}
				break;
			}
			case 3:{
				if(tablero[1][0]==0){
					tablero[1][0]=5;
					aux=1;
				}
				break;
			}
			case 4:{
				if(tablero[1][1]==0){
					tablero[1][1]=5;
					aux=1;
				}
				break;
			}
			case 5:{
				if(tablero[1][2]==0){
					tablero[1][2]=5;
					aux=1;
				}
				break;
			}
			case 6:{
				if(tablero[2][0]==0){
					tablero[2][0]=5;
					aux=1;
				}
				break;
			}
			case 7:{
				if(tablero[2][1]==0){
					tablero[2][1]=5;
					aux=1;
				}
				break;
			}
			case 8:{
				if(tablero[2][2]==0){
					tablero[2][2]=5;
					aux=1;
				}
				break;
			}
		}
	}while(aux<=0);
}
/*---------------------------------------------------------------------------------------*/
void comprobacion(int tablero[][3], int *a){//A=es el Ganador 1= player1Wins  2=botWins
	if(tablero[0][0]==tablero[0][1] && tablero[0][1]==tablero[0][2]){//1
		if(tablero[0][0]==1){
			*a=1;
		}
		else if(tablero[0][0]==5){
			*a=2;
		}

	}
	if(tablero[1][0]==tablero[1][1] && tablero[1][1]==tablero[1][2]){//2
		if(tablero[1][0]==1){
			*a=1;
		}
		else if(tablero[1][0]==5){
			*a=2;
		}

	}
	if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){//3
		if(tablero[2][0]==1){
			*a=1;
		}
		else if(tablero[2][0]==5){
			*a=2;
		}

	}
	/*-------------------------------verticales------------------------------------*///(x,y)
	if(tablero[0][0]==tablero[1][0] && tablero[1][0]==tablero[2][0]){//4
		if(tablero[0][0]==1){
			*a=1;
		}
		else if(tablero[0][0]==5){
			*a=2;
		}
	}
	if(tablero[0][1]==tablero[1][1] && tablero[1][1]==tablero[2][1]){//5
		if(tablero[0][1]==1){
			*a=1;
		}
		else if(tablero[0][1]==5){
			*a=2;
		}
	}
	if(tablero[0][2]==tablero[1][2] && tablero[1][2]==tablero[2][2]){//6
		if(tablero[0][2]==1){
			*a=1;
		}
		else if(tablero[0][2]==5){
			*a=2;
		}
	}
	/*-------------------------------horizontales----------------------------------*/
	if(tablero[0][0]==tablero[1][1] && tablero[1][1]==tablero[2][2]){//7
		if(tablero[0][0]==1){
			*a=1;
		}
		else if(tablero[0][0]==5){
			*a=2;
		}

	}
	if(tablero[2][0]==tablero[1][1] && tablero[1][1]==tablero[0][2]){//7
		if(tablero[2][0]==1){
			*a=1;
		}
		else if(tablero[2][0]==5){
			*a=2;
		}

	}

}
