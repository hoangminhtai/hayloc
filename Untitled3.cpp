#include<iostream>
using namespace std;

int main()
{
	float tiengui, laisuat, tienkivong;
	int nam=0;
	cout<<"Nhap so tien ki vong: "<<endl;
	cin>>tienkivong;
	cout<<"Nhap so tien ban dau: "<<endl;
	cin>>tiengui;
	cout<<"Nhap lai suat(%) theo nam: "<<endl;
	cin>>laisuat;
	
	while(tiengui<tienkivong)
	{
		tiengui=(tiengui*laisuat/100)+tiengui;
		nam++;
	}
	cout<<nam;
	return 0;
}
