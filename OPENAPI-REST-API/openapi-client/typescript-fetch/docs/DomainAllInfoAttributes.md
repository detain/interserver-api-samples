
# DomainAllInfoAttributes


## Properties

Name | Type
------------ | -------------
`contact_set` | [DomainAllInfoAttributesContactSet](DomainAllInfoAttributesContactSet.md)
`registry_createdate` | string
`registry_expiredate` | string
`tld_data` | string
`let_expire` | string
`auto_renew` | string
`sponsoring_rsp` | string
`gdpr_consent_status` | string
`nameserver_list` | [Array&lt;DomainNameServer&gt;](DomainNameServer.md)
`registry_updatedate` | string
`affiliate_id` | string
`expiredate` | string

## Example

```typescript
import type { DomainAllInfoAttributes } from ''

// TODO: Update the object below with actual values
const example = {
  "contact_set": null,
  "registry_createdate": null,
  "registry_expiredate": null,
  "tld_data": null,
  "let_expire": null,
  "auto_renew": null,
  "sponsoring_rsp": null,
  "gdpr_consent_status": null,
  "nameserver_list": null,
  "registry_updatedate": null,
  "affiliate_id": null,
  "expiredate": null,
} satisfies DomainAllInfoAttributes

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainAllInfoAttributes
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


