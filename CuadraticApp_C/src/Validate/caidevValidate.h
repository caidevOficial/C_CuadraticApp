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

#ifndef CAIDEV_VALIDATE_H_
#define CAIDEV_VALIDATE_H_

/**
* @brief	Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
* 			un m�ximo de ' longitud - 1' caracteres (Solucion al fgets()).
* @param	pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
* @param	longitud Define el tama�o de cadena
* @return	Retorna 0 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
*/
int myGets(char *string, int longitud);

/**
* @brief	Verifica si la cadena ingresada es numerica.
* @param	cadena Cadena de caracteres a ser analizada.
* @return	Retorna 1 ( vardadero ) si la cadena es numerica y 0 ( falso ) si no lo es.
* @note		Es static, con lo cual no se puede listar el prototipo aca.
*/
int isNumber(char *string, int limite);

/**
* @brief	devuelve 0 si obtiene un entero desde la terminal.
* @param	pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
* @return	Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si no
* @note		Es static, con lo cual no se puede listar el prototipo aca.
*/
//static int getInt(int* pResultado);

/**
 * @brief	Solicita un numero al usuario, leuego de verificarlo devuelve el resultado
 * @param	pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * @param	mensaje Es el mensaje a ser mostrado
 * @param	mensajeError Es el mensaje de Error a ser mostrado
 * @param	minimo Es el numero maximo a ser aceptado
 * @param	maximo Es el minimo minimo a ser aceptado
 * @return	Retorna 0 si se obtuvo el numero y -1 si no.
 */
int getNumberInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

/**
 * @brief	Verifica si la cadena ingresada es flotante
 * @param	cadena Cadena de caracteres a ser analizada
 * @return	Retorna 1 (vardadero) si la cadena es flotante y 0 (falso) si no lo es
 *
 */
int esFlotante(char *string);

/**
 * @brief	Verifica si la cadena ingresada es flotante
 * @param	pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * @return	Retorna 0 (EXITO) si se obtiene un numero flotante y -1 (ERROR) si no
 * @note	Es static, con lo cual no se puede listar el prototipo aca.
 */
//static int getFloat(float* pResultado);

/**
 * @brief	Solicita un numero flotante al usuario, luego de verificarlo devuelve el resultado
 * @param	pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * @param	mensaje Es el mensaje a ser mostrado
 * @param	mensajeError Es el mensaje de Error a ser mostrado
 * @param	minimo Es el numero maximo a ser aceptado
 * @param	maximo Es el minimo minimo a ser aceptado
 * @return	Retorna 0 si se obtuvo el numero flotante y -1 si no
 */
int getNumberFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

/**
 * @brief 	Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
 * 			un m�ximo de 'longitud - 1' caracteres.
 * @param	pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
 * @param	longitud Define el tama�o de cadena
 * @return	Retorna 0 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
 *
 */
int getString(char *string, int longitud);

#endif /* CAIDEV_VALIDATE_H_ */
