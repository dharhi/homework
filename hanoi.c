#include<stdio.h>
int main()
{
	void han(int n,char one,char two,char three);
	int n;
	
	scanf("%d",&n);
	han(n,'a','b','c');
	return 0;
}

void han(int n,char one,char two,char three)
{
	void forward(char p,char q);
	
	if(n==1)
	   forward(one,three);
     else{
     	han(n-1,one,three,two);
     	forward(one,three);
     	han(n-1,two,one,three);
     }
}

void forward(char p,char q)
{
	printf("%c-->%c\n",p,q);
}
