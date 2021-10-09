cd /Users/jackie/Dev/design-patterns/c/cmake-build-debug-coverage

#### Build All Targets ###
/opt/homebrew/bin/cmake \
--build /Users/jackie/Dev/design-patterns/c/cmake-build-debug-coverage --target all -- -j 8

###### Run CTest   #####
/opt/homebrew/bin/ctest \
-j8 -C Debug -T test --output-on-failure