#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define mysize 100
#include<iterator>
#include<algorithm>
bool sortingDecending(int a,int b){
	return (a>b);
}
int main(){
	vector<int>vec;
	vec.push_back(100); // vec[0] = 100
	vec.push_back(1552); // vec[1] = 1552
	printf("%d\n",vec[0]);
	printf("%d\n",vec.size());
	for(int i = 0;i<vec.size();i++){
		cout << vec[i] << endl;
	}
	vector<int>vecx(3,0);
	// it means the size of vector is 3 and oll the elements are 0 here ! 
	vecx.push_back(122);
	for(int i = 1;i<5;i++){
		vecx.push_back(i);
	}
	
	vector<int>::iterator it;
	for(it = vecx.begin();it!=vecx.end();it++){
		cout << *it << "\t";
	}
	puts("");
	vector<double>vecxd;
	vector<double>::iterator it;
	sort(vec.begin(),vec.end()); // assending order to print!
	sort(vec.begin(),vec.end,sortingDecending);
	sort(vec.begin(),vec.begin()+3); // assiending order from vec begin to 3 elements 
	sort(vec.begin(),vec.begin()+3,sortingDecending); //  decending order from vec begin to 3 elements 
	
	

	return 0;
}
