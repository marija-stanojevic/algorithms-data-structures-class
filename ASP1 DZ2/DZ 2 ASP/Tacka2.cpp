int max_node_flow()
{
	int i,j, max=0, k, koor;
	for (j=1; j<n-1; j++)
	{ k=0;
		for (i=0; i<n-2; i++)
		{
			if (flow[i][j]!=0) k+=flow[i][j]; 
		}
		if (k>max) {max=k; koor=j;}
	}
	return koor;
}
int factory_graph (int koor)
{
	int i,j,u, max_flow = 0;
	for (i=0; i<n; i++)
		if (capacity[koor][i]>0) flow[koor][i]=0;
	for (i=0; i<n; i++) 
	{	
		flow[i][koor]=capacity[i][koor];
		max_flow+=capacity[i][koor];
	}
    for (i=0; i<n; i++)
	for (j=0; j<n; j++) 
	    if ((i!=koor) && (j!=koor)) flow[i][j] = 0;
	int p=0, q=0;
	for (i=0; i<n; i++) 
	{ 
		q=0;
		if (i=koor) p=1;
		for (j=0; j<n; j++) 
		{
			if (j=koor) q=1;
			if (!p)
				if (!q) 
				{
					capacity1[i][j]=capacity[i][j];
					flow1[i][j]=flow[i][j];
				}
				else
				{
					capacity1[i][j]=capacity[i][j+1];
					flow1[i][j]=capacity[i][j+1];
				}
			else 
				if (!q) 
				{
					capacity1[i][j]=capacity[i+1][j];
					flow1[i][j]=flow[i+1][j];
				}
				else
				{
					capacity1[i][j]=capacity[i+1][j+1];
					flow1[i][j]=capacity[i+1][j+1];
				}
		}
	}
    for (i=0; i<n-1; i++) {
	for (j=0; j<n-1; j++) {
	    flow1[i][j] = 0;
	}
    }
    while (bfs1(0,n-1)) {
	int increment = MAX;
	for (u=n-2; pred[u]>=0; u=pred[u]) {
	    increment = min(increment,capacity1[pred[u]][u]-flow1[pred[u]][u]);
	}
	for (u=n-2; pred[u]>=0; u=pred[u]) {
	    flow[pred[u]][u] += increment;
	    flow[u][pred[u]] -= increment;
	}
	max_flow += increment;
    }
    return max_flow;
}
}