
# QuickserverServiceMaster

Information about the host node running this QuickServer, including hardware specs and resource utilization.

## Properties

Name | Type
------------ | -------------
`qs_id` | string
`qs_name` | string
`qs_ip` | string
`qs_type` | string
`qs_hdsize` | string
`qs_hdfree` | string
`qs_bits` | string
`qs_load` | string
`qs_ram` | string
`qs_cpu_model` | string
`qs_cpu_mhz` | string
`qs_location` | string
`qs_available` | string
`qs_cost` | string
`qs_last_update` | string
`qs_cores` | string
`qs_iowait` | string
`qs_raid_status` | string
`qs_drive_type` | string
`qs_order` | string
`qs_raid_building` | string
`qs_kernel` | string
`qs_ioping` | string
`qs_speed` | string
`qs_distro` | string
`qs_distro_version` | string
`qs_bytes_sec_in` | string
`qs_bytes_sec_out` | string
`qs_packets_sec_in` | string
`qs_packets_sec_out` | string
`qs_last_install_time` | any
`qs_partitions` | any
`qs_cpu_flags` | string

## Example

```typescript
import type { QuickserverServiceMaster } from ''

// TODO: Update the object below with actual values
const example = {
  "qs_id": 365,
  "qs_name": Qs365,
  "qs_ip": ,
  "qs_type": 14,
  "qs_hdsize": 1760,
  "qs_hdfree": 1192,
  "qs_bits": 64,
  "qs_load": 3.45,
  "qs_ram": 29550679,
  "qs_cpu_model": Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz,
  "qs_cpu_mhz": 2900,
  "qs_location": 1,
  "qs_available": 0,
  "qs_cost": 49,
  "qs_last_update": 2023-08-17T23:52:02.000Z,
  "qs_cores": 8,
  "qs_iowait": 6.89,
  "qs_raid_status": OK: zfs:all pools are healthy,
  "qs_drive_type": SSD,
  "qs_order": 92263,
  "qs_raid_building": 0,
  "qs_kernel": 5.15.0-69-generic,
  "qs_ioping": 330707348,
  "qs_speed": 1000,
  "qs_distro": Ubuntu,
  "qs_distro_version": 22.04,
  "qs_bytes_sec_in": 0,
  "qs_bytes_sec_out": 0,
  "qs_packets_sec_in": 0,
  "qs_packets_sec_out": 0,
  "qs_last_install_time": null,
  "qs_partitions": null,
  "qs_cpu_flags": ,
} satisfies QuickserverServiceMaster

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as QuickserverServiceMaster
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


