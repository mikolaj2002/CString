# CString
Aby skompilować program należy wpisać w Linux'owym terminalu polecenie:<br/>
```clang CString.c -o cstring```<br/>

<br/>
```c
CString* cstring_new(const char* str)
```
Tworzy nową instancję struktury CString.

<br/>
```c
void cstring_delete(CString* cstr)
```
Zwalnia pamięć po instancji struktury.

<br/>
```c
int cstring_length(CString* cstr)
```
Zwraca długość napisu.

<br/>
```c
char cstring_get_char(CString* cstr, int n)
```
Zwraca znak znajdujący się na indeksie n. W przypadku wyjścia poza tablicę zwraca wartość -1.

<br/>
```c
bool cstring_change(CString* cstr, int n, char ch)
```
Zmienia znak na n-tej pozycji w napisanie na ch. Po zmianie zwraca wartość true, a po nieudanej próbie false.

<br/>
```c
const char* cstring_get_string(CString* cstr)
```
Zwraca cały napis.
