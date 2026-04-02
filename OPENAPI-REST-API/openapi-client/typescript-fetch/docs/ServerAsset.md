
# ServerAsset


## Properties

Name | Type
------------ | -------------
`id` | number
`order_id` | string
`hostname` | string
`status` | string
`primary_ipv4` | string
`primary_ipv6` | string
`datacenter` | string
`type_id` | string
`asset_tag` | string
`rack` | string
`row` | string
`col` | string
`unit_start` | string
`unit_end` | string
`unit_sub` | string
`ipmi_mac` | string
`ipmi_ip` | string
`ipmi_working` | string
`company` | string
`comments` | string
`make` | string
`model` | string
`description` | string
`customer_id` | string
`external_id` | string
`billing_status` | string
`overdue` | string
`asset_id` | string
`asset_name` | string
`rack_id` | string
`rack_name` | string
`rack_location` | string
`rack_size` | string
`rack_x` | string
`rack_y` | string
`switchports` | Array&lt;number&gt;
`vlans` | Array&lt;string&gt;
`vlans6` | Array&lt;string&gt;
`lease` | [ServerLease](ServerLease.md)
`mac` | string
`ipmi_admin_username` | string
`ipmi_admin_password` | string
`ipmi_client_username` | string
`ipmi_client_password` | string
`ipmi_updated` | string
`create_timestamp` | string
`update_timestamp` | string
`comment` | string

## Example

```typescript
import type { ServerAsset } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 3497,
  "order_id": 16058,
  "hostname": myserver.host.com,
  "status": active,
  "primary_ipv4": 1.2.3.250,
  "primary_ipv6": ,
  "datacenter": 2,
  "type_id": 1,
  "asset_tag": ,
  "rack": 68,
  "row": 017,
  "col": 06,
  "unit_start": 37,
  "unit_end": 37,
  "unit_sub": 0,
  "ipmi_mac": 0c:c4:7a:af:35:00,
  "ipmi_ip": 10.8.69.7,
  "ipmi_working": 0,
  "company": int,
  "comments": ,
  "make": Supermicro,
  "model": SYS-6018R-TDW,
  "description": ,
  "customer_id": int5377,
  "external_id": ,
  "billing_status": active,
  "overdue": 0,
  "asset_id": 1,
  "asset_name": server,
  "rack_id": 68,
  "rack_name": 112.16,
  "rack_location": 2,
  "rack_size": 44,
  "rack_x": 25,
  "rack_y": 5,
  "switchports": [10414],
  "vlans": [],
  "vlans6": [],
  "lease": null,
  "mac": null,
  "ipmi_admin_username": null,
  "ipmi_admin_password": null,
  "ipmi_client_username": null,
  "ipmi_client_password": null,
  "ipmi_updated": null,
  "create_timestamp": null,
  "update_timestamp": null,
  "comment": null,
} satisfies ServerAsset

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerAsset
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


