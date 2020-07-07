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
 * Version     : Alpha 1.0.0 [Alpha v1.0.0] - FacuFalcone_[Linux]
 * ============================================================================
 */

#include <math.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "../MainMenu/Menu.h"
#include "MainApp.h"
#include "../Validate/caidevValidate.h"

int inputNumbers(int* ax2, int* bx, int* c){
	int sucess = 0;
	utn_getNumero(ax2, "    Ingrese el termino cuadratico entre [-100 a 100]: ",
									"    Numero incorrecto, reintentalo.\n", (-100), 100, 5);
	if(!ax2){
		printf("    Si el termino cuadratico es 0, el polinomio pierde su grado 2\n"
				"    y pasara a ser una formula lineal, no tiene sentido\n"
				"    seguir pidiendote numeros. Gracias, vuelvas prontos!.\n");
	}else{

		utn_getNumero(bx, "    Ingrese el termino cuadratico entre [-100 a 100]: ",
						"    Numero incorrecto, reintentalo.\n", (-100), 100, 5);
		utn_getNumero(c, "    Ingrese el termino cuadratico entre [-100 a 100]: ",
						"    Numero incorrecto, reintentalo.\n", (-100), 100, 5);
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
		printf("    El determinante es negativo, con lo cual no es posible hallar\n"
				"    una raiz cuadrada de un negativo, posee raices imaginarias!.\n");
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
		switch(menu()){
		case 'a':
			if(!inputNumbers(&ax2, &bx, &c)){
				printf("    Ups! Hubo un error con los operandos, por favor reingreselos!.\n");
			}else{
				if(!calculateDeterminant(&ax2, &bx, &c, &determinant)){
					printf("    Ups! Hubo un error con el calculo del determinante, por favor reintentelo!.\n");
				}else{
					root1 = ((-bx+determinant)/(2*ax2));
					root2 = ((-bx-determinant)/(2*ax2));
					printf("    sus raices son [%.3f] y [%.3f] .\n",root1,root2);
					sucess = 1;
				}
			}
			break;
		case 'b':
			break;
		}
	}while(answer=='y');
	return sucess;
}
