char get_u8flag(char flags, char i_flag);
char get_u16flag(short int flags,  char i_flag):
char get_u32flag(int flags, char i_flag);
char get_u64flag(long long int flags, char i_flag);

int* init_arrflag(int n_flags);

char get_arrflag(int* flags_arr, int i_flag);
void free_arrflag(int* arr);
