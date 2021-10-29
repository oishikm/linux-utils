/*
*   My Update: Snap, Flatpak and APT. (C) Oishik Mukhopadhyay, 28 October, 2021.
*   Version 1.0: Snap and APT, 28 October, 2021.
*   Version 1.1: Snap, Flatpak and APT, 29 October, 2021.
*   
*   This can also be done with a long alias and put in ~./bash_aliases,
*   but I prefer this to be more elegant.
*/

/*
MIT License

Copyright (c) 2021 Oishik Mukhopadhyay

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("\nMy Update: Snap, Flatpak and APT. (C) Oishik Mukhopadhyay, 28 October, 2021.\n");
    printf("\n(NB: Active internet connection is required.)\n");
    printf("\n1. Snap Update\n");
    system("sudo snap refresh");
    printf("\n2. Flatpak Update\n");
    printf("\n\t2.1. Usr Flatpak\n\t");
    system("flatpak update");
    printf("\n\t2.2. Su Flatpak\n\t");
    system("sudo flatpak update");
    printf("\n3. APT Update & Upgrade\n");
    system("sudo apt update && sudo apt upgrade -y");
    printf("\n4. APT Auto-Remove\n");
    system("sudo apt autoremove");
    printf("\nDone. Have a nice day. :)\nExiting.\n\n");
    return 0;
}
