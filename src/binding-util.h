#ifndef BINDINGUTIL_H
#define BINDINGUTIL_H

#include "mruby.h"
#include "mruby/data.h"
#include "mruby/variable.h"
#include "mruby/class.h"

#include <stdio.h>

#define GET_OBJ_TYPE(obj) \
mrb_data_type obj##Type; \
obj##Type.struct_name = #obj; \
obj##Type.dfree = freeInstance<obj>;

template<class C>
inline C *
getPrivateData(mrb_state *, mrb_value self)
{
	C *c = static_cast<C*>(DATA_PTR(self));

	return c;
}

template<typename T>
inline T *
getPrivateDataCheck(mrb_state *mrb, mrb_value obj, const mrb_data_type &type)
{
	void *ptr = mrb_check_datatype(mrb, obj, &type);
	return static_cast<T*>(ptr);
}

inline void
setPrivateData(mrb_value self, void *p, const mrb_data_type &type)
{
	DATA_PTR(self) = p;
	DATA_TYPE(self) = &type;
}

template<typename T>
void
freeInstance(mrb_state *, void *instance)
{
	delete static_cast<T*>(instance);
}

#endif // BINDINGUTIL_H
