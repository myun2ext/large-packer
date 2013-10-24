#ifndef __github_com_myun2__bit_utils_HPP__
#define __github_com_myun2__bit_utils_HPP__

namespace myun2
{
	namespace bitutil
	{
		template <typename T> T zero() { return T(0); }
		template <typename T> T reverse(const T& in) { return ~in; }
		template <typename T> T filled() { return reverse(zero()); }
	}
}

#endif//__github_com_myun2__bit_utils_HPP__
