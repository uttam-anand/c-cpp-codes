#include <stdio.h> 
#include <string.h> 
#define txt_lm 100
#define ptrn_lm 10

void search(char* pat, char* txt) 
{ 
	int M = strlen(pat); 
	int N = strlen(txt); 


	for (int i = 0; i <= N - M; i++) { 
		int j; 

	
		for (j = 0; j < M; j++) 
			if (txt[i + j] != pat[j]) 
				break; 

		if (j == M) 
			printf("Pattern found at index %d \n", i); 
	} 
} 

int main() 
{ 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	char txt[txt_lm] ; 
	char pat[ptrn_lm] ; 
	scanf("%[^\n]%*c",txt);
	fflush(stdin);
	scanf("%[^\n]%*c",pat);
	search(pat, txt); 
	return 0; 
} 
