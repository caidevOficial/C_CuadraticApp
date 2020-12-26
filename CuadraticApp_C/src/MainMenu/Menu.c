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
	//printf("    ��������������������������������������ͻ\n");
	printf("    � [Ingrese una opcion.]                          �\n"
		   "    � [A] Ingresar operandos del polinomio.          �\n"
		   "    � [B] Salir.                                     �\n"
		   "    � [Opcion]: ");
	getString(&option, sizeof(option));
	option = tolower(option);
	return option;
}

int mostrarMenuOperandos(int *ax2, int *bx, int *c, int show){
	int success = 0;
	printf("    ������������������������������������������������ͻ\n"
		   "    �                [MANDALE BHASKARA!]             �\n");
	printf("    �                  [By FacuFalcone]              �\n");
	if(show>=0 && show<4){
		switch(show){
			case 0:
				printf("    �             [  Ax^2 +  Bx +   C = 0 ]          �\n");
				break;
			case 1:
				printf("    �             [%3dx^2 +  Bx +   C = 0 ]          �\n",*ax2);
				printf("    �               [A^]                             �\n");
				break;
			case 2:
				printf("    �             [%3dx^2 +%3dx +   C = 0 ]          �\n",*ax2,*bx);
				printf("    �               [A^]    [B^]                     �\n");
				break;
			case 3:
				printf("    �             [%3dx^2 +%3dx + %3d = 0 ]          �\n",*ax2,*bx,*c);
				printf("    �               [A^]    [B^]  [C^]               �\n");
				break;
		}
		//printf("    �________________________________________________�\n");
	success = 1;
	}
	return success;
}
