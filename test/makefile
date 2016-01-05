files := $(shell ls *.cpp)
items := $(basename $(files))
bins := $(addprefix .tmp/,$(items))

test: prepare $(bins) clean

prepare:
	-mkdir .tmp

clean:
	rm -rf .tmp

$(bins): .tmp/% : %.cpp
	g++ -std=c++11 -o $@ $< && $@ < $*.in

