# Play SID file in C64 with ASM/C

(c) 2018 SolidCore

GNU General Public License v3.0

# Requirements
- CC65: https://www.cc65.org/
- Sidreloc: https://www.linusakesson.net/software/sidreloc/index.php
- Unix or Windows GNU Make: https://www.gnu.org/software/make/
- Vice C64 Emulator: http://vice-emu.sourceforge.net/ or similiar
- SID file

# How to use
This is a quick and dirty guide, but simply run 

1) ./sidereloc -p 40 input.sid output.sid
	
	A quick glance at -p tells us:
	-p    --page   10  First memory page (in hex) to be occupied by the relocated SID.
	so in our case $4000

2) Using vim or your favourite text editor modify asm.s and set "filename.sid" to your output.sid. 

3) Make

4) Open 'main.prg' in your favourite emulator.
