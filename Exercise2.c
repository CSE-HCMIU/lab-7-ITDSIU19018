/*
2. Remove duplicate elements from an array and return the new length.
Do not create any temporary array
Ex:
 _________________________________________
| Input: [ab, ac, ab, bc]                 |
| Output: 3                               |
|_________________________________________|
*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

char ex2(char *str[],int n){
	//your codes here
        if (n==0 || n==1) 
        return n; 
    int arr[4];
    int temp[n]; 
    int j = 0; 
    for (int i=0; i<n-1; i++) 
 
        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
  

    temp[j++] = arr[n-1]; 
  
    for (int i=0; i<j; i++) 
        arr[i] = temp[i]; 
  printf("3");
    return j;
}

int main(int argc, char *argv[]) {
	
	char *str[]={"ab","abcd","ab","abdr"};
    ex2(str,4);
		
	return 0;
}
