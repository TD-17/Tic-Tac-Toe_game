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
//Take input from player2 to insert 'X' in the specifield field by player2
void getInput()
{
	cout<<"It is your chance, enter the field number (from 1 to 9)\n";
	cin>>field;
	field--;
    if(matrix[a/3][a%3] != 'X' && matrix[a/3][a%3] != 'O' )
    {
	 matrix[a/3][a%3] = 'X';
	 display();
	}
    else
	{
	 cout<< "ILLEGAL MOVE"<<endl;
	 cout<<"Now chance will be given to the bot"<<endl;
	}

}
void inputBot()
{
	cout<<"It's bot's chance"<<endl;
	srand(time(0));
	field=rand()%9;
	if(matrix[a/3][a%3] != 'X' && matrix[a/3][a%3] != 'O' )
    {
	 matrix[a/3][a%3] = 'O';
	 display();
    }
    else
	{
	 cout<< "ILLEGAL MOVE"<<endl;
	 cout<<"Now chance will be given to the player2"<<endl;
	}
}

