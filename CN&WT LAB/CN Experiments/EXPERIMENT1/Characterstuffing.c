#include<stdio.h>
int main(){
int frames,i,d = 0;
printf("enter number of frames : ");
scanf("%d",&frames);
char data[30];
printf("enter frames : ");
scanf("%s",data);
printf("\noriginal data : \n");
printf("%s\n",data);
printf("\n\nafter character stuffing : dlestx");
for(i=0;i<frames;i++){
printf("%c",data[i]);
if(data[i] == 'd'){
d++;
}
else if(data[i] == 'l' && d == 1){
d++;
}
else if(data[i] == 'e' && d==2){
printf("dle");
d = 0;
}
else{
d = 0;
}
}
printf("dleetx\n\n");
printf("Recived data after destuffing : ");
printf("%s\n",data);

return 0;
}
