
# ServerIpmiLiveInfo

Information about the IPMI connectioj.

## Properties

Name | Type
------------ | -------------
`text` | string
`public_ip` | string
`allowed_ip` | string
`client_username` | string
`client_password` | string

## Example

```typescript
import type { ServerIpmiLiveInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "text": null,
  "public_ip": null,
  "allowed_ip": null,
  "client_username": null,
  "client_password": null,
} satisfies ServerIpmiLiveInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerIpmiLiveInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


