
# DomainLookupResponse

Availability, pricing, and order-field metadata for a domain lookup.

## Properties

Name | Type
------------ | -------------
`available` | boolean
`premium` | boolean
`website` | boolean
`domain_service` | boolean
`service` | object
`whois_privacy` | boolean
`_new` | string
`renewal` | string
`transfer` | string
`fields` | object
`currencies` | object

## Example

```typescript
import type { DomainLookupResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "available": null,
  "premium": null,
  "website": null,
  "domain_service": null,
  "service": null,
  "whois_privacy": null,
  "_new": null,
  "renewal": null,
  "transfer": null,
  "fields": null,
  "currencies": null,
} satisfies DomainLookupResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainLookupResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


