
# ServerOrderConfigIds

Configuration IDs for the server order.

## Properties

Name | Type
------------ | -------------
`memory` | number
`bandwidth` | string
`ips` | string
`os` | string
`cp` | number
`raid` | string
`hd` | string

## Example

```typescript
import type { ServerOrderConfigIds } from ''

// TODO: Update the object below with actual values
const example = {
  "memory": 22,
  "bandwidth": 3,
  "ips": 9,
  "os": 5,
  "cp": 5,
  "raid": 0,
  "hd": 16,
} satisfies ServerOrderConfigIds

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderConfigIds
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


