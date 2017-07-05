/* file prtrim2.c */

#if !defined(COMPILE_ENVIRONMENT)
#include <phone/stdcenvf.h> /* std compile environment for functions */
#endif

 /**************************************************/
 /*  prtrim2(s)                                    */
 /*  Returns pointer s; puts end-of-line code      */
 /*  ('\0') into the first charactor following the */
 /*  last non-whitespace character in the string.  */
 /**************************************************/
  char *prtrim2(char *s)
{*(prtrim(s) + 1) = '\0'; return s;}
