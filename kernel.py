
import ctypes

# Load shared libraries (Rust and C)
rust_lib = ctypes.CDLL("./rust_module.so")
c_lib = ctypes.CDLL("./c_module.so")

def kernel_main():
    print("MadowsOS Kernel in Python")
    print("Calling Rust...")
    rust_lib.init_rust()

    print("Calling C...")
    c_lib.init_c()

    while True:
        cmd = input("MadowsOS> ")
        if cmd == "exit":
            print("Shutting down...")
            break
