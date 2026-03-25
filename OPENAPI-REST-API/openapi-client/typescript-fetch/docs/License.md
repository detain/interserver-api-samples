
# License


## Properties

Name | Type
------------ | -------------
`serviceInfo` | [LicenseServiceInfo](LicenseServiceInfo.md)
`client_links` | [Array&lt;LicenseClientLink&gt;](LicenseClientLink.md)
`billingDetails` | [LicenseBillingDetails](LicenseBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`_package` | string
`serviceExtra` | Array&lt;string&gt;
`extraInfoTables` | [LicenseExtraInfoTables](LicenseExtraInfoTables.md)
`service_overview_extra` | string
`serviceType` | [LicenseServiceType](LicenseServiceType.md)
`license_key` | string

## Example

```typescript
import type { License } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceInfo": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": USD,
  "custCurrencySymbol": $,
  "_package": KernelCare License,
  "serviceExtra": null,
  "extraInfoTables": null,
  "service_overview_extra": null,
  "serviceType": null,
  "license_key": ,
} satisfies License

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as License
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


