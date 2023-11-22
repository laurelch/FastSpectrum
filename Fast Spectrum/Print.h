#ifndef PRINT_H
#define PRINT_H

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <Eigen/Eigen>

using namespace std;

void printMatrix(Eigen::MatrixXd &matrix, const string &filename);
void printVector(Eigen::VectorXd &vector, const string &filename);
void printVector(Eigen::VectorXi &vector, const string &filename);
void printSparseMatrix(Eigen::SparseMatrix<double> &sparseMatrix, const string &filename);

#endif // !PRINT_H