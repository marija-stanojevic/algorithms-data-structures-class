#include "Heder.h"
int min (int x, int y) 
{
    return ((x<y) ? x : y);  // minimum od dva broja
}
int max_flow (int source, int sink) {
    int i,j,u;
    int max_flown = 0;
    for (i=0; i<=sink; i++) 
	{
		for (j=0; j<=sink; j++) 
		{
			flow[i][j] = 0;
		}
    }
    while (bfs(source,sink)) 
	{
		int increment = MAX;
		for (u=sink; pred[u]>=0; u=pred[u]) {
			increment = min(increment,capacity[pred[u]][u]-flow[pred[u]][u]);
	}
	for (u=sink; pred[u]>=0; u=pred[u]) {
	    flow[pred[u]][u] += increment;
	    flow[u][pred[u]] -= increment;
	}
	max_flown += increment;
    }
	for (i=0; i<=n; i++)
		for (j=0; j<=n; j++)
			if (flow[i][j]<0) {flow[i][j]=0;}
	return max_flown;
}