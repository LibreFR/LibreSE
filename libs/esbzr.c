#pragma once

#define VGA 0xB8000

void k_disc(char c, uint8_t couleur)
{
    volatile char* curseur = (uintptr_t) (getCurPos() + VGA);
    *curseur++ = c;
    *curseur = couleur;
    incCurPos();

    return;
}

void k_discdc(char* str, uint8_t couleur)
{
    while(*str)
        k_disc(*str++, couleur);

    return;
}