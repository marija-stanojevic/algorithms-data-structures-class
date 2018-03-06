#include "Heder.h"
void read_input_file() 
{
    int a,b,c,i,j;
    FILE* input;
	if ((input=fopen("input.in","r"))!=NULL)
	{
		fscanf(input,"%d %d",&n,&m);
		n=n+2;
		for (i=0; i<n; i++) 
		{
			for (j=0; j<n; j++) 
			{
				capacity[i][j] = 0;
			}
		}
		for (i=0; i<m; i++)
		{
			fscanf(input,"%d %d %d",&a,&b,&c);
			capacity[a][b] = c;
		}
		fclose(input);
	}
}