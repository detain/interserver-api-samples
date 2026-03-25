
# ServerOrderIP

An IP block option available when ordering a dedicated server.

## Properties

Name | Type
------------ | -------------
`id` | string
`price` | number
`img` | string
`short_desc` | string
`long_desc` | string
`qty` | string
`monthly_price` | number
`price_display` | string
`monthly_price_display` | string

## Example

```typescript
import type { ServerOrderIP } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 9,
  "price": 0,
  "img": ips.jpg,
  "short_desc": 1 Vlan Ip (/30),
  "long_desc": 1 IP In personal Vlan,
  "qty": 1,
  "monthly_price": 0,
  "price_display": $0.00,
  "monthly_price_display": $0.00,
} satisfies ServerOrderIP

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderIP
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


