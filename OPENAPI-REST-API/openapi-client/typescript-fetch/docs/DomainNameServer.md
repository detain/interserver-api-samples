
# DomainNameServer

A single registered nameserver entry with glue IPs.

## Properties

Name | Type
------------ | -------------
`sortorder` | string
`name` | string
`ipaddress` | string

## Example

```typescript
import type { DomainNameServer } from ''

// TODO: Update the object below with actual values
const example = {
  "sortorder": null,
  "name": null,
  "ipaddress": null,
} satisfies DomainNameServer

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainNameServer
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


