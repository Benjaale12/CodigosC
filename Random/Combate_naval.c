//combate naval 10x10
//1 nave de 1x4, 1 de 1x5, 1 de 1x3 y 1 de 1x2
//

#include<stdio.h>
#include<time.h>
#include<windows.h>

void ingresar();
void impr_tab();
void tab_pos();
void barco_grande();
void barco_med_grande();
void barco_med();
void barco_chic();
void verificacion_ficha();
void verificacion_tablero();

int main(){
	char tablero1[10][10];
	char tablero2[10][10];
	int ganador=0, pos_bar=0;

	printf("+---------------------------------------------+\n");
	printf("|     Bienvenido al juego COMBATE NAVAL!!!    |\n");
	printf("+---------------------------------------------+\n");
	printf("Press ENTER para empezar: \n");
	system("pause");
	system("cls");

	ingresar(tablero1);//ingresa 0 a todas las posiciones
	ingresar(tablero2);//ingresa 0 a todas las posiciones

	tab_pos();//|1|2|3...

	printf("\nTablero player 1: \n");
	impr_tab(tablero1);
//------------------------------------------------------------------------------
	printf("Elige donde quieres poner el primer barco(1x5)\n");
	scanf("%i",&pos_bar);
	barco_grande(tablero1,&pos_bar);
	system("cls");
	tab_pos();
	printf("\nTablero player 1: \n");
	impr_tab(tablero1);
//------------------------------------------------------------------------------

	printf("Elige donde quieres poner el primer barco(1x4)\n");
	scanf("%i",&pos_bar);
	barco_med_grande(tablero1,&pos_bar);
	system("cls");
	tab_pos();
	printf("\nTablero player 1: \n");
	impr_tab(tablero1);
//------------------------------------------------------------------------------

	printf("Elige donde quieres poner el primer barco(1x3)\n");
	scanf("%i",&pos_bar);
	barco_med(tablero1,&pos_bar);
	system("cls");
	tab_pos();
	printf("\nTablero player 1: \n");
	impr_tab(tablero1);
//------------------------------------------------------------------------------

	printf("Elige donde quieres poner el primer barco(1x2)\n");
	scanf("%i",&pos_bar);
	barco_chic(tablero1,&pos_bar);
	system("cls");
	tab_pos();
	printf("\nTablero player 1: \n");
	impr_tab(tablero1);

//---------------------------Player 2 ahora-------------------------------------
	system("pause");
	system("cls");
	printf("+---------------------------------------------+\n");
	printf("|     Ahora viene el turno del PlayerBot:     |\n");
	printf("+---------------------------------------------+\n");
	system("pause");
	system("cls");

	/*tab_pos();//|1|2|3...
	printf("\nTablero player 2: \n");
	impr_tab(tablero2);*/
	tab_pos();//|1|2|3...

	printf("\nTablero player 2: \n");
	impr_tab(tablero2);
//------------------------------------------------------------------------------
	printf("Elige donde quieres poner el primer barco(1x5)\n");
	scanf("%i",&pos_bar);
	barco_grande(tablero2,&pos_bar);
	system("cls");
	tab_pos();
	printf("\nTablero player 2: \n");
	impr_tab(tablero2);
//------------------------------------------------------------------------------
	printf("Elige donde quieres poner el primer barco(1x4)\n");
	scanf("%i",&pos_bar);
	barco_med_grande(tablero2,&pos_bar);
	system("cls");
	tab_pos();
	printf("\nTablero player 2: \n");
	impr_tab(tablero2);
//------------------------------------------------------------------------------

	printf("Elige donde quieres poner el primer barco(1x3)\n");
	scanf("%i",&pos_bar);
	barco_med(tablero2,&pos_bar);
	system("cls");
	tab_pos();
	printf("\nTablero player 2: \n");
	impr_tab(tablero2);
//------------------------------------------------------------------------------

	printf("Elige donde quieres poner el primer barco(1x2)\n");
	scanf("%i",&pos_bar);
	barco_chic(tablero2,&pos_bar);
	system("cls");
	tab_pos();
	printf("\nTablero player 2: \n");
	impr_tab(tablero2);
//FIN COLOCACION DE BARCOS
	int ficha_player1, ficha_player2;
	int ganador_player1=0;
	int ganador_player2=0;
	int pos=0;
	/*char tablero1[10][10];
	char tablero2[10][10];*/

	//while(ganador_player1<=1 && ganador_player2<=1){


	do{
		system("cls");
		printf("+---------------------------------------------+\n");
		printf("|          Es el turno del Player1:           |\n");
		printf("+---------------------------------------------+\n");
		tab_pos();
		printf("\nTablero player 1: \n");
		impr_tab(tablero1);
		/*printf("Tablero enemigo:\n");
		impr_tab(tablero2);//*/
		do{
			printf("\nSelecciona la posicion donde quieras atacar: ");
			scanf("%i",&ficha_player1);

		}while(ficha_player1<1 && ficha_player1>100);
		verificacion_ficha(tablero2, ficha_player1);//verifica si esa posicion es cero o está ocupada
		//si el disparo es efectivo el barco desaparece
		//verificacion_tablero(tablero2, &ganador_player1);//verifica si el tablero del enemigo está vacío
		verificacion_tablero(tablero2, &ganador_player1);

		if(ganador_player1>0){
			system("cls");
			printf("+---------------------------------------------+\n");
			printf("|     FELICIDADES PLAYER1 HAS GANADO!!!       |\n");
			printf("+---------------------------------------------+\n");
			printf("Tablero del Oponente: \n");
			impr_tab(tablero2);
		}


	 //--------------------------------------------------------------------------

		system("cls");
		printf("+---------------------------------------------+\n");
		printf("|          Es el turno del Player2:           |\n");
		printf("+---------------------------------------------+\n");
		tab_pos();
		printf("\nTablero player 2: \n");
		impr_tab(tablero2);
		/*printf("Tablero enemigo: \n");
		impr_tab(tablero1);//Para pruebas*/
		do{
			printf("\nSelecciona la posicion donde quieras atacar: ");
			scanf("%i",&ficha_player2);
		}while(ficha_player2<1 && ficha_player2>100);
		verificacion_ficha(tablero1, ficha_player2);//verifica si esa posicion es cero o está ocupada
		//si el disparo es efectivo el barco desaparece
		//verificacion_tablero(tablero1, &ganador_player2);//verifica si el tablero del enemigo está vacío
		verificacion_tablero(tablero1, &ganador_player2);

		if(ganador_player2>0){
			system("cls");
			printf("+---------------------------------------------+\n");
			printf("|      FELICIDADES PLAYER2 HAS GANADO!!!      |\n");
			printf("+---------------------------------------------+\n");
			printf("Tablero del Oponente: \n");
			impr_tab(tablero1);
		}
	}while(ganador_player1==0 && ganador_player2==0);

	return 0;
}

