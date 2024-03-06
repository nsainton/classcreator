#ifndef __TEST_H__
# define __TEST_H__

class	Test{
	public:
		Test();
		Test( const Test & );
		Test& operator=( const Test & );
		virtual ~Test();
};
#endif
