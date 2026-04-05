## gc

``` sig
   control.gc();
```

Forces the garbage collector and [dump](https://github.com/DeveloperTryingToCodeLikeOtherOfThem/pxt-hardware-programming-docs/master/docs/dump.md) basic information about the heap.

## Example
Let us say you want to collect information about the heap when the score is 100.
``` ts
   let score = 0;
   info.setScore(score);

   game.onUpdate(() => {
     if (score === 100) {
        control.gc();
     }
   })
```
