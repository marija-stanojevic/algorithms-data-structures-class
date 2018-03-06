#include "Heder.h"
int head,tail;
int q[MAX_NOD];

void put (int x) 
{
    q[tail] = x;
    tail++;
	nodes_pass[x] = IS;
}
int push () 
{
    int x = q[head];
    head++;
    nodes_pass[x] = WAS;
    return x;
}
int bfs(int first, int target) 
{
    int u,v;
    for (u=0; u<=target; u++) 
	{
	nodes_pass[u] = NOT;
    }   
    head = tail = 0;
    put(first);
    pred[first] = -1;
    while (head!=tail) 
	{
	u = push();
	for (v=0; v<=target; v++) 
	{
	    if (nodes_pass[v]==NOT && capacity[u][v]-flow[u][v]>0) 
		{
		put(v);
		pred[v] = u;
	    }
	}
    }
    return nodes_pass[target]==WAS;
}