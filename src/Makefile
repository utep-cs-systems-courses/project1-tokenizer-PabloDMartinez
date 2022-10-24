
OBJS= userInterface.o tokenizer.h #history.o

CFLAGS=-g -O3

all: create

#tokenizer.o: tokenizer.h
#create.o:tokenizer.o

create:	$(OBJS)
	cc -o create $(CFLAGS) $(OBJS)

$(OBJS): tokenizer.h #history.h

clean:
	rm -f *.o create

run:create
	./create
