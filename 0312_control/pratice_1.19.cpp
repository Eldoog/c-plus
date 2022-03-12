#include <iostream>
int main()
{
	int u,v,count;
	std::cout<<"piz input two nums:";
	std::cin>>u>>v;
	for(int i=u;i<=v;i++)
	{
		std::cout<<i <<" ";
		count++;
		if(count%10==0)
			std::cout<<std::endl;
	}
}
