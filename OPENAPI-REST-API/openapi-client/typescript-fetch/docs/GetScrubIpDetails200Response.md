
# GetScrubIpDetails200Response


## Properties

Name | Type
------------ | -------------
`serviceInfo` | [GetScrubIpDetails200ResponseServiceInfo](GetScrubIpDetails200ResponseServiceInfo.md)
`client_links` | [Array&lt;GetScrubIpDetails200ResponseClientLinksInner&gt;](GetScrubIpDetails200ResponseClientLinksInner.md)
`billingDetails` | [GetScrubIpDetails200ResponseBillingDetails](GetScrubIpDetails200ResponseBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`_package` | string
`extraInfoTables` | [GetScrubIpDetails200ResponseExtraInfoTables](GetScrubIpDetails200ResponseExtraInfoTables.md)
`filter_firewall` | [GetScrubIpDetails200ResponseFilterFirewall](GetScrubIpDetails200ResponseFilterFirewall.md)

## Example

```typescript
import type { GetScrubIpDetails200Response } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceInfo": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": null,
  "custCurrencySymbol": null,
  "_package": null,
  "extraInfoTables": null,
  "filter_firewall": null,
} satisfies GetScrubIpDetails200Response

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as GetScrubIpDetails200Response
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


