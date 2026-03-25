
# LicenseClientLink


## Properties

Name | Type
------------ | -------------
`label` | string
`link` | string
`icon` | string
`help_text` | string
`icon_text` | string
`other_attr` | string

## Example

```typescript
import type { LicenseClientLink } from ''

// TODO: Update the object below with actual values
const example = {
  "label": Invoices,
  "link": invoices,
  "icon": fas fa-file-invoice-dollar fa-w-12,
  "help_text": Invoice History,
  "icon_text": ,
  "other_attr": ,
} satisfies LicenseClientLink

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LicenseClientLink
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


