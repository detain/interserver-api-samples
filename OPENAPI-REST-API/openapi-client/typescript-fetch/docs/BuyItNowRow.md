
# BuyItNowRow

A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.

## Properties

Name | Type
------------ | -------------
`server_id` | string
`cpu` | [Array&lt;BuyItNowRowCpuInner&gt;](BuyItNowRowCpuInner.md)
`memory` | string
`disk` | { [key: string]: string; }
`bandwidth` | string
`ips` | string
`location` | string
`price` | number

## Example

```typescript
import type { BuyItNowRow } from ''

// TODO: Update the object below with actual values
const example = {
  "server_id": 11432,
  "cpu": null,
  "memory": 64GB,
  "disk": null,
  "bandwidth": 1Gbps Unmetered,
  "ips": 1 Vlan Ip (/30),
  "location": NYC Region,
  "price": 64,
} satisfies BuyItNowRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BuyItNowRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


