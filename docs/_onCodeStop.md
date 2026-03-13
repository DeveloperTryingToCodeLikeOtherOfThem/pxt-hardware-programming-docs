## _onCodeStop

``` ts
control._onCodeStop(args: any): void;
```
A shutdown hook used by the PXT runtime, similar to _onCodeStop.
It fires after the main program fiber finishes, right before MakeCode stops everything.
This function is **not** recommended to use.

## See also

[_onCodeStart](https://arcade.makecode.com/---docs?md=%23%23%20_onCodeStart%0A%0A%60%60%60%20ts%20%0Afunction%20control._onCodeStart(args%3A%20any)%3A%20void%0A%60%60%60%0AAn%20internal%20function%20that%20is%20**not**%20recommended%20to%20use.%0AThe%20function%20suppose%20to%20be%20a%20runtime%20hook%20that%20fires%20before%20the%20system%20sets%20up%20and%20runs.%20It%20is%20related%20%0Ato%20the%20PXT%20schedule%2C%20not%20the%20arcade%20game%20engine.%0A%0A%23%23%20See%20also%0A%5B_onCodeStop%5D(https%3A%2F%2Farcade.makecode.com%2F---docs%3Fmd%3D%2523%2523%2520_onCodeStop%250A%250A%2560%2560%2560%2520ts%250Acontrol._onCodeStop(args%253A%2520any)%253A%2520void%253B%250A%2560%2560%2560%250AA%2520shutdown%2520hook%2520used%2520by%2520the%2520PXT%2520runtime%252C%2520similar%2520to%2520_onCodeStop.%250AIt%2520fires%2520after%2520the%2520main%2520program%2520fiber%2520finishes%252C%2520right%2520before%2520MakeCode%2520stops%2520everything.%250AThis%2520function%2520is%2520**not**%2520recommended%2520to%2520use.%250A%250A%2523%2523%2520See%2520also%250A%250A%255B_onCodeStart%255D(https%253A%252F%252Fgithub.com%252FDeveloperTryingToCodeLikeOtherOfThem%252Fpxt-hardware-programming-docs%252Fblob%252Fmaster%252Fdocs%252F_onCodeStart.md)%250A))
