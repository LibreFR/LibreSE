#include "libs/typedefs.c"
#include "libs/ES.c"
#include "libs/TDI.c"
#include "libs/esbzr.c"

extern void _start()
{
	setCurPos(0);

	char txt[16] = "Hello, World !\1";
    k_discdc(txt, 0xF);

	for(;;);
	return;
}
