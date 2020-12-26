/*
 * Copyright (C) 2020 <FacuFalcone - CaidevOficial>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include "../../Validate/caidevValidate.h"
#include "../../MainMenu/Menu.h"

#include "InputFunctions.h"

int inputNumbers(int* ax2, int* bx, int* c){
	int success = 0;
	int rangoMin = -50;
	int rangoMax = 50;
	int auxAX2;
	getNumberInt(&auxAX2,
			   "    � [Message]: Ingrese el termino cuadratico       �\n"
			   "    � [Ax^2] entre [-50 a 50]: ",
			   "    � [Message]: Numero incorrecto,                  �\n"
		       "    � reintentalo por favor.                         �\n", (rangoMin), rangoMax, 5);
	*ax2 = auxAX2;
	system("cls");
	mostrarMenuOperandos(ax2,bx,c,1);
	if(!auxAX2){
		printf("    � [Message]: Si el termino cuadratico es 0,      �\n"
			   "    � entonces el polinomio pierde su grado 2        �\n"
			   "    � y pasara a ser una formula lineal, no          �\n"
			   "    � tiene sentido seguir pidiendote numeros.       �\n"
			   "    � Gracias, vuelvas prontos!.                     �\n");
	}else{

		getNumberInt(bx, "    � [Message]: Ingrese el termino Lineal           �\n"
				          "    � [Bx] entre [-50 a 50]: ",
						  "    � [Message]: Numero incorrecto,                  �\n"
						  "    � reintentalo por favor.                         �\n", (rangoMin), rangoMax, 5);
		system("cls");
		mostrarMenuOperandos(ax2,bx,c,2);
		getNumberInt(c, "    � [Message]: Ingrese el termino Independiente    �\n"
				          "    � [C] entre [-50 a 50]: ",
						  "    � [Message]: Numero incorrecto,                  �\n"
						  "    � reintentalo por favor.                         �\n", (rangoMin), rangoMax, 5);
		system("cls");
		mostrarMenuOperandos(ax2,bx,c,3);

		success = 1;
	}

	return success;
}
