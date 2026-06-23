#include "invoke.h"

// devkitPPC / GameCube portability stub (libultragx).
//
// The original implementation dispatches by calling a no-prototype function
// pointer `uintptr_t (*)()` with a varying number of arguments, which does not
// compile under devkitPPC's strict C prototypes. This native-invoke feature is
// only reachable when a shader template calls a registered native C function; a
// GX/TEV backend processes no shader templates, so the path is dead there and
// this stub is safe.
uintptr_t invoke(uintptr_t (*native_code)(), uintptr_t* args, size_t length) {
    (void)native_code;
    (void)args;
    (void)length;
    return (uintptr_t)0;
}
