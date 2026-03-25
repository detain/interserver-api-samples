
# ServerIpmiPowerRequest

IPMI Power command for servers

## Properties

Name | Type
------------ | -------------
`action` | string
`asset` | number

## Example

```typescript
import type { ServerIpmiPowerRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "action": on,
  "asset": 5432,
} satisfies ServerIpmiPowerRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerIpmiPowerRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


