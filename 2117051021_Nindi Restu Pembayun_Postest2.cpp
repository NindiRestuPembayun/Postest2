#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, a, b, un;
	cout << "barisan yang dicari = ";
	cin>> n;
	cout<< "suku awal = ";
	cin>> a;
	cout<< "beda tiap bilangan = ";
	cin>> b;
	
	
	un= a+(n-1)*b;
	cout<< "jumlah bilangan hingga suku ke "<<n<<" dari barisan aritmatika adalah = "<<un;
	return 0;
}
