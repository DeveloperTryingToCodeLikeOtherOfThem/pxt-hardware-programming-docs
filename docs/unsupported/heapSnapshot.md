## heapSnapshot
<img width="1536" height="1024" alt="Copilot_20260420_200326" src="https://github.com/user-attachments/assets/efd7bce5-4181-46c5-809a-329a1a16ae1b" />
Record a heap snapshot to debug memory leaks.
The heap snap snapshot is is a complete serialized representation of the runtime’s heap at a specific moment in execution.

## Example
Get objects in the heap every 2 seconds.
``` ts
   game.onUpdateInterval(2000, () => {
       control.heapSnapshot()
   })
```
