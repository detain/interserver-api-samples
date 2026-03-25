
# DomainRow

A result row from the `Domains` `GET` request.

## Properties

Name | Type
------------ | -------------
`domain_id` | string
`domain_hostname` | string
`domain_expire_date` | string
`cost` | string
`domain_status` | string

## Example

```typescript
import type { DomainRow } from ''

// TODO: Update the object below with actual values
const example = {
  "domain_id": 59237,
  "domain_hostname": mydomain.com,
  "domain_expire_date": 2023-08-14T00:59:38.000Z,
  "cost": 11.00,
  "domain_status": active,
} satisfies DomainRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


