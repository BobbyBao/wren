#ifndef wren_opt_random_h
#define wren_opt_random_h

#include "wren_common.h"
#include "wren.h"

#if WREN_OPT_RANDOM

WREN_API const char* wrenRandomSource();
WrenForeignClassMethods wrenRandomBindForeignClass(WrenVM* vm,
                                                   const char* module,
                                                   const char* className);
WrenForeignMethodFn wrenRandomBindForeignMethod(WrenVM* vm,
                                                const char* className,
                                                bool isStatic,
                                                const char* signature);

#endif

#endif
