#ifndef __MVM_MVM_DEVICE_H__
#define __MVM_MVM_DEVICE_H__

#include <mvm.h>

#define PDEV_NAME_SIZE		(31)

struct vdev;

struct vdev_ops {
	char *name;
	int (*dev_init)(struct vdev *, char *);
	int (*dev_deinit)(struct vdev *);
	int (*handle_event)(struct vdev *);
};

struct vdev {
	struct vm *vm;
	void *iomem;
	void *iomem_physic;
	int gvm_irq;
	int hvm_irq;
	unsigned long guest_iomem;
	int guest_visable;
	struct vdev_ops *ops;
	char name[PDEV_NAME_SIZE + 1];
	struct list_head list;
};

#define DEFINE_MDEV_TYPE(ops)	\
	static void *mvdev_ops_##ops __used __section("vdev_ops") = &ops

extern void * __start_vdev_ops;
extern void *__stop_vdev_ops;

int create_vdev(struct vm *vm, char *class, char *args);
void *vdev_map_iomem(void *iomem, size_t size);

#endif
