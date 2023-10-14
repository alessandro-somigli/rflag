char get_u8flag(char flags, char i_flag);
char get_u16flag(short int flags,  char i_flag);
char get_u32flag(int flags, char i_flag);
char get_u64flag(long long int flags, char i_flag);

char on_u8flag(char flags, char i_flag);
short int on_u16flag(short int flags,  char i_flag);
int on_u32flag(int flags, char i_flag);
long long int on_u64flag(long long int flags, char i_flag);

char off_u8flag(char flags, char i_flag);
short int off_u16flag(short int flags,  char i_flag);
int off_u32flag(int flags, char i_flag);
long long int off_u64flag(long long int flags, char i_flag);

char toggle_u8flag(char flags, char i_flag);
short int toggle_u16flag(short int flags,  char i_flag);
int toggle_u32flag(int flags, char i_flag);
long long int toggle_u64flag(long long int flags, char i_flag);

int* init_arrflag(int n_flags);
void free_arrflag(int* arr);

char get_arrflag(int* flags_arr, int i_flag);
void on_arrflag(int* flags_arr, int i_flag);
void off_arrflag(int* flags_arr, int i_flag);
void toggle_arrflag(int* flags_arr, int i_flag);