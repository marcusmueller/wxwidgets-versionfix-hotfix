GXX=g++
WX_OPTS=`wx-config-3.0-gtk2 --cxxflags --linkdeps --libs core`

.PHONY: fix_kicad
all: hotfix.so

hotfix.so: hotfix.cc
	${GXX} -o hotfix.so -shared ${WX_OPTS} -fPIC -fpermissive hotfix.cc
clean:
	rm hotfix.so
fix_kicad:
	LD_PRELOAD=./hotfix.so kicad

