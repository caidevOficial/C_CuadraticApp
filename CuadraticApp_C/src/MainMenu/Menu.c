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

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Menu.h"
#include "../Validate/caidevValidate.h"

char menu(){
	char option = 'x'; // x para expresar el error.
	printf("    [Ingrese una opcion.]\n"
			"    [A] Ingresar operandos de la cuadratica.\n"
			"    [B] Salir.\n"
			"    [Opcion]: ");
	getString(&option, sizeof(option));
	option = tolower(option);
	return option;
}
