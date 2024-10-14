# Nome do compilador
CXX = g++

# Diretórios
INCLUDE_DIR = include
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Arquivo executável final
TARGET = $(BIN_DIR)/champ-manager.exe

# Flags de compilação
CXXFLAGS = -std=c++17 -Wall -I$(INCLUDE_DIR)

# Arquivos fonte e objetos
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Regras de compilação
all: create_dirs $(TARGET)

$(TARGET): $(OBJ_FILES) $(OBJ_DIR)/main.o
	$(CXX) -o $(TARGET) $(OBJ_FILES) $(OBJ_DIR)/main.o

# Regra para compilar main.cpp
$(OBJ_DIR)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJ_DIR)/main.o

# Regra para compilar os arquivos .cpp da pasta src
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Criar diretórios necessários
create_dirs:
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)

# Limpa arquivos .o e o executável
clean:
	del /f /q $(OBJ_DIR)\*.o
	del /f /q $(OBJ_DIR)\main.o
	del /f /q $(TARGET)
