
# RaidOption

A RAID configuration option available for a dedicated server.

## Properties

Name | Type
------------ | -------------
`id` | number
`short_desc` | string
`monthly_price` | number

## Example

```typescript
import type { RaidOption } from ''

// TODO: Update the object below with actual values
const example = {
  "id": null,
  "short_desc": null,
  "monthly_price": null,
} satisfies RaidOption

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as RaidOption
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


