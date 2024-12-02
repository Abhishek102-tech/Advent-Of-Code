#include <stdio.h>
void main(){
    int k1[1000],k2[1000],temp;
    int i,j;
    printf("Enter the elements of 1 and 2\n");
    for(i=0;i,1000;i++){
        scanf("%d%d",&k1[i],&k2[i]);
    }
    for(i=0;i<1000;i++){
for(j=0;j<1000;j++){
if(k1[j]>k1[j+1]){
temp=k1[j];
k1[j]=k1[j+1];
k1[j+1]=temp;
}
}
}
for(i=0;i<1000;i++){
for(j=0;j<1000;j++){
if(k2[j]>k2[j+1]){
temp=k2[j];
k2[j]=k2[j+1];
k2[j+1]=temp;
}
}
}
printf("The formatted list is: \n");
for(i=0;i<1000;i++){
    printf("%d%d",k1[i],k2[i]);
}
}