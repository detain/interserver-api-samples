
# DomainTechContact

Technical contact information for a domain registration.

## Properties

Name | Type
------------ | -------------
`state` | string
`status` | string
`org_name` | string
`country` | string
`postal_code` | string
`fax` | string
`email` | string
`address2` | string
`address3` | string
`address1` | string
`city` | string
`phone` | string
`first_name` | string
`last_name` | string

## Example

```typescript
import type { DomainTechContact } from ''

// TODO: Update the object below with actual values
const example = {
  "state": null,
  "status": null,
  "org_name": null,
  "country": null,
  "postal_code": null,
  "fax": null,
  "email": null,
  "address2": null,
  "address3": null,
  "address1": null,
  "city": null,
  "phone": null,
  "first_name": null,
  "last_name": null,
} satisfies DomainTechContact

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainTechContact
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


