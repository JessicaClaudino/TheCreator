# Nome do executavel
EXECUTABLE = main

# Flags do compilador
CXXFLAGS = -Wall -std=c++14

# Lista dos arquivos de codigo fonte
SOURCES = $(wildcard *.cpp)

# Lista dos ficheiros objeto
OBJECTS = $(SOURCES:.cpp=.o)

# Regra para criar o executavel
$(EXECUTABLE): $(OBJECTS)
	g++ $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)


# Regra para criar os ficheiros objeto
%.o: %.cpp
	g++ $(CXXFLAGS) -c $< -o $@

# Limpar ficheiros temporarios
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

# Executar o programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Phony targets (para evitar conflitos de nomes)
.PHONY: all clean run
