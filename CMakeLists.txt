cmake_minimum_required (VERSION 3.8)
project ("picodes")

add_library (picodes STATIC "picodes.cpp")
target_include_directories (picodes PUBLIC include)