#include "Heder.h"
void max_node_flow1()
{
	int i,j, max=0;
	for (j=1; j<n-1; j++)
	{ 
		k2=0;
		for (i=0; i<n-1; i++)
		{
			if (flow[i][j]!=0) k2+=flow[i][j]; 
		}
		if ((k>max)&&(j!=koor)) {max=k; koor2=j;}
	}
	for (j=0; j<n; j++)
		capacity[koor2][j] = 0;
	capacity[koor2][n]= MAX;
	max_flow(0, n);
	write3(koor2);
}