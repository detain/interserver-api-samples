
# VpsTemplateRow

A VPS OS Template.

## Properties

Name | Type
------------ | -------------
`template_id` | string
`template_type` | string
`template_os` | string
`template_version` | string
`template_bits` | string
`template_file` | string
`template_available` | string
`template_name` | string
`template_dir` | string

## Example

```typescript
import type { VpsTemplateRow } from ''

// TODO: Update the object below with actual values
const example = {
  "template_id": null,
  "template_type": null,
  "template_os": null,
  "template_version": null,
  "template_bits": null,
  "template_file": null,
  "template_available": null,
  "template_name": null,
  "template_dir": null,
} satisfies VpsTemplateRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsTemplateRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


