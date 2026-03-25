
# GetOrderDetail200Response


## Properties

Name | Type
------------ | -------------
`packageCosts` | [GetOrderDetail200ResponsePackageCosts](GetOrderDetail200ResponsePackageCosts.md)
`serviceTypes` | [Array&lt;GetOrderDetail200ResponseServiceTypesInner&gt;](GetOrderDetail200ResponseServiceTypesInner.md)
`ips` | [Array&lt;GetOrderDetail200ResponseIpsInner&gt;](GetOrderDetail200ResponseIpsInner.md)

## Example

```typescript
import type { GetOrderDetail200Response } from ''

// TODO: Update the object below with actual values
const example = {
  "packageCosts": null,
  "serviceTypes": null,
  "ips": null,
} satisfies GetOrderDetail200Response

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as GetOrderDetail200Response
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


