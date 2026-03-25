
# ServerOrderControlPanel

A control panel option available when ordering a dedicated server.

## Properties

Name | Type
------------ | -------------
`id` | string
`price` | number
`img` | string
`short_desc` | string
`long_desc` | string
`os_type` | string
`monthly_price` | number
`types` | Array&lt;string&gt;
`price_display` | string
`monthly_price_display` | string

## Example

```typescript
import type { ServerOrderControlPanel } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 9,
  "price": 80,
  "img": cpanel.gif,
  "short_desc": cPanel ($45+),
  "long_desc": null,
  "os_type": null,
  "monthly_price": 0,
  "types": ["1","2","4","5","8","17","23","30","51"],
  "price_display": $80.00,
  "monthly_price_display": $0.00,
} satisfies ServerOrderControlPanel

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderControlPanel
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


