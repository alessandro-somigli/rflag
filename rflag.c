#include <math.h>
#include <stdio.h>
#include <malloc.h>

// get methods take in a flag array and index, return 0 or 1.
// size of flag array can be 8, 16, 32 or 64 bits.
// value of flag array can be [0, 2^8], [0, 2^16], [0, 2^32] or [0, 2^64].
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

// on methods take in a flag array and index. 
// return new flag array with the index value set to 1.
char on_u8flag(char flags, char i_flag) {
	return (flags | (1 << i_flag));
}

short int on_u16flag(short int flags,  char i_flag) {
	return (flags | (1 << i_flag));
}

int on_u32flag(int flags, char i_flag) {
	return (flags | (1 << i_flag));
}

long long int on_u64flag(long long int flags, char i_flag) {
	return (flags | (1 << i_flag));
}

// on methods take in a flag array and index. 
// return new flag array with the index value set to 0.
char off_u8flag(char flags, char i_flag) {
	return (flags & ~(1 << i_flag));
}

short int off_u16flag(short int flags,  char i_flag) {
	return (flags & ~(1 << i_flag));
}

int off_u32flag(int flags, char i_flag) {
	return (flags & ~(1 << i_flag));
}

long long int off_u64flag(long long int flags, char i_flag) {
	return (flags & ~(1 << i_flag));
}

// on methods take in a flag array and index. 
// toggles indexed value from 1 to 0 or from 0 to 1.
char toggle_u8flag(char flags, char i_flag) {
	return (flags ^ (1 << i_flag));
}

short int toggle_u16flag(short int flags,  char i_flag) {
	return (flags ^ (1 << i_flag));
}

int toggle_u32flag(int flags, char i_flag) {
	return (flags ^ (1 << i_flag));
}

long long int toggle_u64flag(long long int flags, char i_flag) {
	return (flags ^ (1 << i_flag));
}

// more than 64 flags are available using an array of 32-bit values
int* init_arrflag(int n_flags) {
	int s = (n_flags + 15) >> 5; // arr size, max is 2^27
	int* arr = (int*)malloc(sizeof(int) * s);
	return arr;
}

void free_arrflag(int* arr) {
    free(arr);
}

char get_arrflag(int* flags_arr, int i_flag) {
	int i = i_flag >> 5; // find array index
	char j = i_flag & 31; // find flag index
	return (flags_arr[i] & (1 << i_flag)) ? 1 : 0;
}

void on_arrflag(int* flags_arr, int i_flag) {
	int i = i_flag >> 5; // find array index
	char j = i_flag & 31; // find flag index
	flags_arr[i] = (flags_arr[i] | (1 << i_flag));
}

void off_arrflag(int* flags_arr, int i_flag) {
	int i = i_flag >> 5; // find array index
	char j = i_flag & 31; // find flag index
	flags_arr[i] = (flags_arr[i] & ~(1 << i_flag));
}

void toggle_arrflag(int* flags_arr, int i_flag) {
	int i = i_flag >> 5; // find array index
	char j = i_flag & 31; // find flag index
	flags_arr[i] = (flags_arr[i] ^ (1 << i_flag));
}
