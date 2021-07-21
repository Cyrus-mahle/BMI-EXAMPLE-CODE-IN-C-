#include<iostream>
using namespace std;

int main(){
	
double BMI;
double weight,height;



cout<<"Enter height "<<endl;
cin>>height;
cout<<"Enter weight "<<endl;
cin>>weight;

BMI =height*height/weight;

if(BMI>30){
	
	cout<<" Abnormal Body Mass Index"<<endl;	
}
else if(BMI>=18.5&&BMI<=25){
	
	cout<<"Underweight"<<endl;
}
else if(BMI>=25&&BMI<=30){
	
	cout<<" Normal Body Mass Index"<<endl;
}
else{
	cout<<"Consult a Doctor"<<endl;
}
	
	return 0;
	
}
