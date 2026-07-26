#ifndef ADAPTER_H
#define ADAPTER_H

void adapter_set_balance_board_mode();
int set_up_device(char * dev_str);
int restore_device();
int power_off_host(const bdaddr_t * host_bdaddr);
int get_device_bdaddr(int device_id, bdaddr_t * out_bdaddr);
int find_wiimote(bdaddr_t * out_bdaddr);

#endif /* ADAPTER_H */
