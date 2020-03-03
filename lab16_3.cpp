#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(int x){
 vector<int> z(x);
for(int i=0;i<x;i++){
z[i]=rand()%10;
}
return z;
}
void showVector(vector<int> x){
for(int j=0;j<x.size();j++)cout<<x[j]<<" ";
}
int dotProduct(vector<int> x,vector<int> y){
int z;
for(int i=0;i<x.size();i++){
	z+=x[i]*y[i];
}return z;
} 
