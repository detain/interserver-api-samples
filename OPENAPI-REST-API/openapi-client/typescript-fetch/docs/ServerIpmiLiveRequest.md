
# ServerIpmiLiveRequest

Request body to setup an IPMI Live connection.

## Properties

Name | Type
------------ | -------------
`ip` | string
`asset` | number

## Example

```typescript
import type { ServerIpmiLiveRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "ip": 1.2.3.4,
  "asset": 5431,
} satisfies ServerIpmiLiveRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerIpmiLiveRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


