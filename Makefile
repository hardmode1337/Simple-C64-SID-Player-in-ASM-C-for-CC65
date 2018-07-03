CL=cl65
game:
	$(CL) -v  -O -C c64.cfg  main.c asm.s -o main.prg 
clean: 
	del main.prg
	del *.o
	make
	
