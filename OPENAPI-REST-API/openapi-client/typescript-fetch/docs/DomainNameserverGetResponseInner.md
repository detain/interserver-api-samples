
# DomainNameserverGetResponseInner


## Properties

Name | Type
------------ | -------------
`name` | string
`ipaddress` | string
`can_delete` | string

## Example

```typescript
import type { DomainNameserverGetResponseInner } from ''

// TODO: Update the object below with actual values
const example = {
  "name": ns1.domain.com,
  "ipaddress": 1.2.3.4,
  "can_delete": 1,
} satisfies DomainNameserverGetResponseInner

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainNameserverGetResponseInner
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


