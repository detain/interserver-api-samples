
# Website

Full detail view of a webhosting service including billing, service configuration, and panel access links.

## Properties

Name | Type
------------ | -------------
`serviceInfo` | [WebsiteServiceInfo](WebsiteServiceInfo.md)
`client_links` | [Array&lt;WebsiteClientLink&gt;](WebsiteClientLink.md)
`billingDetails` | [WebsiteBillingDetails](WebsiteBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`serviceMaster` | [WebsiteServiceMaster](WebsiteServiceMaster.md)
`_package` | string
`serviceExtra` | Array&lt;object&gt;
`extraInfoTables` | [WebsiteExtraInfoTables](WebsiteExtraInfoTables.md)

## Example

```typescript
import type { Website } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceInfo": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": USD,
  "custCurrencySymbol": $,
  "serviceMaster": null,
  "_package": Web Hosting Direct Admin,
  "serviceExtra": null,
  "extraInfoTables": null,
} satisfies Website

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Website
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


