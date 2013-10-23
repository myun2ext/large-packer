#include <stdio.h>
#include "myun2/xpack/xpack.hpp"

using namespace myun2::xpack;

typedef def<unsigned char, 1,3> g;

int main()
{
	printf("%d\n", g::fixed_count);
	printf("%d\n", g::mask);
	return 0;
}
