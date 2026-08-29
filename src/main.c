/*
 * SPDX-License-Identifier: Apache-2.0
 *
 * TankAlert - minimal heartbeat application.
 * Future modules (sensors, battery, network, storage, power) live under app/.
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#define HEARTBEAT_INTERVAL_MS 5000

int main(void)
{
	uint32_t count;

	printk("TankAlert firmware starting\n");
	printk("Board: %s\n", CONFIG_BOARD);

	for (count = 0; ; count++) {
		printk("heartbeat %u\n", count);
		k_sleep(K_MSEC(HEARTBEAT_INTERVAL_MS));
	}

	return 0;
}
