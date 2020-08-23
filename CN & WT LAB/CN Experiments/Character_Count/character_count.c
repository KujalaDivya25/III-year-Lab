#include<stdio.h>
#include <string.h>

int main() {
	int n;
	printf("Enter no of Frames:");
	scanf("%d",&n);
	int i,j,k,l;
	char result[100] = { 0x0 };
	char result1[100] = { 0x0 };
	char charlengths[100][100] = {};
	char s[100][100] = {};
	for(i=0;i<n;i++) {
	     scanf("%s", s[i]);
	}
	printf("AT THE SENDER\n");
	for(i=0;i<n;i++) {
	     //printf("Frame[%d]=%s\n",i+1,s[i]);
	     char str[100];
	     int l = strlen(s[i]) + 1;
	     sprintf(str, "%d", l);
	     strcpy(charlengths[i],strcat(str,s[i]));
	     printf("Frame%d:%s\n",i+1,charlengths[i]);
	}
	for (i = 0; i < n; i++) {
		strcat(result, charlengths[i]);
	}
	printf("Data transmission:%s\n",result);
	printf("AT THE RECEIVER\n");
	printf("The data received\n");
	for(i=0;i<n;i++) {
		strcat(result1, s[i]);
		strcat(result1," ");
	}
	printf("The data after removing count char: %s\n",result1);
	printf("The data in frame form\n");
	for(i=0;i<n;i++) {
		printf("Frame%d: %s\n",i+1,s[i]);
	}
	return 0;
}
