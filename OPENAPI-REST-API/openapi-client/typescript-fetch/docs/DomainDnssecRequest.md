
# DomainDnssecRequest

Request payload for adding DNSSEC DS records to a domain.

## Properties

Name | Type
------------ | -------------
`algorithm` | Array&lt;number&gt;
`digest_type` | Array&lt;number&gt;
`digest` | Array&lt;string&gt;
`key_tag` | Array&lt;number&gt;

## Example

```typescript
import type { DomainDnssecRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "algorithm": null,
  "digest_type": null,
  "digest": null,
  "key_tag": null,
} satisfies DomainDnssecRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainDnssecRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


