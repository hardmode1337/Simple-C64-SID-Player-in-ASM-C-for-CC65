# Simple C64 SID Player in ASM/C for CC65

(c) 2018 SolidCore

GNU General Public License v3.0

## Requirements
- CC65: https://www.cc65.org/
- Sidreloc: https://www.linusakesson.net/software/sidreloc/index.php
- Unix or Windows GNU Make: https://www.gnu.org/software/make/
- Vice C64 Emulator: http://vice-emu.sourceforge.net/ or similiar
- SID file

## How to use
This is a quick and dirty guide, but simply run 

1) ./sidereloc -p 40 input.sid output.sid
	
	A quick glance at -p tells us:
	-p    --page   10  First memory page (in hex) to be occupied by the relocated SID.
	so in our case $4000

2) Using vim or your favourite text editor modify asm.s and set "filename.sid" to your output.sid. 

3) Make

4) Open 'main.prg' in your favourite emulator.

## Finding and Relocating SID Init and Play address

Tools such as 'SIDPlay2/w' offer a great insight into the SID file headers,

![Properties of SID File in SID2Play2/w](https://github.com/solidcore-commodore/Simple-C64-SID-Player-in-ASM-C-for-CC65/blob/master/images/sid_properties.png?raw=true)

In some cases the SID file will have a rather obscure address 'Load Range' $E000-$ECE0, using sidereloc we can relocate to a specific  'memory page' which in our case will be '-p 40' == $4000, which now makes it $4000-$4CE0.

Further reading: https://www.hvsc.c64.org/download/C64Music/DOCUMENTS/SID_file_format.txt



