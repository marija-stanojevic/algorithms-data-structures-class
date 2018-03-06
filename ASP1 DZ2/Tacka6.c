#include "Heder.h"
void change()
{
	FILE* output=fopen("output.out","a");
	int max_flow_new;
	max_flow_new=max_flow(0, n);
	if (max_flow_new>max_flowb) {fprintf(output, "POVECAVA SE, %d (umesto %d)\n", max_flow_new, max_flowb);}
	else 
		if (max_flow_new==max_flown) {fprintf(output, "NE MENJA SE\n");}
		else fprintf(output, "SMANJUJE SE, %d (umesto %d)\n", max_flowb, max_flow_new);
	fclose (output);
}