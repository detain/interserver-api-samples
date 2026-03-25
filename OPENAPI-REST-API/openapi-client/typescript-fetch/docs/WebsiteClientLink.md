
# WebsiteClientLink

A navigation link for webhosting-related actions in the client portal.

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
import type { WebsiteClientLink } from ''

// TODO: Update the object below with actual values
const example = {
  "label": null,
  "link": null,
  "icon": null,
  "icon_text": null,
  "help_text": null,
  "other_attr": null,
} satisfies WebsiteClientLink

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as WebsiteClientLink
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


