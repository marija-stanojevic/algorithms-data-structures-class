#include "Heder.h"
void max_node_flow()
{
	int i,j, max=0;
	for (j=1; j<n-1; j++)
	{ 
		k=0;
		for (i=0; i<n-1; i++)
		{
			if (flow[i][j]!=0) k+=flow[i][j]; 
		}
		if (k>max) {max=k; koor=j;}
	}
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		{
			capacity1[i][j]=capacity[i][j];
		}
	for (j=0; j<n; j++)
		capacity[koor][j] = 0;
	for (i=0; i<=n; i++)
	{
		capacity[n][j]=0;
		capacity[j][n]=0;
	}	
	capacity[koor][n]= MAX;
	capacity[n-1][n]= MAX;
	max_flow (0, n);
	write2(koor);
}
