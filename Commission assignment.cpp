#include<iostream>
#include<string>
using namespace std;
int main(){
	//Braison Wabwire
	//EB3/61597/22
	string name;
	float salesvolume,commission;
	cout<<"Enter your name" <<endl;
	getline(cin,name);
	cout<<"Enter your sales volume" <<endl;
	cin>>salesvolume;
	if(salesvolume>=5000){
		commission=(15*salesvolume)/100;
		cout<<"your name is " <<name <<endl;
		cout<<"your commission is:" <<commission <<endl;
	}
	else if(salesvolume>=4000||salesvolume<=4999){
		commission=(12*salesvolume)/100;
		cout<<"your name is " <<name <<endl;
		cout<<"your commission is:" <<commission <<endl;
	}
	else if(salesvolume>=3000||salesvolume<=3999){
		commission=(9*salesvolume)/100;
		cout<<"your name is " <<name <<endl;
		cout<<"your commission is:" <<commission <<endl;
	}
	else if(salesvolume>=2000||salesvolume<=2999){
		commission=(6*salesvolume)/100;
		cout<<"your name is " <<name <<endl;
		cout<<"your commission is:" <<commission <<endl;
	}
	else if(salesvolume<2000){
		commission=(3*salesvolume)/100;
		cout<<"your name is " <<name <<endl;
		cout<<"your commission is:" <<commission <<endl;
	}
	else{
		cout<<"Enter correct sales value" <<endl;
	}
	return 0;
}