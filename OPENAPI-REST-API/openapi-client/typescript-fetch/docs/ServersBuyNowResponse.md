
# ServersBuyNowResponse

Success response after placing a buy-it-now dedicated server order.

## Properties

Name | Type
------------ | -------------
`success` | boolean
`text` | string
`order_details` | [ServersBuyNowResponseOrderDetails](ServersBuyNowResponseOrderDetails.md)

## Example

```typescript
import type { ServersBuyNowResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "success": true,
  "text": Server order is placed.,
  "order_details": null,
} satisfies ServersBuyNowResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServersBuyNowResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


