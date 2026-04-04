## Throw function

Throws a value written in the problems pane, similar to the throw syntax. 

The difference is that the function is the core of the syntax in the MakeCode environment.

Here is the shim for getting the function.

`//% shim=pxt::throwValue` 

Comments from the MakeCode Team.
``` ts
// this is equivalent to JS `throw v`; it will leave
// the current function(s), all the way until the nearest try block and
// ignore all destructors (think longjmp())
```
