#include "Print.h"

void printMatrix(Eigen::MatrixXd &matrix, const string &filename){
    std::ofstream file(filename);
    if(file.is_open()){        
        for(int i=0; i<matrix.rows(); ++i){
            for(int j=0; j<matrix.cols(); ++j){
                file << matrix(i, j);
                if(j < matrix.cols() - 1){
                    file << " "; // separator
                }
            }
            file << "\n";
        }
        file.close();
        printf("Eigenvector matrix (%ldx%ld) is saved successfully.\n", matrix.rows(), matrix.cols());
    }
}

void printVector(Eigen::VectorXd &vector, const string &filename){
    std::ofstream file(filename);
    if(file.is_open()){        
        for(int i=0; i<vector.size(); ++i){
            file << vector(i) << "\n";
        }
        file.close();
    }
}

void printVector(Eigen::VectorXi &vector, const string &filename){
    std::ofstream file(filename);
    if(file.is_open()){        
        for(int i=0; i<vector.size(); ++i){
            file << vector(i) << "\n";
        }
        file.close();
    }
}

void printSparseMatrix(Eigen::SparseMatrix<double> &matrix, const string &filename){
    std::ofstream file(filename);
    if(file.is_open()){
        for(int i=0; i<matrix.outerSize(); ++i){
            for(Eigen::SparseMatrix<double>::InnerIterator it(matrix, i); it; ++it){
                file<<"("<<it.row()<<", "<<it.col()<<") = "<<it.value()<<"\n";
            }
        }
        file.close();
    }
}