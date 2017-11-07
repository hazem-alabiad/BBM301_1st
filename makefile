all: project

project.tab.c project.tab.h:	project.y
	bison -d project.y

lex.yy.c: project.l project.tab.h
	flex project.l

project: lex.yy.c project.tab.c project.tab.h
	cc -o project project.tab.c lex.yy.c

clean:
	rm -rf project project.tab.c lex.yy.c project.tab.h || :