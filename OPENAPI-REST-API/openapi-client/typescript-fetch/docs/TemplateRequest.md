
# TemplateRequest

VPS OS Template Request

## Properties

Name | Type
------------ | -------------
`template` | string
`localPassword` | string
`password` | string

## Example

```typescript
import type { TemplateRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "template": ubuntu24,
  "localPassword": null,
  "password": myUserPassword,
} satisfies TemplateRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as TemplateRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


