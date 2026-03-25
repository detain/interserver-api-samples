
# PostOauthCallback200Response


## Properties

Name | Type
------------ | -------------
`login` | boolean
`signup` | boolean
`linked` | boolean
`account_id` | number
`error_code` | string

## Example

```typescript
import type { PostOauthCallback200Response } from ''

// TODO: Update the object below with actual values
const example = {
  "login": null,
  "signup": null,
  "linked": null,
  "account_id": null,
  "error_code": null,
} satisfies PostOauthCallback200Response

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as PostOauthCallback200Response
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


