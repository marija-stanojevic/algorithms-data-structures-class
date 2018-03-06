#include <stdio.h>

#define NOT 0 // za BFS, nismo ni jednom posetili taj cvor
#define IS 1 // za BFS, cvor je posecen
#define WAS 2 // za BFS, cvor je 
#define MAX_NOD 1002 // maksimalni broj cvorova
#define MAX 1000000000 // beskonacni protok
int factory_out[MAX_NOD];
int factory_in[MAX_NOD];
int capacity[MAX_NOD][MAX_NOD]; // matrica trenutnog kapaciteta
int capacity1[MAX_NOD][MAX_NOD]; // matrica pocetnog kapaciteta
int flow[MAX_NOD][MAX_NOD];     // matrica protoka
int nodes_pass[MAX_NOD]; //za BFS, da li je cvor obradjen           
int pred[MAX_NOD];  // za BFS, pomaze u obilasku celog grafa, a cuva prethodnike trenutnog cvora
int n;  // broj cvorova
int m;  // broj grana
int koor, koor2; //cvorovi u kojima se grade prva i druga fabrika
int max_flown; //maksimalni protok
int max_flowb; // maksimalni protok na pocetku
int k, k2; //kolicina protoka kroz fabrike jedan i dva u trenutku njihovog formiranja
void read_input_file();
int max_flow (int, int);
void write1();
void write2(int);
void write3(int);
void max_node_flow();
void factory_graph();
void remove_one();
void remove_it();
void max_node_flow1();
void change();
int bfs(int, int);