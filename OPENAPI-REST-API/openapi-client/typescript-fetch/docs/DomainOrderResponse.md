
# DomainOrderResponse

Registrar response metadata returned after a domain order.

## Properties

Name | Type
------------ | -------------
`_OPS_version` | string
`protocol` | string
`is_success` | string
`action` | string
`attributes` | [DomainOrderResponseAttributes](DomainOrderResponseAttributes.md)
`response_text` | string
`object` | string
`response_code` | string

## Example

```typescript
import type { DomainOrderResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "_OPS_version": null,
  "protocol": null,
  "is_success": null,
  "action": null,
  "attributes": null,
  "response_text": null,
  "object": null,
  "response_code": null,
} satisfies DomainOrderResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainOrderResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


