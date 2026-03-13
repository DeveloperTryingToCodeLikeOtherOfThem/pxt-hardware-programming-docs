## _onCodeStop

``` ts
control._onCodeStop(args: any): void;
```
A shutdown hook used by the PXT runtime, similar to _onCodeStop.
It fires after the main program fiber finishes, right before MakeCode stops everything.
This function is **not** recommended to use.

## See also

[_onCodeStart](https://arcade.makecode.com/---docs?md=%23%23%20_onCodeStart%0A%0A%60%60%60%20ts%20%0Afunction%20control._onCodeStart(args%3A%20any)%3A%20void%0A%60%60%60%0AAn%20internal%20function%20that%20is%20**not**%20recommended%20to%20use.%0AThe%20function%20suppose%20to%20be%20a%20runtime%20hook%20that%20fires%20before%20the%20system%20sets%20up%20and%20runs.%20It%20is%20related%20%0Ato%20the%20PXT%20schedule%2C%20not%20the%20arcade%20game%20engine.%0A%0A%23%23%20See%20also%0A%5B_onCodeStop%5D(https%3A%2F%2Fgithub.com%2FDeveloperTryingToCodeLikeOtherOfThem%2Fpxt-hardware-programming-docs%2Fblob%2Fmaster%2Fdocs%2F_onCodeStop.md))
