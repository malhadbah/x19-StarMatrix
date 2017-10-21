#include<iostream>
#include<vector>
using namespace std;

int main()
{

vector<vector <char> >matrix;

int rows, cols;
cout<<"Enter rows and columns of stars:";
cin>>rows;
cin>>cols;
cout<<endl;
//if row and column is invalid print nothing
if(rows>0 && cols>0)
{


//now the matrix row and col is set
for(int row=0; row<rows; row++)
 {
 matrix.resize(rows);
  for(int col=0; col<cols; col++)
{
matrix[row].resize(cols);
matrix[row][col]='*';
cout<<matrix[row][col];
}
cout<<endl;
}
}
else if(rows<=0 || cols<=0)
{
}

 return 0;
 }

