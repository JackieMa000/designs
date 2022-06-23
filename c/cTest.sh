#!/usr/bin/env zsh

cd /Users/jackie/Dev/designs/c/cmake-build-debug-llvm/

#### Build All Targets ###
/opt/homebrew/bin/cmake \
--build /Users/jackie/Dev/designs/c/cmake-build-debug-llvm/ --target all -- -j 8

###### Run CTest   #####
/opt/homebrew/bin/ctest \
-j8 -C Debug -T test --output-on-failure