#ifndef __github_com_myun2__xpack__prefix_HPP__
#define __github_com_myun2__xpack__prefix_HPP__

namespace myun2
{
	namespace xpack
	{
		template <unsigned int _BitLength, unsigned int _Prefix>
		struct prefix {
			static const unsigned int length = _BitLength;
			static const unsigned int value = _Prefix;
		};
	}
}

#endif//__github_com_myun2__xpack__prefix_HPP__
