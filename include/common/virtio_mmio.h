#ifndef __MVM_VIRTIO_MMIO_H__
#define __MVM_VIRTIO_MMIO_H__

/*
 * for detail of the below mmio register, refer
 * to the Documents/virtio-v1.0.pdf
 */
#define VIRTIO_MMIO_MAGIC_VALUE		0x000
#define VIRTIO_MMIO_VERSION		0x004
#define VIRTIO_MMIO_DEVICE_ID		0x008
#define VIRTIO_MMIO_VENDOR_ID		0x00c
#define VIRTIO_MMIO_HOST_FEATURES	0x010
#define VIRTIO_MMIO_HOST_FEATURES_SEL	0x014
#define VIRTIO_MMIO_GUEST_FEATURES	0x020
#define VIRTIO_MMIO_GUEST_FEATURES_SEL	0x024
#define VIRTIO_MMIO_GUEST_PAGE_SIZE	0x028
#define VIRTIO_MMIO_QUEUE_SEL		0x030
#define VIRTIO_MMIO_QUEUE_NUM_MAX	0x034
#define VIRTIO_MMIO_QUEUE_NUM		0x038
#define VIRTIO_MMIO_QUEUE_ALIGN		0x03c
#define VIRTIO_MMIO_QUEUE_READY		0x044
#define VIRTIO_MMIO_QUEUE_PFN		0x040
#define VIRTIO_MMIO_QUEUE_NOTIFY	0x050
#define VIRTIO_MMIO_INTERRUPT_STATUS	0x060
#define VIRTIO_MMIO_INTERRUPT_ACK	0x064
#define VIRTIO_MMIO_STATUS		0x070
#define VIRTIO_MMIO_QUEUE_DESC_LOW	0x080
#define VIRTIO_MMIO_QUEUE_DESC_HIGH	0x084
#define VIRTIO_MMIO_QUEUE_AVAIL_LOW	0x090
#define VIRTIO_MMIO_QUEUE_AVAIL_HIGH	0x094
#define VIRTIO_MMIO_QUEUE_USED_LOW	0x0a0
#define VIRTIO_MMIO_QUEUE_USED_HIGH	0x0a4
#define VIRTIO_MMIO_CONFIG_GENERATION	0x0fc
#define VIRTIO_MMIO_CONFIG		0x100

/* below register from 0x300 is used for hypervisor */
#define VIRTIO_MMIO_GVM_ADDR		0x300
#define VIRTIO_MMIO_DEV_FLAGS		0x304
#define VIRTIO_MMIO_HOST_FEATURE0	0x308
#define VIRTIO_MMIO_HOST_FEATURE1	0x30c
#define VIRTIO_MMIO_HOST_FEATURE2	0x310
#define VIRTIO_MMIO_HOST_FEATURE3	0x314
#define VIRTIO_MMIO_DRIVER_FEATURE0	0x318
#define VIRTIO_MMIO_DRIVER_FEATURE1	0x31c
#define VIRTIO_MMIO_DRIVER_FEATURE2	0x320
#define VIRTIO_MMIO_DRIVER_FEATURE3	0x324

#define VIRTIO_DEVICE_IOMEM_SIZE	0x1000

#define VIRTIO_MMIO_INT_VRING		(1 << 0)
#define VIRTIO_MMIO_INT_CONFIG		(1 << 1)

#define VIRTIO_EVENT_BUFFER_READY	(1 << 0)
#define VIRTIO_EVENT_QUEUE_READY	(1 << 1)
#define VIRTIO_EVENT_STATUS_CHANGE	(1 << 2)
#define VIRTIO_EVENT_MMIO		(1 << 3)

#define VIRTIO_FEATURE_OFFSET(index) \
	(VIRTIO_MMIO_HOST_FEATURE0 + index * 4)

#endif
