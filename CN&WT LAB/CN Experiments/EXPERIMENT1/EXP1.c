
#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char c[10][10];
	printf("Enter the no of frames:");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
           printf("Frame %d:",i+1);
	   scanf("%s",&c[i]);
	}
	printf("\n");
	printf("AT THE SENDER\n");
      printf("Data as frames:\n");
       for(int i = 0; i < n; i++){
           printf("Frame %d:%ld%s\n",i+1,(strlen(c[i])+1),c[i]);
          
       }
       printf("\n");
         printf("Data transmitted:");
       for(int i = 0; i < n; i++){
           printf("%ld%s",(strlen(c[i])+1),c[i]);
       } 
       printf("\n");
       printf("\n");
      printf("AT THE RECEIVER\n");
        printf("The Data received\n");
	printf("\n");
	printf("The data after removing count char:");
	 for(int i = 0; i < n; i++){
           printf("%s",c[i]);
       }
	 printf("\n");
	 printf("\n");
	 printf("The data in frame form\n");
	for (int i=0;i<n;i++){
		printf("Frame %d:%s\n",i+1,c[i]);
	}
	return 0;
}