## benchmark
Measure how long a piece of code takes to run.
The elapsed time is reported in microseconds, allowing you to compare the performance of different algorithms or operations.

Benchmarks are useful when evaluating how efficiently code executes or when comparing two different implementations of the same logic.

## Parameters
f: a handler function containing the code to measure.

## Returns
the execution time of the handler, reported in microseconds.

## Example
``` ts
control.benchmark(() => {
    let x = 0
    for (let i = 0; i < 10000; i++) {
        x += i
    }
})
```
