#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h> //tylko do testów
#include <string.h> //tylko do testów

typedef struct CString
{
    char* text;
    int length;
} CString;

CString* cstring_new(const char* str)
{
    CString* cstr = (CString*)malloc(sizeof(CString));

    int len = 0;
    while (str[len] != '\0')
        len++;

    cstr->length = len;
    cstr->text = (char*)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++)
        cstr->text[i] = str[i];
    cstr->text[len] = '\0';

    return cstr;
}

void cstring_delete(CString* cstr)
{
    free(cstr->text);
    free(cstr);
}

int cstring_length(CString* cstr)
{
    return cstr->length;
}

char cstring_get_char(CString* cstr, int n)
{
    if (n >= 0 && n < cstr->length)
        return cstr->text[n];
    return -1;
}

bool cstring_change(CString* cstr, int n, char ch)
{
    if (n >= 0 && n < cstr->length)
    {
        cstr->text[n] = ch;
        return true;
    }
    return false;
}

const char* cstring_get_string(CString* cstr)
{
    return cstr->text;
}

int main()
{
    CString* str = cstring_new("Ala ma kota");

    assert(cstring_length(str) == 11);

    assert(cstring_get_char(str, 4) == 'm');

    cstring_change(str, 10, 'y');
    assert(cstring_get_char(str, 10) == 'y');

    assert(strcmp(cstring_get_string(str), "Ala ma koty") == 0);
    
    cstring_delete(str);

    return 0;
}
