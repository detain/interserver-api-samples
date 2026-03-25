
# Quickserver


## Properties

Name | Type
------------ | -------------
`serviceInfo` | [QuickserverServiceInfo](QuickserverServiceInfo.md)
`client_links` | [Array&lt;QuickserverClientLink&gt;](QuickserverClientLink.md)
`billingDetails` | [QuickserverBillingDetails](QuickserverBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`serviceMaster` | [QuickserverServiceMaster](QuickserverServiceMaster.md)
`_package` | string
`os_template` | string
`serviceExtra` | [QuickserverServiceExtra](QuickserverServiceExtra.md)
`extraInfoTables` | [QuickserverExtraInfoTables](QuickserverExtraInfoTables.md)
`cpu_graph_data` | string
`bandwidth_xaxis` | string
`bandwidth_yaxis` | string
`module` | string
`token` | string
`service_disk_used` | string
`service_disk_total` | string
`disk_percentage` | number
`memory` | string
`hdd` | string
`service_overview_extra` | Array&lt;string&gt;

## Example

```typescript
import type { Quickserver } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceInfo": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": USD,
  "custCurrencySymbol": $,
  "serviceMaster": null,
  "_package": Rapid Deploy Server,
  "os_template": Ubuntu 22.04,
  "serviceExtra": null,
  "extraInfoTables": null,
  "cpu_graph_data": {"labels":[],"value":[]},
  "bandwidth_xaxis": [],
  "bandwidth_yaxis": [],
  "module": quickservers,
  "token": %3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI,
  "service_disk_used": 0.00 GB,
  "service_disk_total": 0.00 GB,
  "disk_percentage": 32.27,
  "memory": 0GB,
  "hdd": 0GB,
  "service_overview_extra": null,
} satisfies Quickserver

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Quickserver
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


