#include<iostream>
using namespace std;
// BRAISON WABWIRE 
//EB3/61597/22
int main(){
	float height,weight,bmi;
	cout<<"Enter your height"<<endl;
	cin>>height;
	cout<<"Enter your weight" <<endl;
	cin>>weight;
	bmi = weight/(height*height);
	if(bmi<20){
		cout<<"Lower than normal weight" <<endl;
	}
	else if(bmi>=20||bmi<=25){
		cout<<"Normal weight" <<endl;
	}
	else if(bmi>=26||bmi<=30){
		cout<<"Overweight" <<endl;
	}
	else if(bmi>=31||bmi<=40){
		cout<<"Obese" <<endl;
	}
	else if(bmi>40){
		cout<<"Extreme obese" <<endl;
	}
	else{
		cout<<"Invalid Body mass value" <<endl;
	}
	return 0;
}