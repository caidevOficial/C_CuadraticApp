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

#ifndef MAINMENU_MENU_H_
#define MAINMENU_MENU_H_

/**
 * @brief	Imprime el menu con las opciones del programa.
 * @return  Retorna la opcion elegida si salio bien, 'x' si error.
 */
char menu();

/**
 * @brief  Muestra en pantalla los Terminos ingresados por usuario.
 * @param  ax2 Puntero a termino cuadratico.
 * @param  bx Puntero a termino lineal.
 * @param  c Puntero a termino indepte.
 * @param  show Muestra los operandos ingresados con 1,2 y 3. 0 para no mostrarlos.
 * @return Retorna 1 si salio bien, 0 para error.
 */
int mostrarMenuOperandos(int *ax2, int *bx, int *c, int show);

#endif /* MAINMENU_MENU_H_ */
