#include <iostream>
using namespace std;
#define N 8
#define PRINT(matrix) for(int i=0;i<N;i++){for(int j=0;j<N;j++){cout<<matrix[i][j]<<" ";}cout<<endl;}
int count=0;
bool isSafe(int matrix[N][N], int x, int y){
	// non-reserved
	if (matrix[y][x]==1)
		return false;
	// check for column
	for (int i=0;i<N;i++){
		if (matrix[i][x]==2)
			return false;
	}
	int row = y;
	int col = x;
	// check left-diagonal "\"
	while(row>=0 && col>=0){
		if (matrix[row][col]==2)
			return false;
		row--;col--;
	}
	row = y;
	col = x;
	// check right-diagonal "/"
	while(col<N && row>=0){
		if (matrix[row][col]==2)
			return false;
		row--;col++;
	}
	return true;
}
bool queen(int matrix[N][N], int x){
	if (x>N-1){
		//PRINT(matrix);
		//cout<<endl;
		count++;

	}
	for (int col=0; col<N;col++){
		if (isSafe(matrix, col, x)){
			matrix[x][col] = 2;
			if (queen(matrix, x+1))
				return true;
			matrix[x][col] = 0;
		}
	}
	return false;
}
int main(){
	int matrix[N][N];
	char a;
	for (int i=0; i<N; i++){
		for (int j=0;j<N;j++){
			cin>>a;
			if (a=='.')
				matrix[i][j]=0;
			else{   
				matrix[i][j]=1;
			}
		}
	}
	if (queen(matrix,0))
		return 1;	
	cout<<count<<endl;
	return 0;
}
