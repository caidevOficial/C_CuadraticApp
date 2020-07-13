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
 * Name		   : CuatraticApp [Coded in C] - FacuFalcone_[Linux]
 * Version     : Beta 1.1.0 [Beta v1.1.0] - [Codename: Krypton]
 * ============================================================================
 */

#ifndef MAINAPP_INPUT_INPUTFUNCTIONS_H_
#define MAINAPP_INPUT_INPUTFUNCTIONS_H_

/**
 * @brief  Pide al usuario ingresar los 3 terminos.
 * @param  ax2 Putnero a Termino cuadratico.
 * @param  bx Puntero a Termino Lineal.
 * @param  c Puntero a termino indepte.
 * @return Retorna 1 si pudo ingresar los 3 operandos, 0 para error.
 */
int inputNumbers(int* ax2, int* bx, int* c);

#endif /* MAINAPP_INPUT_INPUTFUNCTIONS_H_ */