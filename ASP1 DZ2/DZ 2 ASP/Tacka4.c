#include "Heder.h"
void remove_it()
{
	FILE* output = fopen("output.out","a");
	int i, j, l, p, q, factory_max=k, r;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		if (capacity[i][j]>0)
			if (j!=koor)
			{
				p=capacity[i][j];
				capacity[i][j]=0;
				r=max_flow(0, n);
				q=0;
				for (l=0; l<n; l++)
					q+=flow[l][koor];
				if (q==r) {fprintf(output, "MOZE, %d %d\n", i, j); capacity[i][j]=p; return;}
				capacity[i][j]=p;
			}
		fprintf(output, "NE MOZE\n");
		fclose(output);
}