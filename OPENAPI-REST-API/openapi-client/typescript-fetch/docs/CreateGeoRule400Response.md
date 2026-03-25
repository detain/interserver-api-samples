
# CreateGeoRule400Response


## Properties

Name | Type
------------ | -------------
`success` | boolean
`text` | string
`errors` | Array&lt;string&gt;

## Example

```typescript
import type { CreateGeoRule400Response } from ''

// TODO: Update the object below with actual values
const example = {
  "success": false,
  "text": Bad Request,
  "errors": null,
} satisfies CreateGeoRule400Response

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as CreateGeoRule400Response
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


