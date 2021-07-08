//BY       : AKSHAY SATPUTE
#include<bits/stdc++.h>
#define fi(n) for(int i=0;i<n;i++)
#define fj(n) for(int j=0;j<n;j++)
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
void draw()
{
	system("cls");
	cout<<"\t\t[ AKSHAY SATPUTE ]\n";
	cout<<"\t\t[  TIC  TAC  TOE ]\n\n";
	fi(3)
	{
		cout<<"\t\t    ";
		fj(3)
		{
			if(j<2)
			cout<<matrix[i][j]<<" | ";
			else
			cout<<matrix[i][j];
		}
		if(i<2)
		cout<<"\n\t\t   -----------";
		cout<<"\n";
	}
}
void toggleplayer()
{
	if(player=='X')
	player='O';
	else
	player='X';
}
void input()
{
	int in;
	cout<<"\n\t\t    TURN : "<<player<<"\n";
	cout<<"\t\tPosition : ";
	cin>>in;
	if(in==1)
	{
		if(matrix[0][0]=='1')
		matrix[0][0]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	
	else if(in==2)
	{
		if(matrix[0][1]=='2')
		matrix[0][1]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	else if(in==3)
		{
		if(matrix[0][2]=='3')
		matrix[0][2]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	else if(in==4)
	{
		if(matrix[1][0]=='4')
		matrix[1][0]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	else if(in==5)
	{
		if(matrix[1][1]=='5')
		matrix[1][1]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	else if(in==6)
	{
		if(matrix[1][2]=='6')
		matrix[1][2]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	else if(in==7)
	{
		if(matrix[2][0]=='7')
		matrix[2][0]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	else if(in==8)
	{
		if(matrix[2][1]=='8')
		matrix[2][1]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	else if(in==9)
	{
		if(matrix[2][2]=='9')
		matrix[2][2]=player;
		else
		cout<<"\t\tFIELD IS ALREADY USED\n";
	}
	else
	cout<<"\t\tINVALID POSITION\n";
	
}
char winner()
{
	//Player X Winning chances
	if(matrix[0][0]=='X' && matrix[0][1]=='X' &&  matrix[0][2]=='X')
	return 'X';
	if(matrix[1][0]=='X' && matrix[1][1]=='X' &&  matrix[1][2]=='X')
	return 'X';
	if(matrix[2][0]=='X' && matrix[2][1]=='X' &&  matrix[2][2]=='X')
	return 'X';
	if(matrix[0][0]=='X' && matrix[1][1]=='X' &&  matrix[2][2]=='X')
	return 'X';
	if(matrix[2][0]=='X' && matrix[1][1]=='X' &&  matrix[0][2]=='X')
	return 'X';
	if(matrix[0][0]=='X' && matrix[1][0]=='X' &&  matrix[2][0]=='X')
	return 'X';
	if(matrix[0][1]=='X' && matrix[1][1]=='X' &&  matrix[2][1]=='X')
	return 'X';
	if(matrix[0][2]=='X' && matrix[1][2]=='X' &&  matrix[2][2]=='X')
	return 'X';
	
	//Player O Winning chances
	if(matrix[0][0]=='O' && matrix[0][1]=='O' &&  matrix[0][2]=='O')
	return 'O';
	if(matrix[1][0]=='O' && matrix[1][1]=='O' &&  matrix[1][2]=='O')
	return 'O';
	if(matrix[2][0]=='O' && matrix[2][1]=='O' &&  matrix[2][2]=='O')
	return 'O';
	if(matrix[0][0]=='O' && matrix[1][1]=='O' &&  matrix[2][2]=='O')
	return 'O';
	if(matrix[2][0]=='O' && matrix[1][1]=='O' &&  matrix[0][2]=='O')
	return 'O';
	if(matrix[0][0]=='O' && matrix[1][0]=='O' &&  matrix[2][0]=='O')
	return 'O';
	if(matrix[0][1]=='O' && matrix[1][1]=='O' &&  matrix[2][1]=='O')
	return 'O';
	if(matrix[0][2]=='O' && matrix[1][2]=='O' &&  matrix[2][2]=='O')
	return 'O';
	
	return '/';

 } 
int main()
{
	int n=0;
	draw();
	while(1)
	{
		n++;
		input();
		draw();
		if(winner()=='X')
		{
			cout<<"\n\t\t-------------------------";
			cout<<"\n\t\t||  WINNER : PLAYER X  ||";
			cout<<"\n\t\t-------------------------\n";
			break;
		}
		else if(winner()=='O')
		{
			cout<<"\n\t\t-------------------------";
			cout<<"\n\t\t||  WINNER : PLAYER O  ||";
			cout<<"\n\t\t-------------------------\n";
			break;
		}
		else if(winner()=='/' && n==9)
		{
			cout<<"\n\t\t   ------------";
			cout<<"\n\t\t   ||  DRAW  ||";
			cout<<"\n\t\t   ------------\n";
			break;
		}
		toggleplayer();
	}
}
