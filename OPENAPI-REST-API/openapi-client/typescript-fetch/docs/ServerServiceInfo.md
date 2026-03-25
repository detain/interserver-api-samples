
# ServerServiceInfo


## Properties

Name | Type
------------ | -------------
`server_id` | string
`server_hostname` | string
`server_custid` | string
`server_type` | string
`server_currency` | string
`server_order_date` | string
`server_invoice` | string
`server_coupon` | string
`server_status` | string
`server_root` | string
`server_dedicated_tag` | string
`server_custom_tag` | string
`server_comment` | string
`server_initial_bill` | string
`server_hardware` | string
`server_ips` | string
`server_monthly_bill` | string
`server_setup` | string
`server_discount` | any
`server_rep` | string
`server_date` | string
`server_total_cost` | string
`server_location` | any
`server_hardware_ordered` | string
`server_billed` | string
`server_welcome_email` | string
`server_dedicated_cpu` | string
`server_dedicated_memory` | string
`server_dedicated_hd1` | string
`server_dedicated_hd2` | any
`server_dedicated_bandwidth` | string
`server_dedicated_ips` | string
`server_dedicated_os` | string
`server_dedicated_cp` | any
`server_dedicated_raid` | string
`server_extra` | string

## Example

```typescript
import type { ServerServiceInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "server_id": 16058,
  "server_hostname": myserver.host.com,
  "server_custid": 771282,
  "server_type": 600,
  "server_currency": USD,
  "server_order_date": 2020-05-08T17:22:36.000Z,
  "server_invoice": 18738142,
  "server_coupon": 0,
  "server_status": active,
  "server_root": ,
  "server_dedicated_tag": 0,
  "server_custom_tag": ,
  "server_comment": ,
  "server_initial_bill": 0,
  "server_hardware": 0,
  "server_ips": 0,
  "server_monthly_bill": 0,
  "server_setup": 0,
  "server_discount": null,
  "server_rep": 0,
  "server_date": 1588972956,
  "server_total_cost": 230,
  "server_location": null,
  "server_hardware_ordered": 0,
  "server_billed": 0,
  "server_welcome_email": 1,
  "server_dedicated_cpu": 38,
  "server_dedicated_memory": 22,
  "server_dedicated_hd1": 20,
  "server_dedicated_hd2": null,
  "server_dedicated_bandwidth": 3,
  "server_dedicated_ips": 5,
  "server_dedicated_os": 30,
  "server_dedicated_cp": null,
  "server_dedicated_raid": 0,
  "server_extra": [],
} satisfies ServerServiceInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerServiceInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


