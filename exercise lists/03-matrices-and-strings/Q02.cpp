//Create a program in C++ that initializes a two-dimensional array of 2 (two) lines and 4 (four) columns and shows, 
//using two functions, the maximum ( ) and minimum ( ) number in the vector. 
//The maximum and minimum values must be written in the main program.

#include <iostream>
using namespace std;

int minimo(int mat[][4]){
    int min = mat[0][0];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] < min){
                min = mat[i][j];
            }
        }
    }
    return min;
}

int maximo(int mat[][4]){
    int max = mat[0][0];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] > max){
                max = mat[i][j];
            }
        }
    }
    return max;
}

int main(void){
    int mat[][4] = {{1,2,3,4},{5,6,7,8}};

    cout << "Minimo: " << minimo(mat) << endl;
    cout << "Maximo: " << maximo(mat) << endl;

    return 0;
}
