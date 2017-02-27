#define bt_c (*(volatile unsigned char *)(0x84000230))
#define bt_s (*(volatile unsigned char *)(0x84000230))
#define bt_tx (*(volatile unsigned char *)(0x84000232))
#define bt_rx (*(volatile unsigned char *)(0x84000232))
#define bt_b (*(volatile unsigned char *)(0x84000234))

int main(void){

	bt_c = 0x15;
	bt_b = 0x05;	//
}
