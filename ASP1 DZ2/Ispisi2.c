void ispisi2(int max_flow)
{	int i, j;
	FILE* fopen("output.out","w");
	fprintf("%d\n", max_flow);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		{
			if (capacity[i][j]>0) fprintf("%d/%d\n", flow[i][j], capacity[i][j]);
		}
}