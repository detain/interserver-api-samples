
# VpsDALicense

A DirectAdmin license tier option.

## Properties

Name | Type
------------ | -------------
`name` | string
`sub_name` | string
`cost` | number
`img_disabled` | string
`img_active` | string

## Example

```typescript
import type { VpsDALicense } from ''

// TODO: Update the object below with actual values
const example = {
  "name": null,
  "sub_name": null,
  "cost": null,
  "img_disabled": null,
  "img_active": null,
} satisfies VpsDALicense

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsDALicense
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


