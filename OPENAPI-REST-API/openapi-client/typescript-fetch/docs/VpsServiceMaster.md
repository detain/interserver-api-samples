
# VpsServiceMaster

Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.

## Properties

Name | Type
------------ | -------------
`vps_id` | string
`vps_name` | string
`vps_ip` | string
`vps_type` | string
`vps_hdsize` | string
`vps_hdfree` | string
`vps_bits` | string
`vps_load` | string
`vps_ram` | string
`vps_cpu_model` | string
`vps_cpu_mhz` | string
`vps_location` | string
`vps_last_update` | string
`vps_raid_building` | string
`vps_kernel` | string
`vps_available` | string
`vps_cores` | string
`vps_iowait` | string
`vps_raid_status` | string
`vps_mounts` | string
`vps_server_max` | string
`vps_server_max_slices` | string
`vps_drive_type` | string
`vps_order` | string

## Example

```typescript
import type { VpsServiceMaster } from ''

// TODO: Update the object below with actual values
const example = {
  "vps_id": 2439,
  "vps_name": Mystaging,
  "vps_ip": 10.11.12.13,
  "vps_type": 14,
  "vps_hdsize": 1856,
  "vps_hdfree": 1559,
  "vps_bits": 64,
  "vps_load": 0.17,
  "vps_ram": 263998228,
  "vps_cpu_model": Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz,
  "vps_cpu_mhz": 1198.86,
  "vps_location": 1,
  "vps_last_update": 2023-08-17T22:19:04.000Z,
  "vps_raid_building": 0,
  "vps_kernel": 5.4.0-121-generic,
  "vps_available": 0,
  "vps_cores": 48,
  "vps_iowait": 0.09,
  "vps_raid_status": OK: zfs:all pools are healthy,
  "vps_mounts": udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages,
  "vps_server_max": 50,
  "vps_server_max_slices": 80,
  "vps_drive_type": SSD,
  "vps_order": 36978,
} satisfies VpsServiceMaster

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsServiceMaster
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


