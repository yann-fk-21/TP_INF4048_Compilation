default: clean langue test progasm finally 

langue: lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c -o langue -lfl

lex.yy.c: langue.l
	flex langue.l

y.tab.c y.tab.h: langue.y
	yacc -d langue.y

test: langue
	./langue < text.cffn

progasm: output.asm
	nasm -f elf32 -o prog.o output.asm
	ld -m elf_i386 -o progasm prog.o -lc -dynamic-linker /lib/ld-linux.so.2 -L/usr/lib32
	

finally: progasm
	./progasm


clean:
	rm -f lex.yy.c y.tab.c y.tab.h langue progasm prog.o output.asm


