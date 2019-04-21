#include <iostream>
using namespace ::std;

//Variabel Global
int a[]={4,3,2,6,7,1,9,8,5,0};
int angka=10;

//Bubble Sorting
void SortingDesc(){
int i,j,total;
	for  (i=0;i<angka;i++){
	for  (j=angka-1;j>i;j--){
	if   (a[j]>a[j-1]){
   		 total   = a[j];
   		 a[j]    = a[j-1];
   		 a[j-1]  = total;}
}
}
}
//Bubble Sorting
void SortingAscen (){
int i,j,total;
	for (i=0;i<angka;i++){
	for (j=angka;j>i;j--){
	if  (a[j]<a[j-1]){
   	 	total       = a[j];
    	a[j]    = a[j-1];
    	a[j-1]  = total;}
}
}
}
void show(){
int i;
for (i=0;i<angka;i++){
	cout<<a[i]<<" ";
}
}
int main(){
int data;
    cout<<"Program Shorting Array\n";
    cout<<"\nDATA ANGKA SEBELUM DIRUBAH\t:";

show();
    cout<<"\n------------------------------------------------";
    cout<<"\n1. SHORTING DESCENDING.";
    cout<<"\n2. SHORTING ASCENDING.";
    cout<<"\n------------------------------------------------";
    cout<<"\nMASUKAN YANG ANDA MAU\t:";
    cin>>data;
switch(data){
case 1:
SortingDesc();
    cout<<"\n ------------------------------------------------";
    cout<<"\nDATA YANG SUDAH DIRUBAH";
    cout<<"\n\nDESCENDING\t:";
    show();
    break;
case 2:
SortingAscen();
    cout<<"\n------------------------------------------------";
    cout<<"\nDATA YANG SUDAH DIRUBAH";
    cout<<"\n\nASCENDING\t:";
    show();
    break;
}
return 0;
}
