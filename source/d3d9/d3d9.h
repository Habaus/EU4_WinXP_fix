#define SYSTEM_DIR "C:\\Windows\\system32\\"


// our implementation of Direct3DCreate9Ex
#pragma comment(linker, "/export:Direct3DCreate9Ex=_Direct3DCreate9Ex@8")

// redirect Direct3DCreate9 to the real lib
#pragma comment(linker, "/export:Direct3DCreate9="SYSTEM_DIR"d3d9.Direct3DCreate9")
