#ifndef __LIBC_H
#define __LIBC_H

#include <anima/ksyms.h>

void *anima_memcpy(void *dst, const void *src, unsigned int n);
void *anima_memset(void *s, int c, unsigned int n);
unsigned int anima_strlen(const char *s);
int anima_strcmp(const char *s1, const char *s2);

char *anima_strndup_from_user(const char *ustr, unsigned int ulen);

static inline int anima_strncmp(const char *s1, const char *s2, unsigned int n)
{
	return ksyms.strncmp(s1, s2, n);
}

static inline unsigned int anima_strlcat(char *s1, const char *s2, unsigned int n)
{
	return ksyms.strlcat(s1, s2, n);
}

#define anima_snprintf(str, size, format, ...) ksyms.snprintf(str, size, format, __VA_ARGS__)

static inline void *anima_vmalloc(unsigned int size)
{
	return ksyms.vmalloc(size);
}

static inline void *anima_vfree(void *ptr)
{
	return ksyms.vfree(ptr);
}

#endif
