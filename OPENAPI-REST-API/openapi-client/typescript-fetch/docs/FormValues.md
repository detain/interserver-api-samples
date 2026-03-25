
# FormValues

Currently selected configuration option IDs for a server order form.

## Properties

Name | Type
------------ | -------------
`memory` | number
`bandwidth` | number
`ips` | number
`os` | number
`cp` | number
`raid` | number
`hd` | number
`region` | number

## Example

```typescript
import type { FormValues } from ''

// TODO: Update the object below with actual values
const example = {
  "memory": null,
  "bandwidth": null,
  "ips": null,
  "os": null,
  "cp": null,
  "raid": null,
  "hd": null,
  "region": null,
} satisfies FormValues

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as FormValues
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


