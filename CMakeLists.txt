# CMakeList.txt: projekt CMake dla elementu ProjektJFiK, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#
cmake_minimum_required (VERSION 3.8)

# Włącz przeładowywanie kodu XAML na gorąco dla kompilatorów MSVC, jeśli jest to obsługiwane.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("KiepskiCompiler")

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/Antlr4)
file(GLOB SOURCES "${SOURCE_DIR}/*.cpp")  # Wszystkie pliki .cpp
file(GLOB HEADERS "${SOURCE_DIR}/*.h")  # Wszystkie pliki .h

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Set your project compile flags.
# E.g. if using the C++ header files
# you will need to enable C++11 support
# for your compiler.

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (KiepskiCompiler "Main.cpp" "Main.h" ${SOURCES})
include_directories(${SOURCE_DIR})

# Find the libraries that correspond to the LLVM components
# that we wish to use
llvm_map_components_to_libnames(llvm_libs support core irreader)

# Link against LLVM libraries
target_link_libraries(KiepskiCompiler ${llvm_libs})

include_directories("C:/Users/wojte/Desktop/Wojtek/studiapw/JFiK/antlr4-cpp-runtime-4.13.2-source/runtime/src")
link_directories("C:/Users/wojte/Desktop/Wojtek/studiapw/JFiK/antlr4-cpp-runtime-4.13.2-source/runtime/bin/vs-2022/x64/Debug DLL")

target_link_libraries(KiepskiCompiler "C:/Users/wojte/Desktop/Wojtek/studiapw/JFiK/antlr4-cpp-runtime-4.13.2-source/runtime/bin/vs-2022/x64/Debug DLL/antlr4-runtime.lib")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET KiepskiCompiler PROPERTY CXX_STANDARD 20)
endif()

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
