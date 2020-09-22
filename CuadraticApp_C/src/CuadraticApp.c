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
 * Version     : Beta 1.1.01 [Beta v1.1.01] - [Codename: Krypton]
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "MainApp/MainApp.h"

int main(void) {
	system("title [#CuadraticApp v1.1.1] - [Codename: Neptune]");
	system("color 09"); // BG: Black, Text: LightBlue
	system("mode con: cols=65 lines=30");
	cuatraticApp();
	return EXIT_SUCCESS;
}
