
# DomainWhoisPrivacyRequest

Request payload for enabling or disabling Whois privacy.

## Properties

Name | Type
------------ | -------------
`func` | string
`csrf_token` | string
`domain_firstname` | string
`domain_lastname` | string
`domain_email` | string
`domain_address` | string
`domain_address2` | string
`domain_address3` | string
`domain_city` | string
`domain_state` | string
`domain_zip` | string
`domain_country` | string
`domain_phone` | string
`domain_fax` | string
`domain_company` | string
`domain_extra` | string

## Example

```typescript
import type { DomainWhoisPrivacyRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "func": enable,
  "csrf_token": null,
  "domain_firstname": null,
  "domain_lastname": null,
  "domain_email": null,
  "domain_address": null,
  "domain_address2": null,
  "domain_address3": null,
  "domain_city": null,
  "domain_state": null,
  "domain_zip": null,
  "domain_country": null,
  "domain_phone": null,
  "domain_fax": null,
  "domain_company": null,
  "domain_extra": null,
} satisfies DomainWhoisPrivacyRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainWhoisPrivacyRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


