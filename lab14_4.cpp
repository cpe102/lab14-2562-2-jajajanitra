#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b, int &c, int &d)
{
	int y,z; 
	y == rand()%100+1;
	int temp1,temp2,temp3,temp4;
	for(int i = 0;i<y;i++)
	{
		z = rand()%4+1;
		switch(z)
		{
			case 1:
			temp1 = a;
			a = b;
			b = temp1;
			case 2:
			temp2 = c;
			c = d;
			d = temp2;
			case 3:
			temp3 = b;
			b = c;
			c = temp3;
			case 4:
			temp4 = d;
			d = a;
			a =temp4;
		}
		
	}
	
}
