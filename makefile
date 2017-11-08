all: project

y.tab.c y.tab.h:	project.y
	yacc -d project.y

lex.yy.c: project.l y.tab.h
	lex project.l

project: lex.yy.c y.tab.c y.tab.h
	cc -o project y.tab.c lex.yy.c

clean:
	rm -rf *.o *.exe y.tab.c lex.yy.c y.tab.h project||: