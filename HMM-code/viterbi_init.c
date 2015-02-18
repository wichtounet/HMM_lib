#include "math.h"
#include "viterbi_init.h"
#include "../configuration/configuration.h"

void viterbi_init(float *FI, float *A_Vect, float *LogPdf, int N, int T){
	// initiliazation of viterbi
	int n;
	for (n = 1; n < (N - 1); n++)
		if (A_Vect[n*N] == 0)
			FI[n] = LogPdf[(n - 1)*T] + min_val;
		else
			FI[n] = LogPdf[(n - 1)*T] + log(A_Vect[n*N]);
	
	return;
}