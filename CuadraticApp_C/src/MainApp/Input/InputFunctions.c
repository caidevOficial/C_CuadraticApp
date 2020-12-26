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
			   "    º [Message]: Ingrese el termino cuadratico       º\n"
			   "    º [Ax^2] entre [-50 a 50]: ",
			   "    º [Message]: Numero incorrecto,                  º\n"
		       "    º reintentalo por favor.                         º\n", (rangoMin), rangoMax, 5);
	*ax2 = auxAX2;
	system("cls");
	mostrarMenuOperandos(ax2,bx,c,1);
	if(!auxAX2){
		printf("    º [Message]: Si el termino cuadratico es 0,      º\n"
			   "    º entonces el polinomio pierde su grado 2        º\n"
			   "    º y pasara a ser una formula lineal, no          º\n"
			   "    º tiene sentido seguir pidiendote numeros.       º\n"
			   "    º Gracias, vuelvas prontos!.                     º\n");
	}else{

		getNumberInt(bx, "    º [Message]: Ingrese el termino Lineal           º\n"
				          "    º [Bx] entre [-50 a 50]: ",
						  "    º [Message]: Numero incorrecto,                  º\n"
						  "    º reintentalo por favor.                         º\n", (rangoMin), rangoMax, 5);
		system("cls");
		mostrarMenuOperandos(ax2,bx,c,2);
		getNumberInt(c, "    º [Message]: Ingrese el termino Independiente    º\n"
				          "    º [C] entre [-50 a 50]: ",
						  "    º [Message]: Numero incorrecto,                  º\n"
						  "    º reintentalo por favor.                         º\n", (rangoMin), rangoMax, 5);
		system("cls");
		mostrarMenuOperandos(ax2,bx,c,3);

		success = 1;
	}

	return success;
}
