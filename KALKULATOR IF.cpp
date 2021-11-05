#include <iostream>    //Pemilik program Alvin F B Panengkoan
using namespace std;	//Stambuk F55120057

int main(){
	
	float a,b,c;
	char operasi;
	
	cout<<"MASUKAN NILAI PERTAMA : ";
	cin>>a;
	
	cout<<"MASUKAN OPERASI(+,-,*,/) : ";
	cin>>operasi;
	
	cout<<"MASUKAN NILAI KEDUA : ";
	cin>>b;
	
	if(operasi == '+'){
		cout<<"Hasilnya adalah "<<a+b;
	}
	
	if(operasi == '-'){
		cout<<"Hasilnya dalah "<<a-b;
	}
	
	if(operasi == '*'){
		cout<<"Hasilnya adalah "<<a*b;
	}
	
	if (operasi == '/'){
		cout<<"Hasilnya adalah "<<a/b;
	}
	return 0;
}
