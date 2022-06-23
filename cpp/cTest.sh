#!/usr/bin/env zsh

cd /Users/jackie/Dev/designs/cpp/cmake-build-debug-llvm/

#### Build All Targets ###
# cmake --build <dir>:  build an already-generated project binary tree:
/opt/homebrew/bin/cmake --build /Users/jackie/Dev/designs/cpp/cmake-build-debug-llvm/ --target all -- -j8

###### Run CTest   #####
/opt/homebrew/bin/ctest \
-j8 -C Debug -T test --output-on-failure