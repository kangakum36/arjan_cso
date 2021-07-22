#include "foo.h"
#include <stdio.h>
long foo (long a, long b){
	long c = 56 * a;
	long d = 3*b;
	long e = 31 * d;
	long f = c + e;
	long g = 95 * (b-a);
	return g+f;
}

int main(){

}