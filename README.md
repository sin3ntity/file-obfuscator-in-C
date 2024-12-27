# File obfuscator in C
Well there's not much to say about a simple file obfuscator. It inverts the binary representation of each ASCII character in the file using the bitwise operator '~'. 
## Usage
```bash
  cc -o main fileObfuscator.c
  ./main < secret_file > encrypted_file
```
