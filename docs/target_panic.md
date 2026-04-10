## Target Panic
 
The `pxt::target_panic(code: number)` panic is **not** a regular function to be used. Instead, it is able to be used in the
C, C++, and the runtime TypeScript layer.

## Implementation
In the C++ runtime, the target_panic looks like something like this.
``` cpp
extern "C" void target_panic(int code) {
    DMESG("PANIC %d", code);
    exit(1); // EXIT: this a builtin method in the C++ standard libraries, unrelated to MakeCode specific runtime functions
}
```

The function will be printed in the problems panel because it is calling
the diagnosed message function.
