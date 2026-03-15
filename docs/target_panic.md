## Target Panic
 
`pxt::target_panic(code: number)` is **not** a regular function to be used. Instead, you are able to use it in the
C, C++, and the runtime JavaScript layer.

Here is an example of the function's implementation.

``` cpp
extern "C" void target_panic(int code) {
    DMESG("PANIC %d", code);
    exit(1);
}
```
