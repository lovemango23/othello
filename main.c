#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N6
int gameboard[N][N];
int main(int argc, char *argv[]) {
	
	board[3][3]=board[4][4]=1;
	board[4][3]=board[3][4]=2;

void viewBoard();
void score();
	int position, kind;
	int Othello::getOpp(int kind);
	if(kind==1)
		return 2;
	else 
	return 1;

void Othello::viewBoard(){
	count<<oth<<"";
	for(int x=0;x<8;x++){
		if(board[y][x]==0)
		count<<oth<<"O";
	else 
	count<<oth<<"X";
	}
	count<<endl;
}
int Othello::put(int position, int kind){
	int x, y;
	y=position 10-1;
	x=position %10-1;
int valid=checkValidity(y,x,kind);
	if(valid==0){
		board[y][x]=kind;
		return 0;
	}
	else 
	return valid;
}

int Othello::checkValidity(int y,int x,int kind){
	if(board[y][x]!=0)
	
}
	
	
	return 0;
}
