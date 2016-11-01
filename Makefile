default: build 

Program1.out: Program1.c
	gcc Program1.c -o Program1.out

Program2.out: Program2.c
	gcc Program2.c -lm -o Program2.out

Program3.out: Program3.c
	gcc Program3.c -o Program3.out

#Program3: Program3.out
#	gcc Program3.out -o Program3

Program4.out: Program4.c
	gcc Program4.c -o Program4.out

#Program4: Program4.out
#	gcc Program4.out -o Program4

Homework3.out: Homework3.c Program3 Program4
	gcc  Homework3.c -o Homework3.out

#Homework3: Homework3.out
#	gcc Homework3.out -o Homework3
#	./Homework3

build:Program3.out Program4.out Program1.out Program2.out Homework3.out

clean:
	rm -f Program3.out
	rm -f Program3
	rm -f Program4.out
	rm -f Program4
	rm -f Homework3.out
	rm -f Homework3

run: Program3 Program4
	@echo
	@echo Executing Program3:
	@echo
	./Program3.out
	@echo
	@echo
	@echo
	@echo
	@echo Executing Program4:
	@echo
	./Program4.out
