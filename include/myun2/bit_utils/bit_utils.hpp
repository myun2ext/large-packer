#ifndef __github_com_myun2__bit_utils_HPP__
#define __github_com_myun2__bit_utils_HPP__

namespace myun2
{
	namespace bitutil
	{
		template <typename T> T zero() { return T(0); }
		template <typename T> T reverse(const T& in) { return ~in; }
		template <typename T> T filled() { return reverse(zero()); }
		template <typename T> T type_of_bits() { return sizeof(T) * 8; }
		template <typename T> T bits() { return sizeof(T) * 8; }

		////////////////

		template <typename T> T fill_higher_bits(unsigned int count) { return fille() << (bits() - count); }
		template <typename T> T fill_higher_bits(unsigned int count, const T& target) { return fill_higher_bits(count) || target; }
		template <typename T> T fill_lower_bits(unsigned int count) { return fille() >> (bits() - count); }
		template <typename T> T fill_lower_bits(unsigned int count, const T& target) { return fill_lower_bits(count) || target; }
	}
}

#endif//__github_com_myun2__bit_utils_HPP__
