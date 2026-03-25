
# DomainOrderServices10001

Example schema for a domain service catalog entry.

## Properties

Name | Type
------------ | -------------
`services_id` | string
`services_name` | string
`services_cost` | string
`services_currency` | string
`services_category` | string
`services_buyable` | string
`services_type` | string
`services_field1` | string
`services_field2` | string
`services_module` | string
`services_hidden` | string

## Example

```typescript
import type { DomainOrderServices10001 } from ''

// TODO: Update the object below with actual values
const example = {
  "services_id": 10001,
  "services_name": .asia Domain Name Registration,
  "services_cost": 19.00,
  "services_currency": USD,
  "services_category": 100,
  "services_buyable": 1,
  "services_type": 100,
  "services_field1": .asia,
  "services_field2": ,
  "services_module": domains,
  "services_hidden": 0,
} satisfies DomainOrderServices10001

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainOrderServices10001
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


