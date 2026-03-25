
# ServerLease


## Properties

Name | Type
------------ | -------------
`mac` | string
`authenticated` | boolean
`group` | string

## Example

```typescript
import type { ServerLease } from ''

// TODO: Update the object below with actual values
const example = {
  "mac": 0c:c4:7a:af:35:00,
  "authenticated": false,
  "group": 1,
} satisfies ServerLease

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerLease
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


