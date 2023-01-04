#ifndef B98SUPP_FILE_OP_
#define B98SUPP_FILE_OP_

int B98file_already_exist(const char *f_path);
int B98file_create_v1(const char *path);
int B98file_create_tmp_v1(const char *name_prefix, const char *dir_path, char *ret_name_buf);

#endif
