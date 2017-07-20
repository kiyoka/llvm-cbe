llvm-cbe
========

The resurrected LLVM "C Backend", with improvements.

I forked this to get it to compile against a more recent LLVM version. Really this whole thing looks like it needs rewritten.

Supports LLVM 4.0.1

INSTALLATION INSTRUCTIONS
=========================

This version of the LLVM-CBE library works with LLVM 3.9. You will have to
compile this version of LLVM before you try to use LLVM-CBE. This
guide will walk you through the compilation and installation of both
tools and show usage statements to verify that the LLVM-CBE library is
compiled correctly.

The library is known to compile on various Linux versions (Redhat,
Mageia, Ubuntu, Debian), Mac OS X, and Windows (Mingw-w64).

Step 1a: Installing LLVM manually
=======================

LLVM-CBE currently requires LLVM 3.9 to be installed somewhere on your system,
and that the corresponding "llvm-config" be in your PATH.
(only LLVM is needed, not clang).

The first step is to compile LLVM on your machine:

```
$ cd $HOME
$ git clone https://github.com/llvm-mirror/llvm
$ cd llvm
$ git checkout release_39
$ ./configure
$ make
$ make install
```

At this point, you should have llvm-config in your path:
```
$ llvm-config --version
3.9.1
```

Step 1b: Install LLVM from repositories
=======================

Alternatively, a LLVM installed some other way can be used, e.g. installing the Debian packages.
Be aware that some distributions will suffix the 'llvm-config' program with LLVM version, e.g 'llvm-config-3.9'.
In this case, you will need to set the environment variable LLVM_CONFIG so the makefile knows which program to call.
Example:
```
$ export LLVM_CONFIG=llvm-config-3.9
```

Step 2: Compiling LLVM-CBE
==========================

Next, download and compile llvm-cbe:
```
$ cd $HOME
$ git clone https://github.com/JuliaComputing/llvm-cbe.git llvm-cbe
$ cd llvm-cbe
```

```
$ make
```

Step 3: Usage Examples
======================

Once llvm-cbe is compiled, you can run it with the following command.
```
$ bin/llvm-cbe main.ll -o=main.cbe.c
$ gcc -w main.cbe.c -o main.exe
$ ./main.exe
```

Run the test suite
==================
```
$ ./check
```

This will trigger the build and run the tests.

