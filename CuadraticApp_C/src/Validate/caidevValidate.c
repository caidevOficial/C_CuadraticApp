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

//#include <stdio_ext.h> // para linux
#include <stdio.h> // windows
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "caidevValidate.h"

//		INPUT - VALIDACIONES

// MEJORA DEL FGETS
int myGets(char *string, int longitud) {
	int retorno=-1;
	char bufferString[4096];

	if (string != NULL && longitud > 0) {
		fflush(stdin); //Windows
		//__fpurge(stdin); // Linux
		if(fgets(bufferString,sizeof(bufferString),stdin) != NULL){
			if(bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\n'){
				bufferString[strnlen(bufferString,sizeof(bufferString))-1] = '\0';
			}
			if(strnlen(bufferString,sizeof(bufferString)) <= longitud){
				strncpy(string, bufferString, longitud);
				retorno=0;
			}
		}
	}
	return retorno;
}

//PARA VALIDAR ENTEROS

/**
 * \brief Verifica si la string ingresada es numerica
 * \param string Cadena de caracteres a ser analizada
 * \return Retorna 1 (vardadero) si la cadena es numerica y 0 (falso) si no lo es
 */
int isNumber(char *string, int limite) {
	int retorno = 1;
	int i;
	for (i = 0; i < limite && string[i] != '\0'; i++) {
		if (i == 0 && (string[i] == '+' || string[i] == '-')) {
			continue;
		}
		if (string[i] > '9' || string[i] < '0') {
			retorno = 0;
			break;
		}
		//CONTINUE
	}
	//BREAK
	return retorno;
}

/**
 * \brief Obtien un numero entero
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \return Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si no
 */
static int getInt(int* pResultado){
    int retorno=-1;
    char bufferString[50];
    if(	pResultado != NULL &&
    	getString(bufferString,sizeof(bufferString)) == 0 &&
    	isNumber(bufferString, sizeof(bufferString))) {
		retorno=0;
		*pResultado = atoi(bufferString) ;

	}
    return retorno;
}

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError,	int minimo, int maximo, int reintentos){
	int retorno = 0;
	int bufferInt;
	do{
		printf("%s",mensaje);
		if(	getInt(&bufferInt) == 0 &&
			bufferInt >= minimo &&	bufferInt <= maximo){
			retorno = 1;
			*pResultado = bufferInt;
			break;
		}
		printf("%s",mensajeError);
		reintentos--;
	}while(reintentos>=0);

	return retorno;
}

// PARA VALIDAR FLOTANTES

int esFlotante(char *string) {
	int i=0;
	int retorno = 1;
	int contadorPuntos=0;

	if (string != NULL && strlen(string) > 0) {
		for (i = 0; string[i] != '\0'; i++) {
			if (i == 0 && (string[i] == '-' || string[i] == '+')) {
				continue;
			}
			if (string[i] < '0' || string[i] > '9') {
				if (string[i] == '.' && contadorPuntos == 0) {
					contadorPuntos++;
				}
				else{
					retorno = 0;
					break;
				}
			}
		}
	}
	return retorno;
}

static int getFloat(float* pResultado){
	int retorno=-1;
	char buffer[64];

	if(pResultado != NULL){
		if(getString(buffer,sizeof(buffer))==0 && esFlotante(buffer)){
			*pResultado = atof(buffer);
			retorno = 0;
		}
	}
	return retorno;
}

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError,
							float minimo, float maximo, int reintentos){
	float bufferFloat;
	int retorno = 0;
	while(reintentos>=0){
		reintentos--;
		printf("%s",mensaje);
		if(getFloat(&bufferFloat) == 0){
			if(bufferFloat >= minimo && bufferFloat <= maximo){
				*pResultado = bufferFloat;
				retorno = 1;
				break;
			}
		}
		printf("%s",mensajeError);
	}
	return retorno;
}

// PARA VALIDAR CADENAS

int getString(char *string, int longitud) {
	int retorno=-1;
	char bufferString[4096];

	if (string != NULL && longitud > 0) {
		fflush(stdin); //Windows
		//__fpurge(stdin); // Linux
		if(fgets(bufferString,sizeof(bufferString),stdin) != NULL){
			if(bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\n'){
				bufferString[strnlen(bufferString,sizeof(bufferString))-1] = '\0';
			}
			if(strnlen(bufferString,sizeof(bufferString)) <= longitud){
				strncpy(string, bufferString, longitud);
				retorno=0;
			}
		}
	}
	return retorno;
}

