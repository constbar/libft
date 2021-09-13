## libft

project of School 42 where it is necessary to implement
own library of functions from libraries ctype.h, stdlib.h, string.h in C.

the functions work just like the original functions from the standard library.

the project was made in accordance with the school design code standard in the C language.

### how to use
```
make
gcc main.c -L. libft.a
./a.out
```

### functions list
|  function | description |
| ------------ | ------------ |
| ft_atoi | convert ASCII string to an integer |
| ft_strlen | returns num of string size |
| ft_strlcpy | copies up to size characters from src to dst |
| ft_strlcat | appends src to the end of dst |
| ft_strchr | returns a pointer to the first occurrence of the character in string |
| ft_strrchr |returns a pointer to the last occurrence of the character in the string |
| ft_strnstr | locates a substring in a string|
| ft_strncmp | compares the given strings |
| ft_strdup | returns a pointer to a new duplicated string |
| ft_bzero | erases the data of the n bytes of the specified memory |
| ft_memset | fills the first n bytes of the memory of the constant byte c|
| ft_memchr | locate byte in string |
| ft_memcpy | copies n bytes from src to memory area dst |
| ft_memccpy | copies no more than n bytes from memory area src to memory area dst |
| ft_memcmp | compares the areas of memory src and dst |
| ft_memmove | copies n bytes from memory area src to memory area dst |
| ft_isalnum | checks for an alphanumeric character |
| ft_isalpha | checks for an alphabetic character |
| ft_isdigit | checks for a digit |
| ft_isprint | checks for any printable character |
| ft_tolower | makes to lower case letter conversion |
| ft_toupper | makes to upper case letter conversion |
| ft_calloc | allocates size of memory and returns a pointer |
| ft_substr | allocates and returns a substring from the string |
| ft_strjoin | allocates and returns a concatenated new string |
| ft_strtrim | removes given characters from the beginning and the end of the string |
| ft_split | returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter |
| ft_itoa | returns a string representing the integer received as an argument | 
| ft_strmapi | applies the function 'f' to each character of the string |
| ft_putchar_fd | outputs the character to the given file descriptor
| ft_putstr_fd | outputs the string to the given file descriptor
| ft_putendl_fd | outputs the string to the given file descriptor, followed by a newline |
| ft_putnbr_fd | outputs the integer to the given file descriptor
| ft_lstnew | returns a new element. The variable 'content' is initialized with the value of the parameter 'content' |
| ft_lstadd_front | add new element at beginning of the list |
| ft_lstsize | counts the number of elements in a list|
| ft_lstlast | returns the last element of list |
| ft_lstadd_back | add new element at end of the list |
| ft_lstdelone | takes as a parameter an element and frees the memory of the element’s content |
| ft_lstclear | deletes and frees the given element and every successor of that element |
| ft_lstiter | iterates the list and appllies the given function to the content of each element |
| ft_lstmap | iterates the list and appllies the function to the content of each element. creates a new list resulting of the successive applications of the function |