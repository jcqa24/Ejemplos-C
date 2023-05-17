#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int player, computer, again;
    int wins = 0, losses = 0, ties = 0;

    srand(time(0));

    do{
        printf("Juguemos Piedra, Papel o Tijeras \n");
        printf("1: Piedra\n2: Papel\n3: Tijeras \n");

        printf("Ingresa una opcion ");
        scanf("%d",&player);

        computer = rand() % 3 + 1;

        printf("Tu elegiste: %d\n",player);
        printf("La computadora eligio: %d\n",computer);


        if(player == computer){
            ties++;
            printf("Empate!!!\n");
        }else if ( (player == 1 && computer == 3 ) ||
                   (player == 2 && computer == 1 ) ||
                   (player == 3 && computer == 2)){
                    wins++;
                    printf("Ganaste!!!\n");
        }else{
            losses++;
            printf("Perdiste!!!\n");
        }


        printf("\n    Tablero\n");
        printf("==================\n");
        printf("|%-10s | %2d |\n","Victorias:",wins);
        printf("|%-10s | %2d |\n","Derrotas:",losses);
        printf("|%-10s | %2d |\n","Empates:",ties);
        printf("==================\n\n\n");

        printf("Quieres volver a jugar 1->Si, 2->No:  ");
        scanf("%d",&again);

    }while(again == 1);

}
