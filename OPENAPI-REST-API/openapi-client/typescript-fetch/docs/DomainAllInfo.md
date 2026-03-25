
# DomainAllInfo

Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.

## Properties

Name | Type
------------ | -------------
`_OPS_version` | string
`attributes` | [DomainAllInfoAttributes](DomainAllInfoAttributes.md)
`object` | string
`protocol` | string
`response_text` | string
`response_code` | string
`action` | string
`is_success` | string

## Example

```typescript
import type { DomainAllInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "_OPS_version": null,
  "attributes": null,
  "object": null,
  "protocol": null,
  "response_text": null,
  "response_code": null,
  "action": null,
  "is_success": null,
} satisfies DomainAllInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainAllInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


