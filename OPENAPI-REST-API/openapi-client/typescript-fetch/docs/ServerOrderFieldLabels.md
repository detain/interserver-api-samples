
# ServerOrderFieldLabels

Field labels for the server order.

## Properties

Name | Type
------------ | -------------
`bandwidth` | [ServerOrderFieldLabel](ServerOrderFieldLabel.md)
`ips` | [ServerOrderFieldLabel](ServerOrderFieldLabel.md)
`os` | [ServerOrderFieldLabel](ServerOrderFieldLabel.md)
`cp` | [ServerOrderFieldLabel](ServerOrderFieldLabel.md)
`raid` | [ServerOrderFieldLabel](ServerOrderFieldLabel.md)
`memory` | [ServerOrderFieldLabel](ServerOrderFieldLabel.md)
`hd` | [ServerOrderFieldLabel](ServerOrderFieldLabel.md)

## Example

```typescript
import type { ServerOrderFieldLabels } from ''

// TODO: Update the object below with actual values
const example = {
  "bandwidth": null,
  "ips": null,
  "os": null,
  "cp": null,
  "raid": null,
  "memory": null,
  "hd": null,
} satisfies ServerOrderFieldLabels

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderFieldLabels
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


