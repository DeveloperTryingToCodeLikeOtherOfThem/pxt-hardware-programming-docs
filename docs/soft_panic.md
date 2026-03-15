## Soft Panic

The internal way of calling `control.panic(code: number)`.

``` cpp
    void pxtrt::panic(int code) {
     soft_panic(code);
    }
```
