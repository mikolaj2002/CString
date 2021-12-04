# CString
Aby skompilować program należy wpisać w Linux'owym terminalu polecenie:<br/>
```clang CString.c -o cstring```<br/><br/>

```c
CString* cstring_new(const char* str)
```
Tworzy nową instancję struktury CString.<br/><br/>

```c
void cstring_delete(CString* cstr)
```
Zwalnia pamięć po instancji struktury.<br/><br/>

```c
int cstring_length(CString* cstr)
```
Zwraca długość napisu.<br/><br/>

```c
char cstring_get_char(CString* cstr, int n)
```
Zwraca znak znajdujący się na indeksie n. W przypadku wyjścia poza tablicę zwraca wartość -1.<br/><br/>

```c
bool cstring_change(CString* cstr, int n, char ch)
```
Zmienia znak na n-tej pozycji w napisanie na ch. Po zmianie zwraca wartość true, a po nieudanej próbie false.<br/><br/>

```c
const char* cstring_get_string(CString* cstr)
```
Zwraca cały napis.<br/><br/>
