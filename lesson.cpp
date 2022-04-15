#include <iostream>
using namespace std;
struct calishanlar{
	char ad[20];
	int no;
	char calisma_tipi[5];
	union{
		double aylik;
		int saat;
	}bilgi;
}calishanlar[100];
int main(){
	string mystr;
	int n;
	for (n=0; n<100; n++)
	{
		cout<<"ad:"; getline(cin,mystr);
		cout<<"calisma_tipi:"; getline(cin,mystr);
		cout<<"aylik saat:"; getline(cin,mystr);
	}
}
