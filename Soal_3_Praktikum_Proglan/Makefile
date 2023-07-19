CXX=g++
CXXFLAGS+= -std=c++17 -O3 -Wall -Wextra -I.

OUTPUT=Random

SOURCEDIR=src
OBJECTSDIR=obj

SOURCES=$(wildcard $(SOURCEDIR)/*.cpp)
OBJECTS=$(SOURCES:$(SOURCEDIR)/%.cpp=$(OBJECTSDIR)/%.o)

$(OUTPUT): $(OBJECTS) # Final Output
	$(CXX) $^ $(CXXFLAGS) -o $@

$(OBJECTSDIR)/%.o: $(SOURCEDIR)/%.cpp # Compile to object
	$(CXX) $< $(CXXFLAGS) -c -o $@

$(OBJECTS): | $(OBJECTSDIR)

$(OBJECTSDIR):
	mkdir -p $@

clean:
	rm -f $(OBJECTSDIR)/*.o $(OUTPUT)

%.exe: %.cpp
	$(CXX) $< $(CXXFLAGS) -o $@
