
# VpsTrafficResponse

VPS Traffic Information

## Properties

Name | Type
------------ | -------------
`name` | string
`target` | string
`interval` | number
`history` | [VpsTrafficHistoryResponse](VpsTrafficHistoryResponse.md)
`last` | Date
`times` | Array&lt;Date&gt;
`totals` | [VpsTrafficTotalsResposne](VpsTrafficTotalsResposne.md)
`usage` | [VpsTrafficUsageResponse](VpsTrafficUsageResponse.md)
`data` | [Array&lt;VpsTrafficDataSectionResponse&gt;](VpsTrafficDataSectionResponse.md)

## Example

```typescript
import type { VpsTrafficResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "name": null,
  "target": null,
  "interval": null,
  "history": null,
  "last": null,
  "times": null,
  "totals": null,
  "usage": null,
  "data": null,
} satisfies VpsTrafficResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsTrafficResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


