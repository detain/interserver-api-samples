
# DnsNewDomain

The request for a new domain to be managed by the dns servers.

## Properties

Name | Type
------------ | -------------
`domain` | string
`ip` | string

## Example

```typescript
import type { DnsNewDomain } from ''

// TODO: Update the object below with actual values
const example = {
  "domain": mydomain.com,
  "ip": 1.2.3.4,
} satisfies DnsNewDomain

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DnsNewDomain
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


