
# DomainOwnerContact

Contact details for the registered domain owner.

## Properties

Name | Type
------------ | -------------
`postal_code` | string
`org_name` | string
`country` | string
`status` | string
`state` | string
`first_name` | string
`last_name` | string
`address3` | string
`fax` | string
`address2` | string
`email` | string
`city` | string
`phone` | string
`address1` | string

## Example

```typescript
import type { DomainOwnerContact } from ''

// TODO: Update the object below with actual values
const example = {
  "postal_code": null,
  "org_name": null,
  "country": null,
  "status": null,
  "state": null,
  "first_name": null,
  "last_name": null,
  "address3": null,
  "fax": null,
  "address2": null,
  "email": null,
  "city": null,
  "phone": null,
  "address1": null,
} satisfies DomainOwnerContact

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainOwnerContact
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


