
# DomainAllInfoAttributesContactSet


## Properties

Name | Type
------------ | -------------
`owner` | [DomainOwnerContact](DomainOwnerContact.md)
`admin` | [DomainAdminContact](DomainAdminContact.md)
`tech` | [DomainTechContact](DomainTechContact.md)

## Example

```typescript
import type { DomainAllInfoAttributesContactSet } from ''

// TODO: Update the object below with actual values
const example = {
  "owner": null,
  "admin": null,
  "tech": null,
} satisfies DomainAllInfoAttributesContactSet

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainAllInfoAttributesContactSet
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


