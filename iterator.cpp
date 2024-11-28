#include<numeric>
#include<iostream>
#include<iterator>
#include<iostream>
#include<memory>

int main()
{
	double data[]={2.5,4.5,6.5,5.5,8.5};
	//std::cout<<"the array contains";
	//for(auto iter=std::rbegin(data); iter!= std::rend(data); ++iter)
	//{
	//	std::cout<<*iter<<" ";
	//	auto total = std::accumulate(std::begin(data),std::end(data),0.0);	
	//}
	//std::cout << "Enter numeric values separated by spaces and enter Ctrl+Z to end:" << std::endl;
	//std::cout << "\nThe sum of the values you entered is "
	//	<< std::accumulate(std::istream_iterator<double>(std::cin),
	//std::istream_iterator<double>(), 0.0)
	//<< std::endl;	

	auto iter = std::begin(data);
	std::advance(iter,3);
	std::cout<<*iter<<std::endl;
	std::cout<<std::distance(std::begin(data),std::end(data))<<std::endl;

	iter=std::begin(data);
	auto forth=std::next(iter,3);
	std::cout<<*forth<<std::endl;

	size_t len{10};
	//std::unique_ptr<int[]> pnumers {new int[len]};
	auto pnumers =std::make_unique<int[]>(len);
	for(size_t i=0; i< len; i++)
		pnumers[i]=i*i;
	
	auto pn1=std::make_unique<std::string>("jack");
    auto pn2=std::make_unique<std::string>("jill");
    
    pn1.swap(pn2);   //swap
    
    std::cout<<*pn1;


	auto up_name = std::make_unique<std::string>("Algernon");
	std::unique_ptr<std::string> up_new{up_name.release()};
	if(up_new) // true if not nullptr
	std::cout << "The name is " << *up_new << std::endl;
	if(!up_name) // true if nullptr
	std::cout << "The unique pointer is nullptr" << std::endl;

	std::shared_ptr<double> pdata {new double{999.0}};
	std::shared_ptr<double> pdata2;

	pdata2=pdata;  //copy 
	std::cout<<*pdata2<<" \n";

	auto pvalue =pdata.get();
	std::cout<<*pvalue<<" ";
}