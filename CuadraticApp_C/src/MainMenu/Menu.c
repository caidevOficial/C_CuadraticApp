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

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Menu.h"
#include "../Validate/caidevValidate.h"

char menu(){
	char option = 'x'; // x para expresar el error.
	//printf("    ษออออออออออออออออออออออออออออออออออออออป\n");
	printf("    บ [Ingrese una opcion.]                          บ\n"
		   "    บ [A] Ingresar operandos del polinomio.          บ\n"
		   "    บ [B] Salir.                                     บ\n"
		   "    บ [Opcion]: ");
	getString(&option, sizeof(option));
	option = tolower(option);
	return option;
}

int mostrarMenuOperandos(int *ax2, int *bx, int *c, int show){
	int success = 0;
	printf("    ษออออออออออออออออออออออออออออออออออออออออออออออออป\n"
		   "    บ                [MANDALE BHASKARA!]             บ\n");
	printf("    บ                  [By FacuFalcone]              บ\n");
	if(show>=0 && show<4){
		switch(show){
			case 0:
				printf("    บ             [  Ax^2 +  Bx +   C = 0 ]          บ\n");
				break;
			case 1:
				printf("    บ             [%3dx^2 +  Bx +   C = 0 ]          บ\n",*ax2);
				printf("    บ               [A^]                             บ\n");
				break;
			case 2:
				printf("    บ             [%3dx^2 +%3dx +   C = 0 ]          บ\n",*ax2,*bx);
				printf("    บ               [A^]    [B^]                     บ\n");
				break;
			case 3:
				printf("    บ             [%3dx^2 +%3dx + %3d = 0 ]          บ\n",*ax2,*bx,*c);
				printf("    บ               [A^]    [B^]  [C^]               บ\n");
				break;
		}
		//printf("    บ________________________________________________บ\n");
	success = 1;
	}
	return success;
}
