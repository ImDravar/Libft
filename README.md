# Libft

[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](http://forthebadge.com)
[![forthebadge](http://forthebadge.com/images/badges/built-with-love.svg)](http://forthebadge.com)
<a href="https://projects.intra.42.fr/projects/42cursus-libft"> <img width="179" height="35" src="https://drive.google.com/uc?export=view&id=1zHB5en3VQCAxhPmrKZ32Pn7wiixzCgTD"> </a>
<a href="https://github.com/xicodomingues/francinette"> <img width="179" height="35" src="https://drive.google.com/uc?export=view&id=1DuBGIcoOQsgsBgb-BAJn3UIDbkcSd-vJ"> </a>
<a href="https://www.linkedin.com/in/rruiz-sa/"> <img width="120" height="35" src="https://upload.wikimedia.org/wikipedia/commons/0/01/LinkedIn_Logo.svg"> </a>

The objective of this project is to program a library in C grouping common functions that you will be able to reuse in future projects.

| Program name  | libft.a |
| ------------- | ------------- |
| Turn in files | Makefile, libft.h, ft_*.c|
| Makefile | NAME, all, clean, fclean, re|
|  Detailed below|  malloc, free|
 

# Table of contents

- [Mandatory part](#mandatory)
  - [Basic Functions](#func_mand_basic)
    - `ft_isalpha`
    - `ft_isdigit`
    - `ft_isalnum`
    - `ft_isascii`
    - `ft_isprint`
    - `ft_strlen`
    - `ft_memset`
    - `ft_bzero`
    - `ft_memcpy`
    - `ft_memmove`
    - `ft_strlcpy`
    - `ft_strlcat`
    - `ft_toupper`
    - `ft_tolower`
    - `ft_strchr`
    - `ft_strrchr`
    - `ft_strncmp`
    - `ft_memchr`
    - `ft_memcmp`
    - `ft_strnstr`
    - `ft_atoi`
    - `ft_calloc`
    - `ft_strdup`
 
- [Additional functions](#additional)
    - [Functions](#func_mand_add)
      - `ft_substr`
      - `ft_strjoin`
      - `ft_strtrim`
      - `ft_split`
      - `ft_itoa`
      - `ft_strmapi`
      - `ft_striteri`
      - `ft_putchar_fd`
      - `ft_putstr_fd`
      - `ft_putendl_fd`
      - `ft_putnbr_fd`
    
- [Bonus](#bonus)
    - [Bonus Functions](#func_mand_bonus)
      - `ft_substr`
      - `ft_strjoin`
      - `ft_strtrim`
      - `ft_split`
      - `ft_itoa`
      - `ft_strmapi`
      - `ft_striteri`
      - `ft_putchar_fd`
      - `ft_putstr_fd`
      - `ft_putendl_fd`
      - `ft_putnbr_fd`
    
# Mandatory part

### Basic Functions

#### - ft_isalpha: Checks whether a character is an alphabet or not.
   
 ```
[Description ft_isalpha]
  1- Check and return (1) if the character passed by function its a letter
  2- If not return (0)
  ```
#### - ft_isdigit: Checks whether a character is numeric character (0-9) or not.

 ```
[Description ft_isdigit]
  1- Check and return (1) if the character passed by function its a number
  2- If not return (0)
  ```   

#### - ft_isalnum: Checks whether the argument passed is an alphanumeric character (alphabet or number) or not

 ```
[Description ft_isalnum]
	1- Check and return (1) if the character passed by function its a
		- number calling the function isdgit
		- letter calling the function isalpha
	2- If not return (0)
 ```

#### - ft_isascii: Checks whether the argument passed can be represented as a valid 7–bit US-ASCII character.

 ```
[Description ft_isascii]
	1- Check and return (1) if the character passed by function its simple ascii
	2- If not return (0)
 ```

#### - ft_isprint: Checks whether a character is a printable character or not.

 ```
[Description ft_isprint]
	1- Check and return (1) if the character its printable
	2- If not return (0)
 ```

#### - ft_strlen: Calculates the length of a given string.

 ```
[Description ft_strlen]
	1- Iterate the string, and return the counter(i)
 ```

#### - ft_memset: Copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.

 ```
[Description ft_memset]
	1- Create new string with the value of str
	2- Iterate the new string as many times as indicated by function(len)
	3- Each iteration replaces its characters with those passed by function(c).
 ```

#### - ft_bzero: Function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros 

 ```
[Description ft_bzero]
	1-  Call the [ft_memset] function and set a 0 as character
 ```
 
 #### - ft_memcpy: Copies n characters from memory area src to memory area dest.

 ```
[Description ft_memcpy]
  1- Check if the dst and src exist
  2- Create new string with the value of dst and other with src
  3- Iterates up to the parameter passed by the function(len)
  4- Every iteration copy the value of source inside destination
  5- Return destination
  ```
  
 #### - ft_memmove: Copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().

 ```
[Description ft_memmove]
  1- Check if the dst and src exist
  2- Create new string with the value of dst and other with src
  3- If dst < src, copy in dest the len of str with memcpy.
  4- If dst and src are equal return dst
  5- If not(dst < src) and not (dst = src) then iterate from right to left of str copying src to dst
  6- Return dst
 ```
 
  #### - ft_strlcpy: Function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

 ```
[Description ft_strlcpy]
  1- Check if parameter lend_dst its 0 or negative,if its return the len of str
  2- Iterate while source exist and the counter its less to len_dst
  3- Every iteration copy the source in the destination
  4- When the iteration its over close the string
  5- Return the len of the source
 ```

  #### - ft_strlcat: Function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
  
 ```
[Description ft_strlcat]
  1- Get the len of the destination
  2- If the size is < len of dst
    - Return the len of source plus size
  3- Iterate while
    -(size > 0) and (destination len its smaller than size) and (source exist)
  4- Every iteration copy the source in the destination (warning counters)
  5- Close the string
  6- Iterate while the rest of source exist and plus the destination len
  7- Return destination len
 ```

#### - ft_toupper: Converts a lowercase alphabet to an uppercase alphabet.

 ```
[Description ft_toupper]
  1- If char(c) its Lower case substract 32
  2- Return char(c)
  ```

#### - ft_tolower: Converts an uppercase alphabet to a lowercase alphabet.

 ```
[Description ft_tolower]
  1- If char(c) its Upper case increase 32
  2- Return char(c)
 ```
 
 #### - ft_strrchr: Searches for the last occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.
 
 ```
[Description ft_strrchr]
  1- Get the len of the str
  2- Iterate while the len >= 0
  3- Each iteration
    -Check if str are equal to the character passed by the function(c)
      -# If its return the rest of te str
  4- Outside the iteration return (0)
  ```
  
   #### - ft_strncmp:  Compares at most the first n bytes of str1 and str2.
   
 ```
[Description ft_strncmp]
  1- Check if str1 and str2 are not finished and the n its not 0, if its return (0)
  2- Iterate while (str1 and str2 are equal) and (counter its minor than n) and (str1 and str2 exist)
  3- Each iteration increases the counter(i)
  4- Returns the difference between the str1 and str2
 ```
 
#### - ft_memchr:  Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.

 ```
[Description ft_memchr]
  1- Create new string with the value of s1
  2- Iterates up to the parameter passed by the function(n)
  3- Every iteration check if the vaule of str its equal to
  character passed by function(c), if its equal return the pointer of the matching byte
  4- If no similarity was found returns null
 ```

#### - ft_memcmp: Compares the first n bytes of memory area str1 and memory area str2.

 ```
[Description ft_memcmp]
  1- Check if the s1 and s2 exist
  2- Create new string with the value of s1 and other with s2
  3- Check if the bytes(n) for check passed by functions its 0, if its, return 0
  4- Iterate as long as both strings are equal, or as long as there are bytes left to check.
 ```


#### - ft_strnstr: The strnstr() function locates the	first occurrence of the	null-termi-nated string little in the	string big, where not more than	len characters are searched.

 ```
[Description ft_strnstr]
  1- Create new strings with the value of str and srch
  2- Check if srch its finished, if its Return str
  3- Iterate while (str exist) and the (counter is less than n)
  4- Each iteration
    - Reset the secondary counter(j)
    - Check if str and srch are equal
      -# If its equal
        -## Iterate while are equal and increase the secondary counter(j)
        -## Check if search are finished
          -### If its finished Return the rest of the str
 ```

#### - ft_atoi: Converts the string argument str to an integer (type int).

 ```
[Description ft_atoi]
  1- The first Iteration,	"erase" the blanks and special comands from the cont(i) of the string(str)
  2- Detect negative or positive(neg)
  3- Iterate the rest of the string while the cont its equal to a number, and saving it in a new variable * ten
  4- Return the new value with the correct symbol (-+)
 ```


#### - ft_calloc: Allocates the requested memory and returns a pointer to it. The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory to zero.

 ```
[Description ft_calloc]
  1- Create and check a new string, with the parameters passed by function
  2- Call bzero and send ith the new str(temp) and his size (count * size)
  3- Return the new string
 ```

#### - ft_strdup: Function returns a pointer to a new string which is a duplicate of the string s.

 ```
[Description ft_strdup]
  1- Get the len of the source for the malloc
  2- Create and check the new string
  3- Copy in the new string the source
  4- Return the new string
 ```

# Additional functions

### Functions

    
# Bonus

### Bonus Functions

# License

<a href="https://creativecommons.org/licenses/by-sa/4.0/deed.en"> <img width="250" height="35" src="https://drive.google.com/uc?export=view&id=13KzHIgBtdtkPKyk5lBtR6eAgnLZsrHOc "> </a>

Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)

#### You are free to:
  * **Share** — copy and redistribute the material in any medium or format
  * **Adapt** — remix, transform, and build upon the material for any purpose, even commercially.
 
#### Under the following terms:
* **Attribution** — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.

* **ShareAlike** — If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.

* **No additional restrictions** — You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.



