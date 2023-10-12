# rflag C library

rflag is a small C library that allows for efficient storage of flag values. <br/>

using integers or even just chars to hold a value that should hold either 1 or 0 is a waste of memory, in C an integer is 4 bytes and 32 boolean flags could make better use of that space. <br/>

rflag makes fast bitwise operations to retreive the single bits out of a value which is used as a flag array so that no space is wasted. <br/>

you can make flag "arrays" of size 8, 16, 32 or 64 bits but if you need more rflag will use a proper array to store multiple 32-bit integers.
