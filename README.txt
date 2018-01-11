## Coin Name = PHfirecoin.
## Based and forked from the great people
## at Ducknote/Darknote/Digital Note.
## Testing Deamon & Simple-Wallet

Website:
Http://www.phfirecoin.com

Discord:
https://discord.gg/hzuRz43

Twitter:
@phfirecoin

### Building on Linux:
Your source files will be built in a directory
Newly created ,named build
Then src etc..
To start them use ./phfired
Or any ./ Then the program name for testing.

Dependencies: GCC 7 or later, CMake 10.0.01 or later, and Boost 1.55 or later.

To compile: terminal window
Then make
Or
make -j3
The number being how many cpu cores.

To install normal various dependencies?
sudo apt-get buildessentials

Dependent files?
You may download them from:

- http://gcc.gnu.org/
- http://www.cmake.org/
- http://www.boost.org/

Alternatively, it may be possible to install them using a package manager.

To build, change to a directory where this file is located, and run `make`. The resulting executables can be found in `build/release/src`.

#### Advanced options:

Parallel build: run `make -j<number of threads>` instead of `make`.

Debug build: run `make build-debug`.

Test suite: run `make test-release` to run tests in addition to building. Running `make test-debug` will do the same to the debug version.

Building with Clang: it may be possible to use Clang instead of GCC, but this may not work everywhere. To build, run `export CC=clang CXX=clang++` before running `make`.

### On Windows:
Dependencies: MSVC 2013 or later, CMake 10.1 or later, and Boost 1.55 or later. You may download them from:

- http://www.microsoft.com/
- http://www.cmake.org/
- http://www.boost.org/

To build, change to a directory where this file is located, and run this commands:
```
mkdir build
cd build
cmake -G "Visual Studio 12 Win64" ..
```

And then do Build.

Good luck!
