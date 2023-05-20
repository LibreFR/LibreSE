#pragma once

#define VGA 0xB8000

void k_disc(char c, uint8_t couleur)
{
    uintptr_t cp = (uintptr_t) getCurPos();
    volatile char* curseur = (uintptr_t) (cp + cp + VGA);
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