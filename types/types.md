<!-- @format -->

### Char

`ASCII characters`: Mapping of letter to number
uses single quotes
print with %c

#### [Unicode](https://home.unicode.org/)

larger mapping that can be used with `\u<unicode_number>`

### Hexidecimal

### String

represented by a `char string[] = "String";`
use double quotes
print with %s

### Int

`int number = 1;`
print with %i or %d

### Double

`double myDouble = 5.5;`
perferred over floats
print with %f

### Float

`float myFloat = 5.5f;`
less percision then a double
print with %f

### Long

`long longNumber = 123456789;`
print with %ld

### Unsigned

`unsigned int = 1;`
modifier for numbers that shows it will be a non-negative value

### Boolean

`bool myBool = true`
print with %i or %d

### Arrays

#### Declaring

`int arr[];`
`int arr[] = {1,2,3,4}`

#### Assigning

`arr[0] = 1;`

#### Size of array

`size_t = sizeof(arr) / sizeof(arr[0])`;

sizeof(arr) returns the zie of the whole array in btyes. If we divide by the bytes of a single member like in sizeof(arr[0]) we get the size
print using zu

#### looping

This is similar to a JS loop
