
all:
	make -C ./cpp
	make -C ./c

clean:
	make -C ./cpp clean
	make -C ./c clean
