
# ServerAssets


## Properties

Name | Type
------------ | -------------
`title` | string
`size` | number
`type` | string
`header` | Array&lt;string&gt;
`rows` | Array&lt;Array&lt;string&gt;&gt;

## Example

```typescript
import type { ServerAssets } from ''

// TODO: Update the object below with actual values
const example = {
  "title": Assets,
  "size": 2,
  "type": table,
  "header": null,
  "rows": null,
} satisfies ServerAssets

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerAssets
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


