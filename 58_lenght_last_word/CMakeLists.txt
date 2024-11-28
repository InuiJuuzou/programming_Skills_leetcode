#собирается версией не менее 3.25
cmake_minimum_required(VERSION 3.25)
#Имя проэкта - ?
project(lenght_last_word)
#собрать готовый файл executable
add_executable(lenght_last_word main.cpp)

#set(CMAKE_CXX_STANDARD 11) #стандарт 11
#set(CMAKE_CXX_STANDARD_REQUIRED on) # требуется 11 стандарт, если компилятор не потдерживает 11 стандарт то упадет с ошибкой

set_target_properties(
    lenght_last_word PROPERTIES,
    CXX_STANDARD 11,
    CMAKE_CXX_STANDARD_REQUIRED on
)

