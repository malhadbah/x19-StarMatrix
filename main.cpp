#include<iostream>
#include<vector>
using namespace std;

int main()
{

vector<vector <char> >matrix;

int rows, cols;
cout<<"enter number of rows and columns of stars : ";
cin>>rows;
cin>>cols;

//if row and column is invalid print nothing
if(rows<=0 || cols<=0)
{

//Matrix Dimension
//Matrix.resize(rows);

for(int row=0; row<rows; row++)
{
matrix[rows].resize(cols);

//now the matrix row and col is set
for(int row=0; row<rows; row++)
 {
  for(int col=0; col<cols; col++)
{   //set the stars *
   matrix[row][col]='*';
  cout<<matrix[row][cols];
  cout<<"*"<<endl;
 }
 cout<<endl;
 }
 }
 }
 return 0;
 }

