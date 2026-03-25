
# Backup

Full detail view of a backup service including billing, service info, and configuration.

## Properties

Name | Type
------------ | -------------
`serviceInfo` | [BackupServiceInfo](BackupServiceInfo.md)
`client_links` | [Array&lt;BackupClientLink&gt;](BackupClientLink.md)
`billingDetails` | [BackupBillingDetails](BackupBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`serviceMaster` | [BackupServiceMaster](BackupServiceMaster.md)
`_package` | string
`serviceExtra` | string
`extraInfoTables` | [BackupExtraInfoTables](BackupExtraInfoTables.md)

## Example

```typescript
import type { Backup } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceInfo": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": USD,
  "custCurrencySymbol": $,
  "serviceMaster": null,
  "_package": null,
  "serviceExtra": null,
  "extraInfoTables": null,
} satisfies Backup

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Backup
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


