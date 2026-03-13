## _onCodeStop

``` ts
control._onCodeStop(args: any): void;
```
A shutdown hook used by the PXT runtime, similar to _onCodeStop.
It fires after the main program fiber finishes, right before MakeCode stops everything.
This function is **not** recommended to use.

## See also

[_onCodeStart](https://github.com/DeveloperTryingToCodeLikeOtherOfThem/pxt-hardware-programming-docs/blob/master/docs/_onCodeStart.md)
