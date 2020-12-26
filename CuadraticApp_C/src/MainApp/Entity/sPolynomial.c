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

#include "sPolynomial.h"

sPolynomial* Poly_newEmpty(){
    return (sPolynomial*) calloc(sizeof(sPolynomial),1);
}

sPolynomial* Poly_new(float determinant, float xAxis, float yAxis, float xVertice, float yVertice){
	sPolynomial* thisPolynomial = Poly_newEmpty();
    if(thisPolynomial!=NULL){
        Poly_setAxisX(thisPolynomial, xAxis);
        Poly_setAxisY(thisPolynomial, yAxis);
        Poly_setVerticeX(thisPolynomial, xVertice);
        Poly_setVerticeY(thisPolynomial, yVertice);
        Poly_setDeterminant(thisPolynomial, determinant);
    }
    return thisPolynomial;
}

int Poly_getAxisX(sPolynomial* polynomial, float* xAxis){
    int isError = 1;
    if(polynomial!=NULL && xAxis!=NULL){
        *xAxis = polynomial->axis.xAxis;
        isError = 0;
    }
    return isError;
}

int Poly_getAxisY(sPolynomial* polynomial, float* yAxis){
    int isError = 1;
    if(polynomial!=NULL && yAxis!=NULL){
        *yAxis = polynomial->axis.yAxis;
        isError = 0;
    }
    return isError;
}

int Poly_getVerticeX(sPolynomial* polynomial, float* xVertice){
    int isError = 1;
    if(polynomial!=NULL && xVertice!=NULL){
        *xVertice = polynomial->vertice.xAxis;
        isError = 0;
    }
    return isError;
}

int Poly_getVerticeY(sPolynomial* polynomial, float* yVertice){
    int isError = 1;
    if(polynomial!=NULL && yVertice!=NULL){
        *yVertice = polynomial->vertice.yAxis;
        isError = 0;
    }
    return isError;
}

int Poly_getDeterminant(sPolynomial* polynomial, float* determinant){
    int isError = 1;
    if(polynomial!=NULL && determinant!=NULL){
        *determinant = polynomial->determinant;
        isError = 0;
    }
    return isError;
}

int Poly_setAxisX(sPolynomial* polynomial, float xAxis){
    int isError = 1;
    if(polynomial!=NULL){
    	polynomial->axis.xAxis = xAxis;
        isError = 0;
    }
    return isError;
}

int Poly_setAxisY(sPolynomial* polynomial, float yAxis){
    int isError = 1;
    if(polynomial!=NULL){
    	polynomial->axis.yAxis = yAxis;
        isError = 0;
    }
    return isError;
}

int Poly_setVerticeX(sPolynomial* polynomial, float xVertice){
    int isError = 1;
    if(polynomial!=NULL){
    	polynomial->vertice.xAxis = xVertice;
        isError = 0;
    }
    return isError;
}

int Poly_setVerticeY(sPolynomial* polynomial, float yVertice){
    int isError = 1;
    if(polynomial!=NULL){
    	polynomial->vertice.yAxis = yVertice;
        isError = 0;
    }
    return isError;
}

int Poly_setDeterminant(sPolynomial* polynomial, float determinant){
    int isError = 1;
    if(polynomial!=NULL){
    	polynomial->determinant = determinant;
        isError = 0;
    }
    return isError;
}
