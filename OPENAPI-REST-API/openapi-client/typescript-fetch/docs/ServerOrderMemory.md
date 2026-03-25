
# ServerOrderMemory

A memory (RAM) option available when ordering a dedicated server.

## Properties

Name | Type
------------ | -------------
`id` | string
`price` | string
`img` | string
`short_desc` | string
`long_desc` | string
`manu` | string
`size` | string
`type` | string
`hidden` | string
`monthly_price` | number
`drive_type` | string
`monthly_price_display` | string

## Example

```typescript
import type { ServerOrderMemory } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 65,
  "price": 0,
  "img": hd.jpg,
  "short_desc": 20TB SATA,
  "long_desc": null,
  "manu": null,
  "size": 3000,
  "type": null,
  "hidden": 0,
  "monthly_price": 50,
  "drive_type": lff,
  "monthly_price_display": $50.00,
} satisfies ServerOrderMemory

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderMemory
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


