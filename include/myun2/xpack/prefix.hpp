#ifndef __github_com_myun2__xpack__prefix_HPP__
#define __github_com_myun2__xpack__prefix_HPP__

namespace myun2
{
	namespace xpack
	{
		template <typename T, unsigned int _BitLength, unsigned int _Prefix>
		struct prefix {
			typedef T type;
			static const T length = _BitLength;
			static const T value = _Prefix;
		};
	}
}

#endif//__github_com_myun2__xpack__prefix_HPP__
