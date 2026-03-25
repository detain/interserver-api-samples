
# Vps


## Properties

Name | Type
------------ | -------------
`serviceInfo` | [VpsServiceInfo](VpsServiceInfo.md)
`client_links` | [Array&lt;VpsClientLink&gt;](VpsClientLink.md)
`billingDetails` | [VpsBillingDetails](VpsBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`serviceMaster` | [VpsServiceMaster](VpsServiceMaster.md)
`_package` | string
`serviceExtra` | [VpsServiceExtra](VpsServiceExtra.md)
`extraInfoTables` | [VpsExtraInfoTables](VpsExtraInfoTables.md)
`module` | string
`token` | string
`da_link` | number
`sr_link` | number
`cp_data` | [VpsCPData](VpsCPData.md)
`da_data` | [VpsDAData](VpsDAData.md)
`plesk12_data` | [VpsPlesk12Data](VpsPlesk12Data.md)
`serviceAddons` | [VpsServiceAddons](VpsServiceAddons.md)
`os_template` | string
`cpu_graph_data` | any

## Example

```typescript
import type { Vps } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceInfo": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": null,
  "custCurrencySymbol": null,
  "serviceMaster": null,
  "_package": null,
  "serviceExtra": null,
  "extraInfoTables": null,
  "module": null,
  "token": null,
  "da_link": null,
  "sr_link": null,
  "cp_data": null,
  "da_data": null,
  "plesk12_data": null,
  "serviceAddons": null,
  "os_template": null,
  "cpu_graph_data": null,
} satisfies Vps

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Vps
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


