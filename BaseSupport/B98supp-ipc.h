#ifndef B98SUPP_IPC_
#define B98SUPP_IPC_

int B98SimpleTcpConn(const char *dst_ip_str, short port, int time_out_s, int is_block);


void B98PTL_v1_pack_a_frame(const unsigned char *frame_data, int frame_data_len, unsigned char *ret_frame, int *ret_frame_len);
int B98PTL_v1_datalen(unsigned char *pframe);
int B98PTL_v1_read_a_frame_from_fd(int, int, int, int, int , int ,void *, int *, void *, int, int *);

#endif
