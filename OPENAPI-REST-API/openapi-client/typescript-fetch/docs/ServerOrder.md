
# ServerOrder

Object representing a server order.

## Properties

Name | Type
------------ | -------------
`form_values` | [ServerOrderFormValues](ServerOrderFormValues.md)
`config_ids` | [ServerOrderConfigIds](ServerOrderConfigIds.md)
`cpu` | number
`field_label` | [ServerOrderFieldLabels](ServerOrderFieldLabels.md)
`cpu_li` | [ServerOrderCpuLi](ServerOrderCpuLi.md)
`memory_li` | [ServerOrderMemoryLi](ServerOrderMemoryLi.md)
`bandwidth_li` | [ServerOrderBandwidthLi](ServerOrderBandwidthLi.md)
`ips_li` | [ServerOrderIpsLi](ServerOrderIpsLi.md)
`os_li` | [ServerOrderOsLi](ServerOrderOsLi.md)
`cp_li` | [ServerOrderCpLi](ServerOrderCpLi.md)
`raid_li` | [Array&lt;ServerOrderRAID&gt;](ServerOrderRAID.md)

## Example

```typescript
import type { ServerOrder } from ''

// TODO: Update the object below with actual values
const example = {
  "form_values": null,
  "config_ids": null,
  "cpu": 184,
  "field_label": null,
  "cpu_li": null,
  "memory_li": null,
  "bandwidth_li": null,
  "ips_li": null,
  "os_li": null,
  "cp_li": null,
  "raid_li": null,
} satisfies ServerOrder

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrder
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


