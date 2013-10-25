#ifndef __github_com_myun2__xpack__prefix_HPP__
#define __github_com_myun2__xpack__prefix_HPP__

namespace myun2
{
	namespace xpack
	{
		template <typename T, unsigned int _BitLength, unsigned int _PrefixValue>
		struct prefix {
		private:
			static const unsigned int bits_of_type = sizeof(T) * 8;
			static const unsigned int pad_bits = bits_of_type - _BitLength;
			static T mask() { return (~T(0)) << pad_bits; }
			static T mask(const T& v) { return mask & v; }
		public:
			typedef T type;
			static const T length = _BitLength;
			static const T prefix_value = _PrefixValue;

			static bool is_match(const T& value) { return mask(value) == prefix_value; }
		};
	}
}

#endif//__github_com_myun2__xpack__prefix_HPP__
