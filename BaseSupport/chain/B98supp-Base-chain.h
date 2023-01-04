#ifndef B98SUPP_BASE_CHIAIN_
#define B98SUPP_BASE_CHIAIN_

/* Node */
typedef struct B98ChainV1Node {
	struct B98ChainV1Node *next;
	struct B98ChainV1Node *pre;
	unsigned char opt;			//本节点的属性
									//bit0:		是否被占用，0 空闲 1 已占用
									//bit1:		本节点的内存是否需要执行free(创建chain时如果是预分配的node(bit1为0)则不需要free)
									//bit2:		销毁链条时pdata(用户数据)是否需要free
									//bit3~7:	预留
	void *pdata;				//数据
} B98ChainV1Node;
/* Head */
typedef struct {
	B98ChainV1Node *pfirst;		//first node
	B98ChainV1Node *plast;		//last node
	int cnt;					//node 总数，也包括 cnt_free
	int cnt_free;				//空闲节点数量，也就是node已经预先分配了，目前正等待被使用
} B98ChainV1Head;

/*创建链条*/
B98ChainV1Head *B98_chainV1_create(int free_node_cnt);
/*销毁链条*/
int B98_chainV1_destroy(B98ChainV1Head *phead);
/*存入节点*/
int B98_chainV1_put_data(B98ChainV1Head *phead, void *user_data, int user_data_need_free);

#endif
