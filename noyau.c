#include "libs/typedefs.c"
#include "libs/ES.c"
#include "libs/TDI.c"
#include "libs/esbzr.c"

extern void _start()
{
	setCurPos(0);
	char txt[16] = "Hello, World !\n";
    k_disc('A', 0xF);
	k_disc('B', 0xF);

	for(;;);
	return;
}
