
# ServerOrderBandwidth

A bandwidth option available when ordering a dedicated server.

## Properties

Name | Type
------------ | -------------
`id` | string
`price` | number
`img` | string
`short_desc` | string
`long_desc` | string
`type` | string
`qty` | string
`active` | string
`monthly_price` | number
`price_display` | string
`monthly_price_display` | string

## Example

```typescript
import type { ServerOrderBandwidth } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 15,
  "price": 0,
  "img": bandwidth.jpg,
  "short_desc": 150TB (10Gb Port),
  "long_desc":  - 2000GB Bandwidth...,
  "type": Standard,
  "qty": 4000,
  "active": 1,
  "monthly_price": 15,
  "price_display": $0.00,
  "monthly_price_display": $15.00,
} satisfies ServerOrderBandwidth

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderBandwidth
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


