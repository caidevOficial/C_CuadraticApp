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

#ifndef MAINAPP_ENTITY_SPOLYNOMIAL_H_
#define MAINAPP_ENTITY_SPOLYNOMIAL_H_

typedef struct{
    float xAxis;
    float yAxis;
}sResult;

typedef struct{
	float determinant;
    sResult axis;
    sResult  vertice;
}sPolynomial;

#endif /* MAINAPP_ENTITY_SPOLYNOMIAL_H_ */

/**
 * Reserves space in memory por the struct.
 */
sPolynomial* Poly_newEmpty();

/**
 * Creates the polynomial with all its parameters.
 * @param determinant Its determinant.
 * @param xAxis It's x1 root.
 * @param yAxis it's x2 root.
 * @param xVertice It's Xvertice.
 * @param yVertice It's Yvertice.
 * @return The polinomial created.
 */
sPolynomial* Poly_new(float determinant, float xAxis, float yAxis, float xVertice, float yVertice);

/**
 * Gets the X1 root of the polynomial.
 * @param polynomial the polynomial.
 * @param xAxis the root x1.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_getAxisX(sPolynomial* polynomial, float* xAxis);

/**
 * Gets the X2 root of the polynomial.
 * @param polynomial The polynomial.
 * @param yAxis the root x2.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_getAxisY(sPolynomial* polynomial, float* yAxis);

/**
 * Gets the X vertice of the polynomial.
 * @param polynomial The polynomial.
 * @param xVertice X-Vertice of the polynomial.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_getVerticeX(sPolynomial* polynomial, float* xVertice);

/**
 * Gets the Y vertice of the polynomial.
 * @param polynomial The polynomial.
 * @param yVertice Y-Vertice of the polynomial.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_getVerticeY(sPolynomial* polynomial, float* yVertice);

/**
 * Gets the determinan of the polynomial.
 * @param polynomial The polynomial.
 * @param determinant Determinant of the polynomial.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_getDeterminant(sPolynomial* polynomial, float* determinant);

/**
 * Sets the X1 root of the polynomial.
 * @param polynomial The polynomial.
 * @param xAxis X1-Root of the polynomial.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_setAxisX(sPolynomial* polynomial, float xAxis);

/**
 * Sets the X2 root of the polynomial.
 * @param polynomial The polynomial.
 * @param yAxis X2-Root of the polynomial.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_setAxisY(sPolynomial* polynomial, float yAxis);

/**
 * Sets the X vertice of the polynomial.
 * @param polynomial The polynomial.
 * @param xVertice X-Vertice of the polynomial.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_setVerticeX(sPolynomial* polynomial, float xVertice);

/**
 * Sets the Y vertice of the polynomial.
 * @param polynomial The polynomial.
 * @param yVertice Y-Vertice of the polynomial.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_setVerticeY(sPolynomial* polynomial, float yVertice);

/**
 * Sets the determinant of the polynomial.
 * @param polynomial The polynomial.
 * @param determinant Determinant of the polynomial.
 * @return 1 if can, otherwise returns 0.
 */
int Poly_setDeterminant(sPolynomial* polynomial, float determinant);
