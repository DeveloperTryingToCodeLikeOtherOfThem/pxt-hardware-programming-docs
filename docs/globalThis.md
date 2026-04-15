`globalThis` is a global property containing the global this value, which is usually similar to the global object.

MakeCode unsupports the globalThis property though. This is because the runtime's virtual table is static, 

not dynamic, which affects this and a lot of other builtin global properties, methods, etc. used in **typescript** that

It is very similar to think of as pxsim. This is because pxsim is a global module for
PXT.


are **not** supported.

Do **not** be confused because the filter for showing
it is a module, which does **not** exist.
Because of this, it is the monaco editor and the JavaScript compiler doing that.

Here is an image of the conflict that happened.

<img width="501" height="113" alt="image" src="https://github.com/user-attachments/assets/d92a29c0-23e5-4705-94e6-6f4306521181" />
