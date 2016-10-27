#include <iostream>
#include <math.h>
using namespace std;

int MyPow(int Num,int N);
int main(void)
{
        int Input=0,Result=0;
        cout << "Please enter a new number:" << endl;
        cin >> Input;
        Result=MyPow(Input,3);
        cout << "Pow(Input,3) is equal to :" << Result << endl;
        return 0;
}
int MyPow(int Num,int N)
{
	int i=0,Res=1;
	for(i=0;i<N;i++)
	{
		Res*=Num;
	}
	return Res;
}
