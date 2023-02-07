#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d)
{
	int money[4] = {a,b,c,d};
	int s1 = 0,s2 = 0,s3 = 0,s4 = 0;
	s1 = rand()%4;
    a = money[s1];
	while(s2 == s1){
		s2 = rand()%4;
	}
	b = money[s2];
	while(s3 == s1 || s3 == s2){
		s3 = rand()%4;
	}
	c = money[s3];
    while(s4 == s1 || s4 == s2 || s4 == s3){
		s4 = rand()%4;
	}
	d = money[s4];
}
