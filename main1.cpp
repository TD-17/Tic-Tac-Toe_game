#include<iostream>
#include<stdlib.h>
#include<time.h>
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
	
	display();
	int a;
	char player='X';
	cout<<"It is your chance, enter the field number (from 1 to 9)\n";
    cin >> a;
 
    if (a == 1)
    {
        if (matrix[0][0] == '1')
            matrix[0][0] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
    else if (a == 4)
    {
        if (matrix[1][0] == '4')
            matrix[1][0] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
    else if (a == 5)
    {
        if (matrix[1][1] == '5')
            matrix[1][1] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
    else if (a == 6)
    {
        if (matrix[1][2] == '6')
            matrix[1][2] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
    else if (a == 7)
    {
        if (matrix[2][0] == '7')
            matrix[2][0] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
    else if (a == 8)
    {
        if (matrix[2][1] == '8')
            matrix[2][1] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
    else if (a == 9)
    {
        if (matrix[2][2] == '9')
            matrix[2][2] = player;
        else
        {
            cout<< "ILLEGAL MOVE"<<endl;
	        cout<<"Now chance will be given to the bot"<<endl;
        }
    }
   
}
void inputBot()
{
	int field;
	srand(time(0));
	field=rand()%9;
	system("cls");
	if(matrix[field/3][field%3] != 'X' && matrix[field/3][field%3] != 'O' )
    {
	 matrix[field/3][field%3] = 'O';
	 cout<<"Bot chose "<<field+1<<endl;
    }
    else
	{
	 cout<< "ILLEGAL MOVE BY BOT"<<endl;
	 cout<<"Now chance will be given to you"<<endl;
	}
}
char Winner()
{
    //first player
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
 
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';
 
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
 
    //second player
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
 
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';
 
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    return 'l';
}

int main()
{
   int n=0;
   while(1)
   {
   	getInput();
   	if(Winner() =='X')
   	{
   		system("cls");
   		cout<<"yipee!!!! YOU WON"<<endl;
   		display();
   		break;
	}
	else if (Winner() == 'l' && n == 9)
	{
		system("cls");
		cout<<"Oops!!!! IT IS A DRAW"<<endl;
		break;
	}
   	inputBot();
   	if(Winner() =='O')
   	{
   		system("cls");
   		cout<<"sorry!!!! YOU LOST"<<endl;
   		display();
   		break;
	}
	else if (Winner() == 'l' && n == 9)
	{
		system("cls");
		cout<<"Oops!!!! IT IS A DRAW"<<endl;
		break;
	}
   }
   return 0;
}

