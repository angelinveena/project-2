/*C++ program to read time in HH:MM:SS format and convert into total seconds.*/

#include <iostream>
#include <iomanip>

using namespace std;

class time
{
	private:
		int seconds;
		int hh,mm,ss;
	public:
		void getTime(void);
		void convertIntoSeconds(void);
		void displayTime(void);
};

void time::getTime(void)
{
	cout<<"01:01:05" <<endl;
	cout<<"01";
	cin>>hh;
	cout<<"01";
	cin>>mm;
	cout<<"05";
	cin>>ss;
}

void time::convertIntoSeconds(void)
{
	seconds = hh*3600+mm*60+ss;
}

void time::displayTime(void)
{
	cout<<"The time is="<<setw(2)<<setfill('0')<<hh<<":"
	                    <<setw(2)<<setfill('0')<<mm<<":"
	                    <<setw(2)<<setfill('0')<<ss<<endl;
	cout<<"Time in total seconds:"<<seconds;
}

int main()
{
	time t; //creating objects

	T.getTime();
	T.convertIntoSeconds();
	T.displayTime();

    return 0;
}
