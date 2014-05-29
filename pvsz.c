nclude<stdio.h>

#define MAX_Y 9
#define MAX_X 55
#define ZOMNUM 3
#define FLOIME 3

void initMap(int a[][MAX_X],int i,int j);
void printMap(int a[][MAX_X],int i,int j);
int map[MAX_Y][MAX_X]={};

int main()
{		
	initMap(map,MAX_Y,MAX_X);
	printMap(map,MAX_Y,MAX_X);
	return 0;
}

void initMap(int a[][MAX_X],int i,int j)
{	
	int k=1;
	for(int y=0;y<i;y++)
	{	
		if(k==1)
		{	
			for(int x=0;x<j;x++)
			{	
				a[y][x]=45;
			}
		}
		if(k==-1)
		{	
			for(int x=0;x<j;x++)
			{	
				a[y][x]=42;
			}
		}
		k=k*(-1);

	}
	a[3][2]=45;a[3][3]=45;a[3][4]=62;
	a[1][7]=49;a[1][12]=50;a[1][17]=51;
	a[1][22]=52;a[1][27]=53;a[1][32]=54;
	a[1][37]=55;a[1][42]=56;a[1][47]=57;a[1][52]=48;
}

void printMap(int a[][MAX_X],int i,int j)
{
	for(int y=0;y<i;y++)
	{
		for(int x=0;x<j;x++)
		{
			printf("%c",a[y][x]);
		}
		printf("\n");
	}
}
