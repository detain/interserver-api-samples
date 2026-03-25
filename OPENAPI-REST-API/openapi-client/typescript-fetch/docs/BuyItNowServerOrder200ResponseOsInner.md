
# BuyItNowServerOrder200ResponseOsInner


## Properties

Name | Type
------------ | -------------
`id` | string
`short_desc` | string
`long_desc` | string
`monthly_price` | string

## Example

```typescript
import type { BuyItNowServerOrder200ResponseOsInner } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 5,
  "short_desc": FreeBSD,
  "long_desc": Latest FreeBSD 6.x OS<br><pre>CP(s): cPanel/DirectAdmin</pre>,
  "monthly_price": 0,
} satisfies BuyItNowServerOrder200ResponseOsInner

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BuyItNowServerOrder200ResponseOsInner
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


