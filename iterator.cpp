#include<numeric>
#include<iostream>
#include<iterator>
#include<iostream>

int main()
{
	double data[]={2.5,4.5,6.5,5.5,8.5};
	std::cout<<"the array contains";
	for(auto iter=std::rbegin(data); iter!= std::rend(data); ++iter)
	{
		std::cout<<*iter<<" ";
		auto total = std::accumulate(std::begin(data),std::end(data),0.0);	
	}
	std::cout << "Enter numeric values separated by spaces and enter Ctrl+Z to end:" << std::endl;
	std::cout << "\nThe sum of the values you entered is "
		<< std::accumulate(std::istream_iterator<double>(std::cin),
	std::istream_iterator<double>(), 0.0)
	<< std::endl;	
}