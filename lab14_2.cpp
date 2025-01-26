#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 

void showMatrix(const bool a[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void inputMatrix(double b[][N]){
    for(int i = 0; i < N; i++){
        cout << "Row " << i + 1 << ": ";
        for(int j = 0; j < N; j++){
            cin >> b[i][j];
        }
    }
}

void findLocalMax(const double c[][N], bool e[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            bool x = ((i == 0) || (i == (N - 1)));
            bool y = ((j == 0) || (j == (N - 1)));
            bool i1 = c[i][j] < c[i + 1][j];
            bool i2 = c[i][j] < c[i - 1][j];
            bool j1 = c[i][j] < c[i][j + 1];
            bool j2 = c[i][j] < c[i][j - 1];
            if(x || y){
                e[i][j] = 0;
            }
            else if(i1 || i2 || j1 || j2){
                e[i][j] = 0;
            }
            else e[i][j] = 1;
            
        }
    }
}