#include <math.h>
#include <stdio.h>
#include <malloc.h>

// get value of flag array at index, returns 0 or 1
// size of flag array can be 8, 16, 32, 64
// value of flag array can be [0, 255], [0, 65_535], [0, 4_294_967_295] or [0, 18_446_744_073_709_551_615]
char get_u8flag(char flags, char i_flag) {
	return (flags & (1 << i_flag)) ? 1 : 0;
}

char get_u16flag(short int flags,  char i_flag) {
	return (flags & (1 << i_flag)) ? 1 : 0;
}

char get_u32flag(int flags, char i_flag) {
	return (flags & (1 << i_flag)) ? 1 : 0;
}

char get_u64flag(long long int flags, char i_flag) {
	return (flags & (1 << i_flag)) ? 1 : 0;
}

// more than 64 flags are available using an array of 32-bit values
// the maximum amount of flags is 4_294_967_295
int* init_arrflag(int n_flags) {
	int s = (n_flags + 15) >> 5; // arr size, max is 134_217_727
	int* arr = (int*)malloc(sizeof(int) * s);
	return arr;
}

char get_arrflag(int* flags_arr, int i_flag) {
	int i = i_flag >> 5; // find array index 
	char j = i_flag & 31; // find flag index
	return (flags_arr[i] & (1 << i_flag)) ? 1 : 0;
}

void free_arrflag(int* arr) {
    free(arr);
}
