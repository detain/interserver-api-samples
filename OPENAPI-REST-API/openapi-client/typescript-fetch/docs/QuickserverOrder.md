
# QuickserverOrder

Available QuickServer options and OS templates for ordering a new QuickServer.

## Properties

Name | Type
------------ | -------------
`qs_id` | string
`server_details` | [QuickserverOrderServerDetails](QuickserverOrderServerDetails.md)
`templates` | [QuickserverOrderTemplates](QuickserverOrderTemplates.md)
`version` | [QuickserverOrderVersion](QuickserverOrderVersion.md)
`distro_sel` | [QuickserverOrderDistroSel](QuickserverOrderDistroSel.md)

## Example

```typescript
import type { QuickserverOrder } from ''

// TODO: Update the object below with actual values
const example = {
  "qs_id": 221,
  "server_details": null,
  "templates": null,
  "version": null,
  "distro_sel": null,
} satisfies QuickserverOrder

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as QuickserverOrder
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


