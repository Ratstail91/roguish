OUTDIR=out

all: $(OUTDIR)
	$(MAKE) -C src

debug: export CXXFLAGS+=-g
debug: all

release: export CXXFLAGS+=-O2
release: clean all

rebuild: clean all

$(OUTDIR):
	mkdir $(OUTDIR)

clean:
	find . -type f -name '*.o' -exec rm -f -r -v {} \;
	find . -type f -name '*.a' -exec rm -f -r -v {} \;
