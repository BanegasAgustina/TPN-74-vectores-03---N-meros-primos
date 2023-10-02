#include <bits/stdc++.h>
using namespace std;
vector<int> Numeroprimo(vector<int>vec , int n);
bool EsPrimo(int n);
void MostrarVector(vector <int> A);
int main(){
	int n;
	vector<int> A;
	cout<<"ingrese un numero entero :  ";
	cin>>n;
	
	A=EsPrimo(A,n);
    MostrarVector(A);
return 0;
}

bool EsPrimo(int n){ 
 bool flag=false;
 if(n%n==0 && n%1==0){
 	flag=true;
 }
 return flag;
 }
 
vector<int> Numeroprimo(vector<int>vec,int n){
	int i;
	for(i=2;i<=n;i++)
	{
		if(EsPrimo(i))
		{
			vec.push_back(i);
		}
	}
	
	return vec;
	
}
void MostrarVector(vector <int> A)
{
	int i;
	
	for( i=0; i<A.size(); i++ )
	{
	
	cout<<A[i]<<endl;
	}
		cout<<endl;
}

