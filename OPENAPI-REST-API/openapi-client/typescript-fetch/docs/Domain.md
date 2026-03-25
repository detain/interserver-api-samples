
# Domain

Full detail view of a domain service including billing, contacts, DNS, and configuration.

## Properties

Name | Type
------------ | -------------
`serviceInfo` | [DomainServiceInfo](DomainServiceInfo.md)
`serviceTypes` | [{ [key: string]: DomainServiceType; }](DomainServiceType.md)
`client_links` | [Array&lt;DomainClientLink&gt;](DomainClientLink.md)
`billingDetails` | [DomainBillingDetails](DomainBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`serviceExtra` | [DomainBillingExtra](DomainBillingExtra.md)
`extraInfoTables` | [BackupExtraInfoTables](BackupExtraInfoTables.md)
`serviceType` | [DomainServiceType](DomainServiceType.md)
`contact_details` | [DomainContactDetails](DomainContactDetails.md)
`pwarning` | string
`transfer_info` | string
`errors` | boolean
`domain_logs` | Array&lt;string&gt;
`allInfo` | [DomainAllInfo](DomainAllInfo.md)
`registrarStatus` | string
`locked` | string
`whoisPrivacy` | string
`autoRenew` | string

## Example

```typescript
import type { Domain } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceInfo": null,
  "serviceTypes": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": null,
  "custCurrencySymbol": null,
  "serviceExtra": null,
  "extraInfoTables": null,
  "serviceType": null,
  "contact_details": null,
  "pwarning": null,
  "transfer_info": null,
  "errors": null,
  "domain_logs": null,
  "allInfo": null,
  "registrarStatus": null,
  "locked": null,
  "whoisPrivacy": null,
  "autoRenew": null,
} satisfies Domain

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Domain
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


