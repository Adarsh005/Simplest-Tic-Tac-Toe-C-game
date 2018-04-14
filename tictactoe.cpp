#include <iostream>
using namespace std;
char square[9] = {'0','1','2','3','4','5','6','7','8'};
int test[9]={0,0,0,0,0,0,0,0,0};
int check()
{
		if (square[0] == square [1]  && square[1] == square[2] )
		{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}		
		else
		if (square[3] == square [4]  && square[4] == square[5] )
			{	if ( square [3] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[6] == square [7]  && square[7] == square[8] )
			{	if ( square [6] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[0] == square [3]  && square[3] == square[6] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[1] == square [4]  && square[4] == square[7] )
			{	if ( square [1] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[2] == square [5]  && square[5] == square[8] )
			{	if ( square [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
else
		if (square[0] == square [4]  && square[4] == square[8] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[2] == square [4]  && square[4] == square[6] )
			{	if ( square [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[0] == square [3]  && square[3] == square[6] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
}

void mark(int player, int box)
{
	if (player == 1 )
	{

		square[box] = 'X';
	}
	else
		square[box] = 'Y';
}

void display()
{
		for(int i=0;i<9;i++)
		{
			cout<< square[i] << "\t" ;
				if (i == 2 || i== 5 || i==8)
					cout<<"\n"; 
}
}
int main()
{
		int player1 = 1, player2 =2 ;
		
		int box, result = 0, flag = 0;
		
		for(int i=1;i<6;i++)
	{

		display();
		x: cout<< "\n Player " << player1 << " Enter the Box";
		cin>> box; if(test[box]!=0) {cout<<"\nInvalid Entry, enter again!"; goto x;}
		mark( player1, box); test[box]=-1;
		

		result =check();
		if (result == 1 )
		{	cout<<"\n Player " << player1 << " has Won ";
			flag = 1;			
			break;
		}
		if(i==5) break;
		display();
		y: cout<< "\n Player " << player2 << " Enter the Box";
		cin>> box; if(test[box]!=0) {cout<<"\nInavlid entry! Enter again!"; goto y;}
		mark ( player2, box); test[box]=-1;
		
		
		result =check();	
		if (result == 2 )
		{	cout<<"\n Player " << player2 << " has Won ";
			flag = 1;
			break;
		}
}
		if (flag == 0 )
		cout<<" \n The game is a draw ";
	
	return 0;
}
