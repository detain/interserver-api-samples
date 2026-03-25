
# WebsitesOrderPackagesInfo


## Properties

Name | Type
------------ | -------------
`services_id` | string
`services_name` | string
`services_cost` | string
`services_category` | string
`services_buyable` | string
`services_type` | string
`services_module` | string
`services_description` | string
`services_field1` | string
`services_field2` | string
`services_html` | string
`services_moreinfo_url` | string
`services_hidden` | string

## Example

```typescript
import type { WebsitesOrderPackagesInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "services_id": 11440,
  "services_name": DA BOOST X,
  "services_cost": 69.95,
  "services_category": 204,
  "services_buyable": 1,
  "services_type": 206,
  "services_module": webhosting,
  "services_description": Direct Admin Web hosting package with 10x more resources over our standard web hosting package.,
  "services_field1": ,
  "services_field2": BoostX,
  "services_html": ,
  "services_moreinfo_url": ,
  "services_hidden": 0,
} satisfies WebsitesOrderPackagesInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as WebsitesOrderPackagesInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


