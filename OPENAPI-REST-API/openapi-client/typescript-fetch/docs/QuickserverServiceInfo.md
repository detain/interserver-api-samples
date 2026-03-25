
# QuickserverServiceInfo

Core service record for a QuickServer including ID, status, IP, OS, and billing details.

## Properties

Name | Type
------------ | -------------
`qs_id` | string
`qs_custid` | string
`qs_server` | string
`qs_ip` | string
`qs_ipv6` | any
`qs_vzid` | string
`qs_currency` | string
`qs_type` | string
`qs_order_date` | string
`qs_status` | string
`qs_invoice` | string
`qs_coupon` | string
`qs_extra` | string
`qs_hostname` | string
`qs_server_status` | string
`qs_comment` | string
`qs_slices` | string
`qs_vnc` | string
`qs_vnc_port` | any
`qs_rootpass` | string
`qs_mac` | string
`qs_os` | string
`qs_version` | string
`qs_location` | string
`qs_platform` | any

## Example

```typescript
import type { QuickserverServiceInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "qs_id": 24355,
  "qs_custid": 771282,
  "qs_server": 365,
  "qs_ip": ,
  "qs_ipv6": null,
  "qs_vzid": qs24355,
  "qs_currency": USD,
  "qs_type": 700,
  "qs_order_date": 2023-04-11T20:00:06.000Z,
  "qs_status": canceled,
  "qs_invoice": 20297531,
  "qs_coupon": 0,
  "qs_extra": {"platform":"kvm"},
  "qs_hostname": qs24355,
  "qs_server_status": deleted,
  "qs_comment": ,
  "qs_slices": 0,
  "qs_vnc": 99.88.77.66,
  "qs_vnc_port": null,
  "qs_rootpass": ,
  "qs_mac": ,
  "qs_os": ubuntu24,
  "qs_version": Ubuntu,
  "qs_location": 1,
  "qs_platform": null,
} satisfies QuickserverServiceInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as QuickserverServiceInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


