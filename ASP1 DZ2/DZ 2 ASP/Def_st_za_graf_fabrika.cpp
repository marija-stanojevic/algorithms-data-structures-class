int bfs1 (int first, int target) 
{
    int u,v;
    for (u=0; u<n; u++) 
	{
	nodes_pass[u] = NOT;
    }   
    head = tail = 0;
    put(first);
    nodes_pass[first] = -1;
    while (head!=tail) 
	{
	u = push();
	for (v=0; v<n; v++) 
	{
	    if (nodes_pass[v]==NOT && capacity1[u][v]-flow1[u][v]>0) 
		{
		put(v);
		pred[v] = u;
	    }
	}
    }
    return nodes_pass[target]==WAS;
}