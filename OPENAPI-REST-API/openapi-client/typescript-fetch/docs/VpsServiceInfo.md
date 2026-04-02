
# VpsServiceInfo


## Properties

Name | Type
------------ | -------------
`vps_id` | string
`vps_custid` | string
`vps_server` | string
`vps_ip` | string
`vps_ipv6` | string
`vps_vzid` | string
`vps_currency` | string
`vps_type` | string
`vps_order_date` | string
`vps_status` | string
`vps_invoice` | string
`vps_coupon` | string
`vps_extra` | string
`vps_hostname` | string
`vps_server_status` | string
`vps_comment` | string
`vps_slices` | string
`vps_vnc` | string
`vps_vnc_port` | string
`vps_rootpass` | string
`vps_mac` | string
`vps_os` | string
`vps_version` | string
`vps_location` | string
`vps_platform` | string
`vps_diskused` | string
`vps_diskmax` | string

## Example

```typescript
import type { VpsServiceInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "vps_id": 85872,
  "vps_custid": 223513,
  "vps_server": 2439,
  "vps_ip": 1.2.3.4,
  "vps_ipv6": null,
  "vps_vzid": vps85872,
  "vps_currency": USD,
  "vps_type": 33,
  "vps_order_date": 2022-12-26T20:14:59.000Z,
  "vps_status": active,
  "vps_invoice": 20130799,
  "vps_coupon": 3646,
  "vps_extra": {"spice":5903,"snapshots":[{"name":"third","used":36490445,"date":1692095220},{"name":"second","used":40894464,"date":1692181620},{"name":"first","used":54735668,"date":1692268020}]},
  "vps_hostname": vps85872,
  "vps_server_status": running,
  "vps_comment": my-web-2,
  "vps_slices": 16,
  "vps_vnc": 8.7.6.5,
  "vps_vnc_port": 5902,
  "vps_rootpass": mypassword,
  "vps_mac": 00:16:3e:27:59:b2,
  "vps_os": ubuntu24,
  "vps_version": ubuntu,
  "vps_location": 1,
  "vps_platform": kvm,
  "vps_diskused": 0,
  "vps_diskmax": 0,
} satisfies VpsServiceInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsServiceInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


