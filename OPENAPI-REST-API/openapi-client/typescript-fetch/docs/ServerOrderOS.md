
# ServerOrderOS

An operating system option available when ordering a dedicated server.

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
import type { ServerOrderOS } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 51,
  "price": 0,
  "img": null,
  "short_desc": AlmaLinux,
  "long_desc": null,
  "monthly_price": 0,
  "active": 1,
  "price_display": $0.00,
  "monthly_price_display": $0.00,
} satisfies ServerOrderOS

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderOS
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


