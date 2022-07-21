#ifndef __KEN_SHARE_H__
#define __KEN_SHARE_H__



#define ERRP(con, func, ret) do{				\
				if (con)						\
				{								\
					printf(#func" false!\n");	\
					ret;						\
				}								\
			}while(0)



#define GETLINES(string, buf)	do{					\
				printf(string);						\
				fgets(buf, sizeof(buf), stdin);		\
				if (buf[strlen(buf) - 1] == '\n')	\
					buf[strlen(buf) - 1] = '\0';	\
			}while(0)


#endif
