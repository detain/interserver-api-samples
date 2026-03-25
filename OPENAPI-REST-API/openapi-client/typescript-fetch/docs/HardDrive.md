
# HardDrive

A hard drive option available for a dedicated server configuration.

## Properties

Name | Type
------------ | -------------
`id` | number
`short_desc` | string
`size` | string
`drive_type` | string
`monthly_price` | number
`monthly_price_display` | string

## Example

```typescript
import type { HardDrive } from ''

// TODO: Update the object below with actual values
const example = {
  "id": null,
  "short_desc": null,
  "size": null,
  "drive_type": null,
  "monthly_price": null,
  "monthly_price_display": null,
} satisfies HardDrive

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HardDrive
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


