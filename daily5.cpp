#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arra[5];

char code(int number){
	return  96 + number;
}
int combine(int a, int b) {
   int times = 1;
   while (times <= b)
      times *= 10;
   return a*times + b;
} 
void ways(int i,int j,char * arr){
	if (i==5){
		arr[j]='\0';
		cout<<arr<<"\n";
		return;
	}
	arr[j] = code(arra[i]);
	ways(i+1,j+1,arr);

	if (i<4 && combine(arra[i],arra[i+1])<=26){
		arr[j] =  code(combine(arra[i],arra[i+1]));
		ways(i+2,j+1,arr);
	} 


}
int main(){
	//cout << code(1);
	//int array[5];
	for(int i=0;i<5;i++)
		cin >> arra[i];
	char arr[5];
	ways(0,0,arr);
	//cout<<combine(9,4);


}