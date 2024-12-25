# CMakeList.txt: проект CMake для KursachBibdTogoEbal2024AS64003Ultra; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required(VERSION 3.10)
project(KursachBibd2024AS64003)

set(CMAKE_CXX_STANDARD 17)

# Укажите путь к библиотеке Realm Core
include_directories(/path/to/realm-core/include)
link_directories(/path/to/realm-core/lib)

add_executable(RealmExample main.cpp)

# Подключаем Realm Core
target_link_libraries(RealmExample realm)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
