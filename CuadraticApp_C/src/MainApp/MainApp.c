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
 * this program. If not, see <http://www.gnu.org/licenses/>.
 * ============================================================================
 * Name		   : CuatraticApp [Coded in C]
 * Version     : Alpha 1.0.1 [Alpha v1.0.1] - FacuFalcone_[Linux]
 * ============================================================================
 */

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "../MainMenu/Menu.h"
#include "../Validate/caidevValidate.h"
#include "MainApp.h"

int inputNumbers(int* ax2, int* bx, int* c){
	int sucess = 0;
	int A;
	int B;
	int C;
	utn_getNumero(&A, "    [Message]: Ingrese el termino cuadratico [Ax^2]\n"
					  "    entre [-100 a 100]: ",
					  "    [Message]: Numero incorrecto, reintentalo.\n", (-100), 100, 5);
	if(A==0){
		printf("    [Message]: Si el termino cuadratico es 0, entonces\n"
				"    el polinomio pierde su grado 2 y pasara a ser\n"
				"    una formula lineal, no tiene sentido seguir\n"
				"    pidiendote numeros. Gracias, vuelvas prontos!.\n");
	}else{

		utn_getNumero(&B, "    [Message]: Ingrese el termino Lineal [Bx]\n"
						  "    entre [-100 a 100]: ",
						  "    [Message]: Numero incorrecto, reintentalo.\n", (-100), 100, 5);
		utn_getNumero(&C, "    [Message]: Ingrese el termino Independiente [C]\n"
						  "    entre [-100 a 100]: ",
						  "    [Message]: Numero incorrecto, reintentalo.\n", (-100), 100, 5);
		*ax2 = A;
		*bx = B;
		*c = C;
		sucess = 1;
	}
	return sucess;
}

int calculateDeterminant(int* ax2, int* bx, int*c, double* determinant){
	int sucess = 0;
	int aAux = *ax2;
	int bAux = *bx;
	int cAux = *c;
	double determinantAux;

	determinantAux = ((bAux*bAux)-(4*aAux*cAux));
	if(determinantAux>=0){
		*determinant = sqrt(determinantAux);
		sucess = 1;
	}else{
		printf("    _______________________________________\n");
		printf("    [Message]: El determinante es negativo,\n"
				"    con lo cual no es posible hallar una\n"
				"    raiz cuadrada de un negativo,\n"
				"    por lo tanto posee raices imaginarias!.\n");
	}
	return sucess;
}

int cuatraticApp(){
	int sucess = 0;
	int ax2;
	int bx;
	int c;
	double determinant;
	float root1;
	float root2;
	char answer = 'y';

	do{
		printf("    __________[MANDALE BHASKARA!]__________\n");
		printf("    ____________[By FacuFalcone]___________\n");
		printf("    __________[Ax^2 + Bx + C = 0]__________\n");
		switch(menu()){
		case 'a':
			if(!inputNumbers(&ax2, &bx, &c)){
				printf("    _______________________________________\n");
				printf("    [Message]: Ups! Pusiste un 0 verdad?\n"
						"    Chinguenguencha!.\n");
			}else{
				if(!calculateDeterminant(&ax2, &bx, &c, &determinant)){
					printf("    _______________________________________\n");
					printf("    [Message]: Ups! Hubo un error con el\n"
						   "    calculo del determinante, por favor\n"
						   "    reintentalo!.\n");
				}else{
					root1 = ((-bx+determinant)/(2*ax2));
					root2 = ((-bx-determinant)/(2*ax2));
					printf("    _______________________________________\n");
					printf("    [ACLARACION]: el puntito es una coma!_\n");
					printf("    sus raices son [%.2f] y [%.2f] .\n",root1,root2);
					sucess = 1;
				}
			}
			break;
		case 'b':
			answer='n';
			break;
		}
		system("pause");
		system("cls");
	}while(answer=='y');
	return sucess;
}
