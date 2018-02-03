## Coin Name = PHfirecoin.
## Based and forked from the great people
## at Ducknote/Darknote/Digital Note.

The Daemon is undergoing heavy upgrades to the base system ,because the work done ,was so promissing. We decided to greatly improve the base run quality at this time.
Much Error and warnings removed and underlying problems that could creep up are being gone over in great detail.

Website:
http://www.phfirecoin.com

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
Install Gcc and gcc7 after which you would install the cmake 9 or 10.
After this is completed , you would install boost with no special anything.

Building Boost from source code:
Download the tar.gz file qnd extract.
Move the folder to the main user area.
Go inside the folder and execute the following ,one by one commands to build boost 1.55...
./bootstrap.sh
Then ./b2
Then ./b2 install

After this is completed ,gcc and gcc7 and cmake and then boost is all installed.
You then go into the folder to build the coun programs from source code.

make cmakelists.txt
Then if all is well..
make or make -j3 the number 3 being the cores you will use to build the program.

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
