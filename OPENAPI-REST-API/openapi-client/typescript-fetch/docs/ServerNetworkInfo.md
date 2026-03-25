
# ServerNetworkInfo


## Properties

Name | Type
------------ | -------------
`vlans` | Array&lt;string&gt;
`vlans6` | Array&lt;string&gt;
`assets` | [ServerNetworkInfoAssets](ServerNetworkInfoAssets.md)
`switchports` | [ServerNetworkInfoSwitchports](ServerNetworkInfoSwitchports.md)

## Example

```typescript
import type { ServerNetworkInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "vlans": [],
  "vlans6": [],
  "assets": null,
  "switchports": null,
} satisfies ServerNetworkInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerNetworkInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


