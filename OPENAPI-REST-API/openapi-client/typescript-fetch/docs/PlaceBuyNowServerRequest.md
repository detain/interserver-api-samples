
# PlaceBuyNowServerRequest


## Properties

Name | Type
------------ | -------------
`server_id` | number
`server_hostname` | string
`server_root_password` | string

## Example

```typescript
import type { PlaceBuyNowServerRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "server_id": 2343,
  "server_hostname": server.int.com,
  "server_root_password": uD1c!@cgD,
} satisfies PlaceBuyNowServerRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as PlaceBuyNowServerRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


