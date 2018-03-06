#include "Heder.h"
void remove_one()
{
	FILE* output = fopen("output.out","a");
	int i, j, l, p, q, factory_max=k;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		if (capacity[i][j]>0)
		{
			p=capacity[i][j];
			capacity[i][j]=0;
			max_flow(0, n-1);
			q=0;
			for (l=0; l<n; l++)
				q+=flow[l][koor];
			if (q>factory_max) {fprintf(output, "JESTE, %d %d\n", i, j); return;}
			capacity[i][j]=p;
		}
		fprintf(output, "NIJE\n");
		fclose(output);
}