void ingresar(char tableros[][10]){//pone char=0 en todas las posiciones
	//tablero[0][0]=1; tablero[0][1]=1;  => tablero[i][j]
	int i, j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			tableros[i][j]=0;
		}
	}
}
void impr_tab(char tableros[][10]){//imprime los tableros de ambos
	int i, j;

	printf(" ================================================\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(tableros[i][j]!='O'){
				printf("|   |",tableros[i][j]);
			}
			else if(tableros[i][j]=='O'){
				printf("|  %c|",tableros[i][j]);
			}

		}
		printf("\n");
		//printf(" ------------------------------------------------\n");
		printf(" ================================================\n");
	}
}
void tab_pos(){//imprime tablero de posiciones 1, 2, 3, 4...100
	int tab_pos[10][10];
	int i, j, aux;
	tab_pos[0][0]=0;
	aux=0;

	printf("\nTablero de posiciones:\n");

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			aux=aux+1;
			tab_pos[i][j]=aux;
			if(tab_pos[i][j]<10){
				printf("|  %i|",tab_pos[i][j]);
			}
			else if(tab_pos[i][j]<100){
				printf("| %i|",tab_pos[i][j]);
			}
			else if(tab_pos[i][j]==100){
				printf("|%i|",tab_pos[i][j]);
			}
		}
		printf("\n");
		//printf(" ------------------------------------------------\n");
		printf(" ================================================\n");
	}
}
//char barco[i][j]=tablero1[i][j]
void barco_grande(char tableros[][10], int *pos){//barco de 5x1 char barco
	int i, j, x;
	x=*pos;
	i=x/10;
	j=(x%10)-1;

	tableros[i][j]='O';
	tableros[i+1][j]='O';
	tableros[i+2][j]='O';
	tableros[i+3][j]='O';
	tableros[i+4][j]='O';

}
void barco_med_grande(char tableros[][10], int *pos){//barco 4x1
	int i, j, x;
	x=*pos;
	i=x/10;
	j=(x%10)-1;
	tableros[i][j]='O';
	tableros[i+1][j]='O';
	tableros[i+2][j]='O';
	tableros[i+3][j]='O';

}
void barco_med(char tableros[][10], int *pos){//barco 3x1
	int i, j, x;
	x=*pos;
	i=x/10;
	j=(x%10)-1;
	tableros[i][j]='O';
	tableros[i+1][j]='O';
	tableros[i+2][j]='O';
}
void barco_chic(char tableros[][10], int *pos){//barco 2x1
	int i, j, x;
	x=*pos;
	i=x/10;
	j=(x%10)-1;
	tableros[i][j]='O';
	tableros[i+1][j]='O';

}
/*void verificacion_ficha(char tableros[][10], int ficha){//ficha_player1 o 2
	//Funcion para los dos tableros y ficha de los dos players
	int i, j, x;
	x=ficha;
	i=x/10;
	j=(x%10)-1;

	//tableros[y][x]
	if(tableros[i][j]=='O'){
		for(i=0;i<10;i++){
			tableros[i][j]=0;
		}
	}
	else{
		tableros[i][j]='X';
	}
}*/
void verificacion_tablero(char tableros[][10], int *ganador_players1o2){
	int contador=0;
	int i, j;

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(tableros[i][j]==0){
				contador=contador+1;
			}
			else{}
		}
	}
	if(contador==100){
		*ganador_players1o2=1;
	}
	else{}
}
void verificacion_ficha(char tableros[][10], int ficha){//ficha_player1 o 2
	//Funcion para los dos tableros y ficha de los dos players
	int i, j, x;
	x=ficha;
	i=x/10;
	j=(x%10)-1;

	//tableros[y][x]
	if(tableros[i][j]=='O'){
		tableros[0][j]=0;
		tableros[1][j]=0;
		tableros[2][j]=0;
		tableros[3][j]=0;
		tableros[4][j]=0;
		tableros[5][j]=0;
		tableros[6][j]=0;
		tableros[7][j]=0;
		tableros[8][j]=0;
		tableros[9][j]=0;
	}
	else{
		tableros[i][j]='X';
	}
}
