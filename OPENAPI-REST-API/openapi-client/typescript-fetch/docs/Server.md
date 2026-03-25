
# Server


## Properties

Name | Type
------------ | -------------
`ipmiAuth` | boolean
`client_links` | [Array&lt;ServerClientLink&gt;](ServerClientLink.md)
`billingDetails` | [ServerBillingDetails](ServerBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`_package` | string
`serviceExtra` | Array&lt;string&gt;
`locations` | [ServerLocations](ServerLocations.md)
`networkInfo` | [ServerNetworkInfo](ServerNetworkInfo.md)
`extraInfoTables` | [ServerExtraInfoTables](ServerExtraInfoTables.md)
`serviceInfo` | [ServerServiceInfo](ServerServiceInfo.md)

## Example

```typescript
import type { Server } from ''

// TODO: Update the object below with actual values
const example = {
  "ipmiAuth": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": null,
  "custCurrencySymbol": null,
  "_package": null,
  "serviceExtra": null,
  "locations": null,
  "networkInfo": null,
  "extraInfoTables": null,
  "serviceInfo": null,
} satisfies Server

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Server
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


