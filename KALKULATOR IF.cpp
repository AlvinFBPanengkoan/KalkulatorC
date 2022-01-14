#include <iostream>   
using namespace std;	

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
	
	else if(operasi == '-'){
		cout<<"Hasilnya dalah "<<a-b;
	}
	
	else if(operasi == '*'){
		cout<<"Hasilnya adalah "<<a*b;
	}
	
	else if (operasi == '/'){
		cout<<"Hasilnya adalah "<<a/b;
	}
	return 0;
}
