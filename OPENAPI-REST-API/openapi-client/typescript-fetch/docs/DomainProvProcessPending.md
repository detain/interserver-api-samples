
# DomainProvProcessPending

Provisioning status data for a pending domain order.

## Properties

Name | Type
------------ | -------------
`_OPS_version` | string
`response_text` | string
`protocol` | string
`response_code` | string
`action` | string
`object` | string
`is_success` | string
`attributes` | [DomainProvProcessPendingAttributes](DomainProvProcessPendingAttributes.md)

## Example

```typescript
import type { DomainProvProcessPending } from ''

// TODO: Update the object below with actual values
const example = {
  "_OPS_version": null,
  "response_text": null,
  "protocol": null,
  "response_code": null,
  "action": null,
  "object": null,
  "is_success": null,
  "attributes": null,
} satisfies DomainProvProcessPending

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainProvProcessPending
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


