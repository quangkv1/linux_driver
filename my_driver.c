#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Grok");
MODULE_DESCRIPTION("A simple Hello World Linux kernel module");

static int __init hello_init(void)
{
    printk(KERN_INFO "[KHONG VAN QUANG] Hello, World!\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "[KHONG VAN QUANG] Goodbye, World!\n");
}

module_init(hello_init);
module_exit(hello_exit);