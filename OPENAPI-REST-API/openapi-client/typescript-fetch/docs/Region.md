
# Region

A datacenter region where a server can be provisioned.

## Properties

Name | Type
------------ | -------------
`region_id` | number
`region_name` | string

## Example

```typescript
import type { Region } from ''

// TODO: Update the object below with actual values
const example = {
  "region_id": null,
  "region_name": null,
} satisfies Region

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Region
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


