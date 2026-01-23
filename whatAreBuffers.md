# Buffers in MakeCode Arcade
 
 In Microsoft MakeCode Arcade, the Buffer namespace is a core namespace designed for storing data precisely.  

 

 

    

 

The Buffer.create(size: number) method is designed to store bytes in a fixed size.   

The Buffer.setNumber(format: NumberFormat, offset: number, value: number) method is designed to write a number in a specified format in the buffer 

The Buffer.getNumber(format: NumberFormat, offset: number) method is designed to read a number in a specified format in the buffer 

The Buffer.setUint8(offset: number, value: number) method is designed to write an unsigned number in a particular location in the buffer 

The Buffer.getUint8(offset: number) method is designed to read an unsigned number in a particular location in the buffer 

The Buffer.write(dstOffset: number, src: Buffer) method is designed to write contents of the buffer merged into the current buffer (the buffer your using) 

The Buffer.isReadOnly() method is designed to read if the buffer cannot be modified, otherwise it returns false 
