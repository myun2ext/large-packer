#ifndef __github_com_myun2__xpack__def_HPP__
#define __github_com_myun2__xpack__def_HPP__

namespace myun2
{
	namespace xpack
	{
		template <typename _PrefixType, _PrefixType _Prefix, typename _ValueType>
		struct def {
			typedef _PrefixType prefix_type;
			static const _PrefixType prefix = _Prefix;
			typedef _ValueType value_type;
		};
	}
}

#endif//__github_com_myun2__xpack__def_HPP__
