
# VpsSnapshot

A VPS snapshot (point-in-time backup) stored on the host node.

## Properties

Name | Type
------------ | -------------
`name` | string
`used` | number
`date` | number

## Example

```typescript
import type { VpsSnapshot } from ''

// TODO: Update the object below with actual values
const example = {
  "name": null,
  "used": null,
  "date": null,
} satisfies VpsSnapshot

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsSnapshot
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


