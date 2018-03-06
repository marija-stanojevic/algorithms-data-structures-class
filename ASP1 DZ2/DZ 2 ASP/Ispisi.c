#include "Heder.h"
void write1()
{	int i, j;
	FILE* output=fopen("output.out","w");
	fprintf(output, "%d\n", max_flown);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		{
			if (capacity[i][j]>0) fprintf(output, "%d/%d\n", flow[i][j], capacity[i][j]);
		}
	fclose(output);
}
void write2(int koor)
{	int i, j;
	FILE* output = fopen("output.out","a");
	fprintf(output, "%d\n", koor);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		{
			if (capacity1[i][j]>0) fprintf(output, "%d/%d\n", flow[i][j], capacity1[i][j]);
		}
	fclose(output);
}
void write3(int koor2)
{	int i, j;

	FILE* output = fopen("output.out","a");
	fprintf(output, "%d\n", koor2);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		{
			if (capacity1[i][j]>0) fprintf(output, "%d/%d\n", flow[i][j], capacity1[i][j]);
		}
	fclose(output);
}