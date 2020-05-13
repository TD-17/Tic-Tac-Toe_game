#include<iostream>
#inclde<time.h>
using namespace std;

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char field;

//Print the matrix
void display()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}  
	
}
