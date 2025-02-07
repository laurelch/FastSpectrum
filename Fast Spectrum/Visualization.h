#pragma once
#ifndef VISUALIZATION_H
#define VISUALIZATION_H

#include <igl/opengl/glfw/Viewer.h>

/* Visualize the samples */
void visualizeSample(igl::opengl::glfw::Viewer &viewer, const Eigen::MatrixXd &V, const Eigen::MatrixXi &F, const Eigen::VectorXi &Sample);
/* Visualize basis */
void visualizeBasis(igl::opengl::glfw::Viewer &viewer, const Eigen::MatrixXd &V, const Eigen::MatrixXi &F, const Eigen::SparseMatrix<double> &U, const int &basisID);
/* Visualize Approximated Eigenvector */
void visualizeEigenvector(igl::opengl::glfw::Viewer &viewer, const Eigen::MatrixXd &V, const Eigen::MatrixXi &F, const Eigen::SparseMatrix<double> &U, const Eigen::MatrixXd &LDEigVec, const int &eigenID);

#endif // !VISUALIZATION_H

