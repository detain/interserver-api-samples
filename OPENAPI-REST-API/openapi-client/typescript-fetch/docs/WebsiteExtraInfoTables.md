
# WebsiteExtraInfoTables

Supplementary information tables displayed for a webhosting service (links, DNS, preview).

## Properties

Name | Type
------------ | -------------
`links` | [WebsiteTable](WebsiteTable.md)
`preview` | [WebsiteTable](WebsiteTable.md)
`dns` | [WebsiteTable](WebsiteTable.md)

## Example

```typescript
import type { WebsiteExtraInfoTables } from ''

// TODO: Update the object below with actual values
const example = {
  "links": null,
  "preview": null,
  "dns": null,
} satisfies WebsiteExtraInfoTables

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as WebsiteExtraInfoTables
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


