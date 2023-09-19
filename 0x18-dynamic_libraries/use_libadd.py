import ctypes

# Load the dynamic library
libadd = ctypes.CDLL('./libadd.so')

# Call the C function from Python
result = libadd.add_wrapper(5, 7)
print(f"Result: {result}")
