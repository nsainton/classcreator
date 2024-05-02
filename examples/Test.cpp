#include "Test.h"

Test::Test(){
}

Test::Test( const Test & other ){
	(void)other;
}

Test&	Test::operator=( const Test & other ){
	(void)other;
	return (*this);
}

Test::~Test(){
}
