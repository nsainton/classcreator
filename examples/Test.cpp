#include "Test.h"
#include <iostream>

Test::Test(){
	std::clog << "Test Default Constructor Called" << std::endl;
}

Test::Test( const Test & other ){
	std::clog << "Test Copy Constructor Called" << std::endl;
	(void)other;
}

Test&	Test::operator=( const Test & other ){
	std::clog << "Test Copy Assignment Operator Called" << std::endl;
	(void)other;
	return (*this);
}

Test::~Test(){
	std::clog << "Test Destructor Called" << std::endl;
}
