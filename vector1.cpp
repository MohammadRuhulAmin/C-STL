#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define mysize 100
#include<iterator>
#include<algorithm>
#include<map>
bool sortingDecending(int a,int b){
	return (a>b);
}
int main(){
	// vector datastracture
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
	vector<double>::iterator itx;
	sort(vec.begin(),vec.end()); // assending order to print!
	sort(vec.begin(),vec.end(),sortingDecending);
	sort(vec.begin(),vec.begin()+3); // assiending order from vec begin to 3 elements 
	sort(vec.begin(),vec.begin()+3,sortingDecending); //  decending order from vec begin to 3 elements 
	
	// list Data stracture :
	list<float>mylist;
	list<float>::iterator itf;
	mylist.push_back(11);
	mylist.push_front(15);
	mylist.push_back(77);
	mylist.push_front(112);
	for(itf = mylist.begin();itf!=mylist.end();itf++){
		cout << *itf << " ";
	}
	cout << endl;
	mylist.reverse();
	cout << mylist.size() << endl;
	mylist.clear(); // mylist will be clear!
	vec.clear(); // vector will be clear!
	list<int>myInfo(4,10); // range  of 4 will be value of 2 elements here ! 
	list<int>::iterator iti;
	for(iti = myInfo.begin();iti!=myInfo.end();iti++){
		cout <<  *iti << "\t";
	}
	cout << endl;
	// coping an array into list 
	int arr[5] = {1,2,3,4,5};
	list<int> carr(arr,arr+5);
	list<int>::iterator cit;
	for(cit = carr.begin();cit!=carr.end();cit++)cout << *cit << " ";
	cout << endl;
	vector<int>vecar(arr,arr+5);
	vector<int>::iterator vx;
	cout << "Printing Vector \t";
	for(vx= vecar.begin();vx!=vecar.end();vx++)cout << *vx << " ";
	cout << endl;
	
	// inserting a value before x value in list
	list<string>students;
	students.push_back("Ruhul Amin");
	students.push_back("Sakib Hasan");
	students.push_back("Sajid Hasan");
	students.push_front("Aynun Jariya Mariam Binte Ashraf");
	list<string>::iterator names;
	for(names = students.begin();names!=students.end();names++){
		cout << *names << "\t";
	}
	cout << endl;
	names = find(students.begin(),students.end(),"Ruhul Amin");
	students.insert(names,"Team Bravo");
	for(names = students.begin();names!=students.end();names++){
		cout << *names << "\t";
	}
	list<string>versity;
	versity.push_back("AIUB");
	versity.push_back("BUET");
	versity.push_back("SUST");
	versity.push_front("DU");
	list<string>::iterator var;
	cout << endl;
	for(var = versity.begin();var!=versity.end();var++)cout << *var << " ";
	cout << endl;
	var = find(versity.begin(),versity.end(),"DU");
	versity.erase(var);
	cout << endl;
	for(var = versity.begin();var!=versity.end();var++)cout << *var << " ";
	cout << endl;
	// list more functions 
	string contacts[5] = {"101","102","103","104","105"};
	list<string>mycontacts(contacts,contacts+5);
	mycontacts.pop_front();
	mycontacts.pop_back();
	list<string>:: iterator itc;
	cout << endl;
	for(itc = mycontacts.begin();itc!=mycontacts.end();itc++)cout << *itc << " ";
	cout << endl;
	
	//map data stracture (key, value) pair
	map<string,int>m;
	m["Ruhul"] = 12;
	m["Sakib"] = 23,
	m["Sajid"] = 32;
	m["nabil"] = 41;
	m.insert(make_pair("Rx",11));
	m.insert(make_pair("Tithy",22));
	map<string,int>::iterator itm;
	cout << "MAP Elements\n";
	for(itm = m.begin();itm!=m.end();itm++)cout << itm->first << " " << itm->second << endl;
	
	
	
	
	
	
	return 0;
}
