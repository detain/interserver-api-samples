
# ServerOrderRAID

A RAID configuration option available when ordering a dedicated server.

## Properties

Name | Type
------------ | -------------
`id` | string
`price` | number
`img` | string
`short_desc` | string
`long_desc` | string
`monthly_price` | number
`active` | string
`price_display` | string
`monthly_price_display` | string

## Example

```typescript
import type { ServerOrderRAID } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 7,
  "price": 50,
  "img": raid.png,
  "short_desc": Hardware Raid 5,
  "long_desc": Hardware Raid 5,
  "monthly_price": 50,
  "active": 1,
  "price_display": $50.00,
  "monthly_price_display": $50.00,
} satisfies ServerOrderRAID

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderRAID
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


