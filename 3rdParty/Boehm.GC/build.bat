mkdir build32 & pushd build32
cmake -G "Visual Studio 15 2017" ..\
popd
mkdir build64 & pushd build64
cmake -G "Visual Studio 15 2017 Win64" ..\
popd
cmake --build build32 --config Debug
cmake --build build32 --config Release
cmake --build build64 --config Debug
cmake --build build64 --config Release