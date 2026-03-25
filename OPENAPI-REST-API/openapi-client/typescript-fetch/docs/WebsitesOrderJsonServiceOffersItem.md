
# WebsitesOrderJsonServiceOffersItem


## Properties

Name | Type
------------ | -------------
`service_offer_id` | string
`service_id` | string
`intro_cost` | number
`renewal_cost` | number
`intro_frequency` | string
`renewal_frequency` | string
`allow_coupon` | string
`service_module` | string
`created_at` | string
`updated_at` | string
`deleted_at` | string
`currencySymbol` | string

## Example

```typescript
import type { WebsitesOrderJsonServiceOffersItem } from ''

// TODO: Update the object below with actual values
const example = {
  "service_offer_id": 136,
  "service_id": 1026,
  "intro_cost": 96,
  "renewal_cost": 96,
  "intro_frequency": 12,
  "renewal_frequency": 12,
  "allow_coupon": 1,
  "service_module": webhosting,
  "created_at": 2023-01-25T14:50:55.000Z,
  "updated_at": null,
  "deleted_at": null,
  "currencySymbol": $,
} satisfies WebsitesOrderJsonServiceOffersItem

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as WebsitesOrderJsonServiceOffersItem
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


