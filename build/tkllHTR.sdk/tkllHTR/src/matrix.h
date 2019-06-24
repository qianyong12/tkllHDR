/*
 * matrix.h
 *
 *  Created on: Jun 16, 2019
 *      Author: dangn
 */

#ifndef SRC_MATRIX_H_
#define SRC_MATRIX_H_

#include <stdlib.h>

typedef struct Matrix Matrix;

struct Matrix {
	int row;
	int col;
	double** at;
};

Matrix new_matrix(int row, int col);
Matrix add(Matrix a, Matrix b);
Matrix mul(Matrix a, Matrix b);

#endif /* SRC_MATRIX_H_ */