# include <iostream>
# include <stdio.h>

class idiot
{
public:
	double IQ, EQ, Weight, Height;
	double getBMI();
	void checkIQ(double IQ);
	void checkEQ(double EQ);	
};

double idiot::getBMI()
{
	return Weight/Height*100;
}

void idiot::checkIQ(double IQ)
{
	cout<<"%d",IQ<<endl;
}

void idiot::checkEQ(double EQ)
{
	cout<<"%d",EQ<<endl;
} 

int main()
{
	idiot me;
	idiot you;
	return 0;
}
