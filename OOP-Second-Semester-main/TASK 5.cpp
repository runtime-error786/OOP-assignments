#include<iostream>
using namespace std;
int row, coloumn, row1, coloumn2, result_row, result_column;
int** matrix_1;
int** matrix_2;
int** resultant_matrix;
void array_fun() {
	if (row * coloumn > row1 * coloumn2) {
		result_row = row;
		result_column = coloumn;
	}
	else {
		result_row = row1;
		result_column = coloumn2;
	}
	resultant_matrix = new int* [result_row];
	for (int i = 0; i < result_row; i++) {
		resultant_matrix[i] = new int[result_column];
	}
}
int** add(int** matrix1, int** matrix2) {
	for (int i = 0; i < result_row; i++) {
		for (int j = 0; j < result_column; j++) {
			if (j >= coloumn || i >= row) {
				resultant_matrix[i][j] = matrix2[i][j];
			}
			else if (j >= coloumn2 || i >= row1) {
				resultant_matrix[i][j] = matrix1[i][j];
			}
			else {
				resultant_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}
	}
	return resultant_matrix;
}
int** sub(int** matrix1, int** matrix2) {
	for (int i = 0; i < result_row; i++) {
		for (int j = 0; j < result_column; j++) {
			if (j >= coloumn || i >= row) {
				resultant_matrix[i][j] = matrix2[i][j];
			}
			else if (j >= coloumn2 || i >= row1) {
				resultant_matrix[i][j] = matrix1[i][j];
			}
			else {
				resultant_matrix[i][j] = matrix1[i][j] - matrix2[i][j];
			}
		}
	}
	return resultant_matrix;
}
int** multiply(int** matrix1, int** matrix2) {
	for(int i = 0; i < result_row; i++) {
        for(int j = 0; j < result_column;  j++) {
            for(int k = 0; k < coloumn2; k++) {
                resultant_matrix[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
      
   return resultant_matrix;
}
void show(int** result_matrix) {
	for (int i = 0; i < result_row; i++) {
		for (int j = 0; j < result_column; j++) {
			cout << result_matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	cout << "Enter Rows Of Firsst Matrix : ";
	cin >> row;
	cout << "Enter Columns Of First Matrix  : ";
	cin >> coloumn;
	matrix_1 = new int* [row];
	cout << endl << "Enter Matrix1 Values" << endl << endl;
	for (int i = 0; i < row; i++) {
		matrix_1[i] = new int[coloumn];
		for (int j = 0; j < coloumn; j++) {
			cout << "Enter Value Of Matrix1  [" << i << "] And [" << j << "] : ";
			cin >> matrix_1[i][j];
		}
	}
	cout << endl;
	cout << "Enter Rows Of Second Matrix : ";
	cin >> row1;
	cout << "Enter Columns Of Second Matrix : ";
	cin >> coloumn2;
	cout << endl;
	matrix_2 = new int* [row1];
	cout << "Enter Matrix2 Values" << endl << endl;
	for (int i = 0; i < row1; i++) {
		matrix_2[i] = new int[coloumn2];
		for (int j = 0; j < coloumn2; j++) {
			cout << "Enter Value Of Matrix2 [" << i << "] And [" << j << "] : ";
			cin >> matrix_2[i][j];
		}
	}
	array_fun();
	cout << "\nThe Addition Of Matrix Is : " << endl << endl;
	resultant_matrix = add(matrix_1, matrix_2);
	show(resultant_matrix);
	cout << "\nThe Subtraction Of Matrix Is : " << endl << endl;
	resultant_matrix = sub(matrix_1, matrix_2);
	show(resultant_matrix);
	cout << "\nThe Multiplication Of Matrix Is : " << endl << endl;
	resultant_matrix = multiply(matrix_1, matrix_2);
	show(resultant_matrix);
	cout << endl << endl;
	delete[] matrix_1;
	delete[] matrix_2;
	system("pause");
	return 0;
}

