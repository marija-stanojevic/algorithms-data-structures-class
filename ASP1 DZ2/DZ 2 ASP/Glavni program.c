#include "Heder.h"

void main ()
{
	read_input_file();
	max_flown=max_flowb=max_flow (0, n-1);
	write1();
	max_node_flow();
	remove_one();
	remove_it();
	max_node_flow1();
	change();
}