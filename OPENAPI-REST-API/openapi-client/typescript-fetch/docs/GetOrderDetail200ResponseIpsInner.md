
# GetOrderDetail200ResponseIpsInner


## Properties

Name | Type
------------ | -------------
`service_id` | number
`service_module` | string
`service_hostname` | string

## Example

```typescript
import type { GetOrderDetail200ResponseIpsInner } from ''

// TODO: Update the object below with actual values
const example = {
  "service_id": 12345,
  "service_module": vps,
  "service_hostname": server.gtest.com,
} satisfies GetOrderDetail200ResponseIpsInner

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as GetOrderDetail200ResponseIpsInner
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


