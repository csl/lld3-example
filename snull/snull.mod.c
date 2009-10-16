#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x73064479, "struct_module" },
	{ 0xa5423cc4, "param_get_int" },
	{ 0xcb32da10, "param_set_int" },
	{ 0xbcefda58, "__napi_schedule" },
	{ 0xed633abc, "pv_irq_ops" },
	{ 0xe5330208, "netif_receive_skb" },
	{ 0x7f12574b, "kfree_skb" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x315296c4, "ether_setup" },
	{ 0x972574c8, "kmem_cache_alloc" },
	{ 0x2c9b319a, "kmalloc_caches" },
	{ 0x72d06920, "register_netdev" },
	{ 0x2bb0c322, "alloc_netdev_mq" },
	{ 0xb2c724ce, "free_netdev" },
	{ 0x36009d96, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x7867749b, "netif_rx" },
	{ 0x1c0cc2d, "eth_type_trans" },
	{ 0xc280e666, "skb_put" },
	{ 0x23620721, "dev_alloc_skb" },
	{ 0xf402f0af, "skb_push" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0xfc38be1a, "__netif_schedule" },
	{ 0xb72397d5, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3432F9C96C3F6FF4B29DCB9");
