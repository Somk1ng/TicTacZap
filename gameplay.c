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

#include"status.h"
#include"ui.h"
#include"types.h"
#include<stdio.h>

/*
**Issues:
**Remove direct interaction with I/O
*/
void turn(int arr[][3])
{
	static int t=1;
	Position pos;
	showturn(t);
	inputPosition(&pos);

	if(arr[pos.i-1][pos.j-1] != 0)
	{
		alert("Position Already Ocuppied\n");
		turn(arr);
		return;
	}

	arr[pos.i-1][pos.j-1] = t;

	if(t == 1)
		t = 2;
	else
		t = 1;
}

void init(int arr[][3],char p[])
{
	int i,j;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			arr[i][j]=0;

	p[0] = ' ';
	printf("Enter the symbol for player 1(x or o):");
	scanf("%c",&p[1]);
	if(p[1]=='o')
		p[2] = 'x';
	else
		p[2] = 'o';

	printf("Player 2 symbol set to %c\n",p[2]);
}
