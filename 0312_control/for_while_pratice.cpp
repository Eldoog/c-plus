#include <iostream> 
int main()
{
	int sum=0;
	std::cout<<"count sum of 50~100"<<std::endl;
	for(int i=50;i<=100;++i)
		sum+=i;
	std::cout<<"this ans from <for>: "<<sum<<std::endl;
	sum=0;
	int i=50;
	while(i!=101)
	{
		sum+=i;
		++i;
	}
	std::cout<<"this ans from <while>: "<<sum<<std::endl;
	std::cout<<"----------------------------"<<std::endl;
	std::cout<<"print 10 to 1"<<std::endl;
	std::cout<<"this ans from <for>: ";
	for(int i=10;i>=0;i--)
		std::cout<<i<<" ";
	std::cout<<std::endl; 
	std::cout<<"this ans from <while>: ";
	i=10;
	while(i--!=-1)
		std::cout<<i+1<<" ";
	return 0; 
}
