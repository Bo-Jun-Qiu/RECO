#ifndef FILE_GTP_MOD_KERNEL_SEEN
#define FILE_GTP_MOD_KERNEL_SEEN

bool gtp_mod_kernel_enabled(void);

int gtp_mod_kernel_tunnel_add(struct in_addr ue, struct in_addr gw, uint32_t i_tei, uint32_t o_tei, uint8_t bearer_id);
int gtp_mod_kernel_tunnel_del(uint32_t i_tei, uint32_t o_tei);

int gtp_mod_kernel_init(int *fd0, int *fd1u, struct in_addr *ue_net, int mask, int gtp_dev_mtu);
void gtp_mod_kernel_stop(void);

#endif /* FILE_GTP_MOD_KERNEL_SEEN */

