/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2024 Sultan Alsawaf <sultan@kerneltoast.com>.
 */
#ifndef _TENSOR_AIO_H_
#define _TENSOR_AIO_H_

struct exynos_cpufreq_domain;

#if IS_ENABLED(CONFIG_ARM_TENSOR_AIO_DEVFREQ)
void tensor_aio_init_cpu_domain(struct exynos_cpufreq_domain *domain);
void tensor_aio_cpufreq_pressure(int cpu, unsigned int cap);
#else
static inline void tensor_aio_init_cpu_domain(struct exynos_cpufreq_domain *domain)
{
}
static inline void tensor_aio_cpufreq_pressure(int cpu, unsigned int cap)
{
}
#endif

#endif /* _TENSOR_AIO_H_ */
