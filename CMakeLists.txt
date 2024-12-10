# CMakeList.txt: проект CMake для KursachBibdTogoEbal2024AS64003Ultra; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("KursachBibdTogoEbal2024AS64003Ultra")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (KursachBibdTogoEbal2024AS64003Ultra "KursachBibdTogoEbal2024AS64003Ultra.cpp" "KursachBibdTogoEbal2024AS64003Ultra.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET KursachBibdTogoEbal2024AS64003Ultra PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
