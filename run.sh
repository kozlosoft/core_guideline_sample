#!/bin/bash
BUILD_DIR=build

# install conan
if (pip list | grep conan) &> /dev/null 
then
	echo "found conan" 
else
	echo "need to install conan"
	sudo pip install conan
fi

# create and change to build dir
echo ""
mkdir -p $BUILD_DIR
cd $BUILD_DIR

echo ""
echo "building code ..."
conan install ../ok
cmake ..
cmake --build .

echo ""
echo "call static analyzer for ok ..."
clang-tidy ../ok/ok.cpp -checks=cppcoreguidelines-*

echo ""
echo "call static analyzer for fail ..."
clang-tidy ../fail/fail.cpp -checks=cppcoreguidelines-*

echo ""
echo "bye"
