cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(lzw LANGUAGES C)
add_library(lzw
  "src/lzw.c"
  "src/lzw_bits.c"
  "src/lzw_table.c"
  )
add_dependencies(lzw darray)
target_include_directories(lzw PUBLIC "src/")
target_compile_options(lzw
  PRIVATE "-std=c89"
  PRIVATE "-pedantic-errors"
  PRIVATE "-Wall"
  PRIVATE "-Wconversion"
  )
target_link_libraries(lzw darray)
