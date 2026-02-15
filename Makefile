GCC= g++ 
FLAGS= -std=c++20 
BUILD_DIR= ./build

all: prog test

prog:
	$(GCC) $(FLAGS) -o main main.c func.c 

test:
	$(GCC) $(FLAGS) tests/*.cpp src/func.cpp -o $(BUILD_DIR)/test_runner -lcunit
	./$(BUILD_DIR)/test_runner

lint:
	clang-format --style=file:linters/.clang-format -i src/*.cpp src/*.h tests/*.cpp tests/*.h

clean:
	rm -f $(BUILD_DIR)/test_runner main