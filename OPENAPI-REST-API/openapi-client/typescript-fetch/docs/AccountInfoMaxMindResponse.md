
# AccountInfoMaxMindResponse

MaxMind fraud detection scoring data for a credit card transaction.

## Properties

Name | Type
------------ | -------------
`distance` | string
`countryMatch` | string
`countryCode` | string
`freeMail` | string
`anonymousProxy` | string
`score` | string
`binMatch` | string
`binCountry` | string
`err` | string
`proxyScore` | string
`ip_region` | string
`ip_city` | string
`ip_latitude` | string
`ip_longitude` | string
`binName` | string
`ip_isp` | string
`ip_org` | string
`binNameMatch` | string
`binPhoneMatch` | string
`binPhone` | string
`custPhoneInBillingLoc` | string
`highRiskCountry` | string
`queriesRemaining` | string
`cityPostalMatch` | string
`shipCityPostalMatch` | string
`maxmindID` | string
`ip_asnum` | string
`ip_userType` | string
`ip_countryConf` | string
`ip_regionConf` | string
`ip_cityConf` | string
`ip_postalCode` | string
`ip_postalConf` | string
`ip_accuracyRadius` | string
`ip_netSpeedCell` | string
`ip_metroCode` | string
`ip_areaCode` | string
`ip_timeZone` | string
`ip_regionName` | string
`ip_domain` | string
`ip_countryName` | string
`ip_continentCode` | string
`ip_corporateProxy` | string
`carderEmail` | string
`highRiskUsername` | string
`highRiskPassword` | string
`riskScore` | [AccountInfoMaxMindResponseRiskScore](AccountInfoMaxMindResponseRiskScore.md)
`isTransProxy` | string
`prepaid` | string
`minfraud_version` | string
`service_level` | string
`explanation` | string
`female_name` | string

## Example

```typescript
import type { AccountInfoMaxMindResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "distance": null,
  "countryMatch": null,
  "countryCode": null,
  "freeMail": null,
  "anonymousProxy": null,
  "score": null,
  "binMatch": null,
  "binCountry": null,
  "err": null,
  "proxyScore": null,
  "ip_region": null,
  "ip_city": null,
  "ip_latitude": null,
  "ip_longitude": null,
  "binName": null,
  "ip_isp": null,
  "ip_org": null,
  "binNameMatch": null,
  "binPhoneMatch": null,
  "binPhone": null,
  "custPhoneInBillingLoc": null,
  "highRiskCountry": null,
  "queriesRemaining": null,
  "cityPostalMatch": null,
  "shipCityPostalMatch": null,
  "maxmindID": null,
  "ip_asnum": null,
  "ip_userType": null,
  "ip_countryConf": null,
  "ip_regionConf": null,
  "ip_cityConf": null,
  "ip_postalCode": null,
  "ip_postalConf": null,
  "ip_accuracyRadius": null,
  "ip_netSpeedCell": null,
  "ip_metroCode": null,
  "ip_areaCode": null,
  "ip_timeZone": null,
  "ip_regionName": null,
  "ip_domain": null,
  "ip_countryName": null,
  "ip_continentCode": null,
  "ip_corporateProxy": null,
  "carderEmail": null,
  "highRiskUsername": null,
  "highRiskPassword": null,
  "riskScore": null,
  "isTransProxy": null,
  "prepaid": null,
  "minfraud_version": null,
  "service_level": null,
  "explanation": null,
  "female_name": null,
} satisfies AccountInfoMaxMindResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AccountInfoMaxMindResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


