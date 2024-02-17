#ifndef MAIN_H
#define MAIN_H
/**
 * st - this is a struct
 * @id: a pointer
 * @*func - another function pointer
 */



typedef struct st
{
	char *id;
	int (*func)();
} st;

int putchar_(char c);
int printchar(va_list val);
int printstr(va_list val);
int strelen(char *c);
int strelenc(const char *c);
int _printf(const char *format, ...);
int printper(void);
int printint(va_list val);
int printdec(va_list val);
int printbin(va_list val);
int printunsigned(va_list val);
int printoct(va_list val);
int printhex(va_list val);
int printhexE(va_list val);
int printstrE(va_list val);
int printptr(va_list val);
int printhex_E(unsigned long int nm);
int printrev(va_list val);
int printRot(va_list val);

#endif
