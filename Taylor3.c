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
	double a = x/z;
	double tres_a = a*a*a;
	double nueve_a = a*a*a*a*a*a*a*a*a;
	return 2 * (c0 * a +
			c1 * tres_a +
			c2 * tres_a* a* a  +
			c3 * a* a* a* a* a* a* a  +
			c4 * nueve_a +
			c5 * nueve_a* a* a +
			c6 * nueve_a* a* a* a* a +
			c7 * nueve_a* a* a* a* a* a* a);
}
//probando si es que funca

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
			
		}
	}
	return 0;
}
