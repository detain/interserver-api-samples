
# IpBlock

An IP address block option available for a dedicated server configuration.

## Properties

Name | Type
------------ | -------------
`id` | number
`short_desc` | string
`qty` | string
`monthly_price` | number

## Example

```typescript
import type { IpBlock } from ''

// TODO: Update the object below with actual values
const example = {
  "id": null,
  "short_desc": null,
  "qty": null,
  "monthly_price": null,
} satisfies IpBlock

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as IpBlock
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


