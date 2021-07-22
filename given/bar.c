#include "bar.h"
#include <stdio.h>
long bar (long a, long b){
	long c = a;
	int d = 0;
	long e = 11*a;
	a = 16*b;
	long f = e + 2 * b - a + 1;
	long g = (long) d;
	while (c <= b){
		c = c+1;
		g = g+f;
	}
	return g;
}

int main(){

}