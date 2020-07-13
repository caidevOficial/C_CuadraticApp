/*
 * ============================================================================
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * ============================================================================
 * Name		   : CuatraticApp [Coded in C] - FacuFalcone_[Linux]
 * Version     : Beta 1.1.01 [Beta v1.1.01] - [Codename: Krypton]
 * ============================================================================
 */

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "../MainMenu/Menu.h"
#include "../MainApp/Input/InputFunctions.h"
#include "../Validate/caidevValidate.h"
#include "MainApp.h"

int calculateDeterminant(int* ax2, int* bx, int*c, double* determinant){
	int success = 0;
	int aAux = *ax2;
	int bAux = *bx;
	int cAux = *c;
	double determinantAux;

	determinantAux = ((bAux*bAux)-(4*aAux*cAux));
	if(determinantAux>=0){
		*determinant = sqrt(determinantAux);
		success = 1;
	}else{
		printf("    �________________________________________________�\n"
			   "    � [Message]: El determinante es negativo,        �\n"
			   "    � con lo cual no es posible hallar una raiz      �\n"
			   "    � cuadrada, por lo tanto posee raices            �\n"
			   "    � imaginarias!.                                  �\n"
			   "    �________________________________________________�\n");
	}

	return success;
}

int cuatraticApp(){
	int success = 0;
	int ax2; //Termino cuadratico.
	int bx;  //Termino lineal.
	int c;	 //Termino independiente.
	double determinant;
	float root1; //Raiz x1.
	float root2; //Raiz x2.
	char answer = 'y';

	do{
		mostrarMenuOperandos(&ax2,&bx,&c,0);
		switch(menu()){
		case 'a':
			if(!inputNumbers(&ax2, &bx, &c)){
				//printf("    �________________________________________________�\n");
				printf("    �________________________________________________�\n"
					   "    � [Message]: Ups! Pusiste un 0 verdad?           �\n"
					   "    � Chinguenguencha!.                              �\n");
			}else{
				if(!calculateDeterminant(&ax2, &bx, &c, &determinant)){
					//printf("    �________________________________________________�\n");
					printf("    � [Message]: Ups! Hubo un error en el calculo    �\n"
						   "    � del determinante, por favor reintentalo!       �\n");
				}else{
					root1 = ((-bx+determinant)/(2*ax2));
					root2 = ((-bx-determinant)/(2*ax2));
					//printf("    �________________________________________________�\n");
					printf("    � [ACLARACION]: el puntito es una coma           �\n");
					printf("    � Sus raices son [%03.2f] y [%03.2f].              �\n",root1,root2);
					success = 1;
				}
			}
			printf("    �________________________________________________�\n");
			break;
		case 'b':
			answer='n';
			break;
		default:
			printf("    � [Message]:Opcion incorrecta, seleccione [A-B]  �\n");
			break;
		}
		printf("\n");
		system("pause");
		system("cls");
	}while(answer=='y');

	return success;
}
