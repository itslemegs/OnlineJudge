#include <stdio.h>
void merge(int A[], int B[], int* a[], int* b[]){
	int sizeA = 0,sizeB = 0;
	while(a[sizeA]!= NULL)
		sizeA++;
	sizeA++;
	while(b[sizeB]!= NULL)
		sizeB++;
	sizeB++;
	int i = 0,j = 0;
	int now = 0;
	while(i < sizeA && j < sizeB){
		if(A[i] < B[j]){
			if(now == 1){
				*a = &A[i];
				a++;
			}
			else if (now == 2){
				*b = &A[i];
				b++;
			}
			now = 1;
			i++;
		}
		else {
			if(now == 1){
				*a = &B[j];
				a++;
			}
			else if(now == 2){
				*b = &B[j];
				b++;
			}
			now = 2;
			j++;
		}

	}
	if (i == sizeA){
			*a = &B[j];
			j++;
			for(;j < sizeB ;j ++){
				*b = &B[j];
				b++;
			}
	}
	else if (j == sizeB){
			*b = &A[i];
			i++;
			for(;i < sizeA ;i ++){
				*a = &A[i];
				a++;
			}
	}

}
