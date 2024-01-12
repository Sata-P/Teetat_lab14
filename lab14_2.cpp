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

void inputMatrix(double X[][N]){
    for(int i=0 ; i<N ; i++ ){
        cout << "Row "<< i+1 << ": " ;
        for(int j=0 ; j<N ; j++ ){
            cin >> X[i][j]; 
        }

    }
}

void findLocalMax(const double X[][N], bool Y[][N]){
    for(int i=0 ; i<N ; i++ ){
        for(int j=0 ; j<N ; j++ ){
            Y[i][j] = 0;
            }
        }
    for(int i=1 ; i<N-1 ; i++ ){
        for(int j=1 ; j<N-1 ; j++ ){
            if( X[i][j] >= X[i-1][j] && X[i][j] >= X[i+1][j] && X[i][j] >= X[i][j-1] && X[i][j] >= X[i][j+1] ){
                Y[i][j] = true ;
                }
            else Y[i][j] = false ;
            }
        
        }
}

void showMatrix(const bool Y[][N]){
    for(int i=0 ; i<N ; i++ ){
        for(int j=0 ; j<N ; j++ ){
            cout << Y[i][j] << " " ; 
            }
        cout << "\n" ;
        }
}