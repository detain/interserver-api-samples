
# DomainNameserverPostRequest

Payload for adding a registered nameserver (glue record).

## Properties

Name | Type
------------ | -------------
`name` | string
`ipAddress` | string

## Example

```typescript
import type { DomainNameserverPostRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "name": ns1.host.com,
  "ipAddress": 1.2.3.4Get,
} satisfies DomainNameserverPostRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainNameserverPostRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


