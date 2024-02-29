/**
Copyright (C) 2017 Arka Ray

This program is free software;you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free Software Foundation;
either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program;
if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include<stdio.h>
#include"types.h"
#include"status.h"

void display(int arr[][3],char p[])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i != 2)
				printf("_");
			else
				printf(" ");

			printf("%c",p[arr[i][j]]);

			if(j != 2)
				printf("|");
			else
				printf("\n");
		}
	}
}

void showGameResult(int arr[][3])
{
	if(!draw(arr))
		printf("Player %d has won\n",win(arr));
	else
		printf("Game has ended in a draw\n");
}

void inputPosition(Position *pos){
	printf("Enter a position:");
	scanf("%d,%d",&pos->i,&pos->j);
}

void showturn(int p){
	printf("Player %d's turn\n",p);
}

void alert(char const *s){
	puts(s);
}
