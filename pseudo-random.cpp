#include <iostream>
#include <string> 

using namespace std;
unsigned int calculate( unsigned int number,unsigned int selected){
	unsigned int length=to_string(number).length();
	unsigned int med=(length-1)/2;
	
	string tmp="";
	string num=to_string(number);
	const char *array=num.c_str();
	
	for(int i=med;i<med+selected;i++){
		tmp+=array[i];	
	}
	
	
	int show=atoi(tmp.c_str());
	cout<<show<<endl;
	return show;
}
void until(unsigned int time,unsigned int number,unsigned int selected){
	unsigned int tmpNumb;
	for(int i=0;i<time;i++){
			tmpNumb=calculate(number,selected);
			number=tmpNumb*tmpNumb;
	}
}
main()
{
	unsigned int time,num,dig;
	cout<<"Input time:";cin>>time;
	cout<<"Input num:";cin>>num;
	cout<<"Selected digit num:";cin>>dig;
	unsigned int med=(to_string(num).length()-1)/2;
	
	if(to_string(num).length()<dig+med){
		cout<<"error"<<endl;
		exit(EXIT_FAILURE);		
	}
	until(time,num,dig);
	return 0;
}
