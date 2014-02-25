#include "c.h"

#include <a/a.h>
#include <b/b.h>

int c::get()
{
	a v1;
	b v2;
	return v1.get() + v2.get();
};
