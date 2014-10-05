#include <stdio.h>
#include <getopt.h>

static double c0 = 1.0;
static double c1 = 1.0/3;
static double c2 = 1.0/5;
static double c3 = 1.0/7;
static double c4 = 1.0/9;
static double c5 = 1.0/11;
static double c6 = 1.0/13;
static double c7 = 1.0/15;


double Taylor(double y){
	double x = (y-1);
	double z = (y+1);
	return 2 * (c0 * x/z +
			c1 * x/z* x/z* x/z +
			c2 * x/z* x/z* x/z* x/z* x/z  +
			c3 * x/z* x/z* x/z* x/z* x/z* x/z* x/z +
			c4 * x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z +
			c5 * x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z +
			c6 * x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z +
			c7 * x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z* x/z);
}


int main(int argc,char *argv[]){
	int sgte_opcion;
	char *tipo = "i:n:";
	int iteracion;
	double x;
	while(1){
		sgte_opcion = getopt_option(argc,argv,tipo,NULL,NULL);
		if (sgte_opcion == -1) break;
		switch(sgte_opcion){
			case 'i':	iteracion = atoi(optarg);	
					break;
			case 'n':	x = atoi(optarg);
					for (i = 0; i<iteracion;i++){
						ultimo = Taylor(x);
					}
					printf("%f\n",ultimo);
					break;
			case '?':	
					break;
			case '-1':	
					break;
			default:
			
		}
	}
	return 0;
}
