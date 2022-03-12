#include <iostream>
int main()
{
	int val,count;
	while(std::cin >> val)
	{
		if(val<0)
			count++;
	}
	std::cout<<"the number of  less than 0 is "<< count <<std::endl;
}
