
# ServersBuyNowError

Error response when a buy-it-now server order fails validation.

## Properties

Name | Type
------------ | -------------
`success` | boolean
`text` | string
`errors` | Array&lt;string&gt;

## Example

```typescript
import type { ServersBuyNowError } from ''

// TODO: Update the object below with actual values
const example = {
  "success": false,
  "text": Unable to place order.,
  "errors": ["Server ID is missing.","Server Hostname is missing.;","Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number & one special character"],
} satisfies ServersBuyNowError

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServersBuyNowError
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


