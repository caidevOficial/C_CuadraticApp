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
		printf("    º________________________________________________º\n"
			   "    º [Message]: El determinante es negativo,        º\n"
			   "    º con lo cual no es posible hallar una raiz      º\n"
			   "    º cuadrada, por lo tanto posee raices            º\n"
			   "    º imaginarias!.                                  º\n"
			   "    º________________________________________________º\n");
	}

	return success;
}

int cuatraticApp(){
	setbuf(stdout,NULL);
	int success = 0;
	int ax2; //Termino cuadratico.
	int bx;  //Termino lineal.
	int c;	 //Termino independiente.
	double determinant;
	float root1; //Raiz x1.
	float root2; //Raiz x2.
	float xVertice; // Vertice X
	float yVertice; // Vertice Y
	char answer = 'y';

	do{
		mostrarMenuOperandos(&ax2,&bx,&c,0);
		switch(menu()){
		case 'a':
			if(!inputNumbers(&ax2, &bx, &c)){
				printf("    º________________________________________________º\n"
					   "    º [Message]: Ups! Pusiste un 0 verdad?           º\n"
					   "    º Chinguenguencha!.                              º\n");
			}else{
				if(!calculateDeterminant(&ax2, &bx, &c, &determinant)){
					printf("    º [Message]: Ups! Hubo un error en el calculo    º\n"
						   "    º del determinante, por favor reintentalo!       º\n");
				}else{
					// Calculo los 4 elementos.
					root1 = ((-bx+determinant)/(2*ax2));
					root2 = ((-bx-determinant)/(2*ax2));
					xVertice = (float)(-bx)/(2*ax2);
					yVertice = (ax2*(pow(xVertice,2)) + (bx*xVertice) + c);

					printf("    º [ACLARACION]: el puntito es una coma           º\n");
					printf("    º Raices:                                        º\n"
						   "    º X1: [%05.2f].                                   º\n",root1);
					printf("    º X2: [%05.2f].                                   º\n",root2);
					printf("    º Vertices:                                      º\n"
						   "    º Xv: [%05.2f].                                   º\n",xVertice);
					printf("    º Yv: [%05.2f].                                   º\n",yVertice);
					success = 1;
				}
			}
			printf("    º________________________________________________º\n");
			break;
		case 'b':
			answer='n';
			break;
		default:
			printf("    º [Message]:Opcion incorrecta, seleccione [A-B]  º\n");
			break;
		}
		printf("\n");
		system("pause");
		system("cls");
	}while(answer=='y');

	return success;
}
