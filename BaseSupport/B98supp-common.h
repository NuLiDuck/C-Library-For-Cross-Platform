#ifndef B98SUPP_COMMON_
#define B98SUPP_COMMON_

void B98HexDump(const void *buf, int buf_len);

unsigned char B98CheckSum_add(const void *p_data, int len);

int B98RemoveUCharFromHead(int op, void *phead, int phead_len, unsigned char c, int max_cnt);
void B98MemReverse(void *src, int src_size, void *dst);
void B98EndianReverse2(void *p);
void B98EndianReverse4(void *p);
void B98EndianReverse8(void *p);

long long B98GetCurTimeStamp(int op);

int B98FdSetBlockMode(int fd, int is_block);
int B98FdHasDataForRead(int fd, long t_sec, long t_usec);
int B98FdsHasDataForRead(int *fd_array, int fd_cnt, long t_sec, long t_usec, int *fd_ready_array);
int B98WriteAllToFd(int fd, const void *buf, int buf_len);
int B98ReadFdAllToBuf(int fd, unsigned char *buf, int buf_size);
void B98FdClear(int fd, int is_nonblock);

#endif
