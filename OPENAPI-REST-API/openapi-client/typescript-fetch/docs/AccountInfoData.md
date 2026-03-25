
# AccountInfoData

Detailed account profile data including contact info, billing, API keys, and security settings.

## Properties

Name | Type
------------ | -------------
`group` | string
`address` | string
`city` | string
`country` | string
`disable_cc` | string
`fraudrecord_score` | string
`ima` | string
`name` | string
`payment_method` | string
`phone` | string
`pin` | string
`state` | string
`status` | string
`zip` | string
`account_id` | string
`account_lid` | string
`address2` | string
`affiliate_dock_description` | string
`affiliate_dock_title` | string
`affiliate_payment_method` | string
`affiliate_paypal` | string
`cc` | string
`cc_auto` | string
`cc_exp` | string
`cc_type` | string
`cc_whitelist` | string
`ccs` | [AccountInfoDataCcs](AccountInfoDataCcs.md)
`ccs_added` | string
`company` | string
`currency` | string
`disable_reinstall` | string
`disable_reset` | string
`email` | string
`email_abuse` | string
`email_settings` | [AccountInfoDataEmailSettings](AccountInfoDataEmailSettings.md)
`extra` | [AccountInfoDataExtra](AccountInfoDataExtra.md)
`facebook_id` | string
`facebook_url` | string
`firstname` | string
`fraudrecord` | [AccountInfoDataFraudrecord](AccountInfoDataFraudrecord.md)
`github_id` | string
`github_url` | string
`google_id` | string
`google_url` | string
`innertell_id` | string
`lastname` | string
`locale` | string
`maxmind` | [AccountInfoMaxMindResponse](AccountInfoMaxMindResponse.md)
`maxmind_score` | string
`mb_id` | string
`modernbill_id` | string
`picture` | string
`referrer_coupon` | string
`reseller_markup` | string
`username` | string
`ssh_key` | string
`ssh_key_wrapped` | string
`api_key` | string
`api_key_wrapped` | string
`_2fa_google_key` | string
`_2fa_google_enabled` | boolean
`_2fa_google` | number
`_2fa_google_split` | string
`_2fa_google_qr` | string

## Example

```typescript
import type { AccountInfoData } from ''

// TODO: Update the object below with actual values
const example = {
  "group": null,
  "address": null,
  "city": null,
  "country": null,
  "disable_cc": null,
  "fraudrecord_score": null,
  "ima": null,
  "name": null,
  "payment_method": null,
  "phone": null,
  "pin": null,
  "state": null,
  "status": null,
  "zip": null,
  "account_id": null,
  "account_lid": null,
  "address2": null,
  "affiliate_dock_description": null,
  "affiliate_dock_title": null,
  "affiliate_payment_method": null,
  "affiliate_paypal": null,
  "cc": null,
  "cc_auto": null,
  "cc_exp": null,
  "cc_type": null,
  "cc_whitelist": null,
  "ccs": null,
  "ccs_added": null,
  "company": null,
  "currency": null,
  "disable_reinstall": null,
  "disable_reset": null,
  "email": null,
  "email_abuse": null,
  "email_settings": null,
  "extra": null,
  "facebook_id": null,
  "facebook_url": null,
  "firstname": null,
  "fraudrecord": null,
  "github_id": null,
  "github_url": null,
  "google_id": null,
  "google_url": null,
  "innertell_id": null,
  "lastname": null,
  "locale": null,
  "maxmind": null,
  "maxmind_score": null,
  "mb_id": null,
  "modernbill_id": null,
  "picture": null,
  "referrer_coupon": null,
  "reseller_markup": null,
  "username": null,
  "ssh_key": null,
  "ssh_key_wrapped": null,
  "api_key": null,
  "api_key_wrapped": null,
  "_2fa_google_key": null,
  "_2fa_google_enabled": null,
  "_2fa_google": null,
  "_2fa_google_split": null,
  "_2fa_google_qr": null,
} satisfies AccountInfoData

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AccountInfoData
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


