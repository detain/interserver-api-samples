
# HomeServices

Users services.

## Properties

Name | Type
------------ | -------------
`domains` | [HomeServicesDomains](HomeServicesDomains.md)
`webhosting` | [HomeServicesWebhosting](HomeServicesWebhosting.md)
`vps` | [HomeServicesVps](HomeServicesVps.md)
`licenses` | [HomeServicesLicenses](HomeServicesLicenses.md)
`servers` | [HomeServicesServers](HomeServicesServers.md)
`backups` | [HomeServicesBackups](HomeServicesBackups.md)

## Example

```typescript
import type { HomeServices } from ''

// TODO: Update the object below with actual values
const example = {
  "domains": null,
  "webhosting": null,
  "vps": null,
  "licenses": null,
  "servers": null,
  "backups": null,
} satisfies HomeServices

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HomeServices
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


