
# VpsServiceAddons

Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.

## Properties

Name | Type
------------ | -------------
`has_cpanel` | boolean
`has_directadmin` | boolean
`has_fantastico` | boolean
`has_softaculous` | boolean
`has_hdspace` | boolean
`dedicated_ip` | boolean
`extra_ips` | Array&lt;string&gt;
`extra_ips6` | Array&lt;string&gt;
`unpaid_ips` | Array&lt;string&gt;
`ips` | Array&lt;string&gt;
`ips6` | Array&lt;string&gt;
`cpanel_id` | number
`cost` | number
`ids` | Array&lt;string&gt;
`rdata` | Array&lt;string&gt;

## Example

```typescript
import type { VpsServiceAddons } from ''

// TODO: Update the object below with actual values
const example = {
  "has_cpanel": null,
  "has_directadmin": null,
  "has_fantastico": null,
  "has_softaculous": null,
  "has_hdspace": null,
  "dedicated_ip": null,
  "extra_ips": null,
  "extra_ips6": null,
  "unpaid_ips": null,
  "ips": null,
  "ips6": null,
  "cpanel_id": null,
  "cost": null,
  "ids": null,
  "rdata": null,
} satisfies VpsServiceAddons

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsServiceAddons
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


