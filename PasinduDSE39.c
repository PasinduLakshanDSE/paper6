#include<stdio.h>
int a=5,b=2;
void display(int x){
	printf("%d",x);
}
int calsum(int x,int y){
	return x+y;
}
void main(){
	display(calsum(a,b));
}