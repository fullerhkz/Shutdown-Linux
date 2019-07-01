#include<iostream>

#include<stdio.h>

#include<stdlib.h>


int main(int argc, char** argv) {



int opcao, teste;



do

{

	teste=0;

		printf ("\t\tSHUTDOWN\n\n");

		printf ("Em quanto tempo voce deseja desligar o seu PC???\n[1] - 15 Minutos\t[2] - 30 Minutos\t[3] - 45 Minutos\n[4] - 60 Minutos\t[5] - 90 Minutos\t[6] - 120 Minutos\n[7] - 180 Minutos\t[8] - 240 Minutos\t[9] - Sair do Programa\n[10] - Cancelar Desligamento\n");

		printf ("\nSua Escolha e: ");

		scanf ("%d", &opcao);



switch (opcao)

{

		case 1:

		system ("shutdown -h +15");

			break;

		case 2:

		system ("shutdown -h +30");

			break;

		case 3:

		system ("shutdown -h +45");

			break;

		case 4:

		system ("shutdown -h +60");

			break;

		case 5:

		system ("shutdown -h +90");

			break;

		case 6:

		system ("shutdown -h +120");

			break;

		case 7:

		system ("shutdown -h +180");

			break;

		case 8:

		system ("shutdown -h +240");

			break;

		case 9:

		teste=0;

			break;

		case 10:

		system ("shutdown -c");

			break;

	default:

	printf ("\n\nOpcao invalida - Informe novamente\n");

        system ("PAUSE");

    //getchar();

	teste=1;

        system ("clear");


            break;

}

}

while (teste==1);



	return 0;

}
