
# VpsIPInfo

IP address information table for a VPS service.

## Properties

Name | Type
------------ | -------------
`title` | string
`rows` | [Array&lt;VpsIPInfoRow&gt;](VpsIPInfoRow.md)

## Example

```typescript
import type { VpsIPInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "title": IP Information,
  "rows": null,
} satisfies VpsIPInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsIPInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


