
# ServerSwitchport


## Properties

Name | Type
------------ | -------------
`switchport_id` | number
`switch_id` | string
`_switch` | string
`port` | string
`blade` | string
`justport` | string
`graph_id` | string
`asset_id` | number
`vlans` | Array&lt;string&gt;
`vlans6` | Array&lt;string&gt;

## Example

```typescript
import type { ServerSwitchport } from ''

// TODO: Update the object below with actual values
const example = {
  "switchport_id": 10414,
  "switch_id": 118,
  "_switch": edge1,
  "port": Ethernet1/33,
  "blade": Ethernet1,
  "justport": 33,
  "graph_id": 12622,
  "asset_id": 3497,
  "vlans": [],
  "vlans6": [],
} satisfies ServerSwitchport

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerSwitchport
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


