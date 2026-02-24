## internal property components

There are internal property compenents which are made by the MakeCode engine's runtime. An internal property means
something that is private, not avaliable in the public APIs you can see. There are some properties where you can 
access even if they are private by looking at a file, and then see what properties exist there. The properties
that are truly private have a private modifier. Another one is the protected modifier. 

You can still access protected properites by defining a class and extend the class that has the variables you want to keep. 
Then finally, use the this keyword to access the property. Also, this is the same for accessing methods. 

You might also sometimes see some properties that are public but you cannot find them. 
This is because there is an underscore preventing anyone to see it in the option menu. The
best wais to find the variable is by looking for the file that has the implementation of it, 
and then write the property down in your script editor to access it. The other option is to paste the 
property directly into the code, in case if you are unsure if you spelled it right.
