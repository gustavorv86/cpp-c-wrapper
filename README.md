cpp-c-wrapper
=============

Call a C++ objects from C code

What you need
-------------

Install the next software.

`sudo apt-get install git gcc g++ gdb make`

Build
-----

Clone this repository.

`git clone https://github.com/gustavorv86/cpp-c-wrapper`

Go to repository folder and run make command.

```
cd cpp-c-wrapper
make
```

Run examples
------------

Run the **export_library_path** script to load the **LD_LIBRARY_PATH**.

`. export_library_path.sh`

Check the **LD_LIBRARY_PATH**.

`echo $LD_LIBRARY_PATH`

Run the CPP example.

`./cpp/dist/mainCalculator`

Output:

```
Constructor: 0x562b170d0c20

Calculate: 1 + 2 = 3

Destructor: 0x562b170d0c20
```

Run the C example with CPP wrapper linkage.

`./c/dist/main_calculator_cpp_wrapper` 

Output:

```
Constructor: 0x5569b2abdc20
Pointer into C code: 0x5569b2abdc20 

Calculate: 1.250000 + 2.500000 = 3.750000 

Destructor: 0x5569b2abdc20
```
