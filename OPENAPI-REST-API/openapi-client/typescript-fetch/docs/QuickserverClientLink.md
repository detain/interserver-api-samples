
# QuickserverClientLink

A navigation link for QuickServer-related actions in the client portal.

## Properties

Name | Type
------------ | -------------
`label` | string
`link` | string
`icon` | string
`icon_text` | string
`help_text` | string
`other_attr` | string

## Example

```typescript
import type { QuickserverClientLink } from ''

// TODO: Update the object below with actual values
const example = {
  "label": Invoices,
  "link": invoices,
  "icon": fas fa-file-invoice-dollar fa-w-12,
  "icon_text": ,
  "help_text": Invoice History,
  "other_attr": null,
} satisfies QuickserverClientLink

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as QuickserverClientLink
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


