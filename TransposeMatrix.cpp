#include<iostream>
using namespace std;
class matrix{
	int i, j, arr[3][3], res[3][3];
	public:
		void input()
		{
			cout<<"Enter array elements:\n";
			for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					cin>>arr[i][j];
					
				}
			}
			cout<<"Before transpose:\n";
			for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
				cout<<arr[i][j]<<"  ";	
				}
				cout<<endl;
			}
		}
		void calculation()
		{
		for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					res[i][j]=arr[j][i];
				}
			}
		}
		void output()
		{
			cout<<"After transpose:\n";
			for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					cout<<res[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		
};
int main()
{
	matrix obj;
	obj.input();
	obj.calculation();
	obj.output();
	return 0;
}
