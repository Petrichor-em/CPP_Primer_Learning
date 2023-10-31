#include "Chapter6.h"

int fact(int n){
	int retValue = 1;
	while(n>1){
		retValue *= n--;
	}
	return retValue;
}

int abs(int n){
	if(n >= 0){
		return n;
	}else{
		return -n;
	}
}
