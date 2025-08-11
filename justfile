# 기본 C++ 컴파일 옵션
compiler := "g++"
cxxflags := "-std=c++17 -O2 -Wall"

# 새 문제 템플릿 생성
new problem_path:
    @mkdir -p $(dirname src/{{problem_path}}.cpp)
    @cp templates/cpp_template.cpp src/{{problem_path}}.cpp
    @echo "Created src/{{problem_path}}.cpp"


# 컴파일 + 실행
run problem_path:
    @mkdir -p bin
    @g++ -std=c++17 -O2 -Wall src/{{problem_path}}.cpp -o bin/$(echo {{problem_path}} | tr '/' '_')
    @./bin/$(echo {{problem_path}} | tr '/' '_')

# 새 문제 생성 후 실행까지 한번에
solve problem_path:
    just new {{problem_path}}
    just run {{problem_path}}    