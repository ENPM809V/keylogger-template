// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/* Copyright (c) 2021 Sartura */
#include "vmlinux.h" 
#include <bpf/bpf_helpers.h>
#include <bpf/bpf_tracing.h>
#include <bpf/bpf_core_read.h>

char LICENSE[] SEC("license") = "Dual BSD/GPL";

#define TASK_COMM_LEN 16

SEC("kprobe/input_handle_event")
int BPF_KPROBE(
        /* The parameters here should be exactly the same as input_handle_event */)
{
    /*  We need to capture the keypress - How do we determine this? */
    
    /*  We need to determine if the user lifted their finger from the key - How do we do this? */
	
	return 0;
}


