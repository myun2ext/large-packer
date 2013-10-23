#ifndef __github_com_myun2__xpack__def_HPP__
#define __github_com_myun2__xpack__def_HPP__

namespace myun2
{
	namespace xpack
	{
		template <typename T, T _Mask, T _FixedCount>
		struct def {
			typedef T type;
			static const T mask = _Mask;
			static const T fixed_count = _FixedCount;
		};
	}
}

#endif//__github_com_myun2__xpack__def_HPP__
