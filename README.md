# Printf

Implementing C's printf function 
# Description

This printf project replicates the main features of c's printf function. It sends a formated string to thestandard output. The output is written under the control of a format string that specifies how the subsequent arguments are processed for output.

The format string is composed of zero or more directives: ordinary  characters (not  %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.  Each conversion specification is introduced by the character %, and ends with a conversion specifier.  In between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision and an optional length modifier.
## Functionalities

This function covers the following functionalities
* Printing Strings
* Printing Characters
* Printing Numbers

The format specifiers `%s`, `%c`, `%i`, `%d` are used to provide this functionalities respectively
## Usage Examples

|	Functionaity	|	Specifier	|			Example			|		Output		|
|	------------	|	---------	|			--------		|		------		|	
|	Print String	|	%s		|	_printf("Print a %s, "string")		|	Print a string		|
|	Print Character	|	%c		|	_printf("Print a character %c, 'A')	|	Print a character A	|
|	Print Number	|	%d		|	_printf("Print number %d, 12)		|	Print number 12		|
|	Print Number	|	%i		|	_printf("Print number %i, 12)		|	Print number 12 	|

The specifiers can also be used in combination as shown below  
`_printf("Print a %s and the integer %d, "string", 100)` outputs `Print a string and the integer 100`

# Contributors

There are two contributors to this repository  
[Gadisa Asfaw](https://github.com/GadisaAsfaw) | [Rediet Tadesse](https://github.com/Reid-T-W)

