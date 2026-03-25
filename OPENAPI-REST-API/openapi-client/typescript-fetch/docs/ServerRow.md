
# ServerRow

A result row from the `Servers` `GET` request.

## Properties

Name | Type
------------ | -------------
`server_id` | string
`account_lid` | string
`server_hostname` | string
`server_status` | string

## Example

```typescript
import type { ServerRow } from ''

// TODO: Update the object below with actual values
const example = {
  "server_id": 8404,
  "account_lid": detain@interserver.net,
  "server_hostname": testsignup.is.net,
  "server_status": deleted,
} satisfies ServerRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


