
# HomeDetailsModules


## Properties

Name | Type
------------ | -------------
`domains` | [HomeDetailsModulesDomains](HomeDetailsModulesDomains.md)
`webhosting` | [HomeDetailsModulesWebhosting](HomeDetailsModulesWebhosting.md)
`vps` | [HomeDetailsModulesVps](HomeDetailsModulesVps.md)
`licenses` | [HomeDetailsModulesLicenses](HomeDetailsModulesLicenses.md)
`backups` | [HomeDetailsModulesBackups](HomeDetailsModulesBackups.md)
`servers` | [HomeDetailsModulesServers](HomeDetailsModulesServers.md)
`quickservers` | [HomeDetailsModulesQuickservers](HomeDetailsModulesQuickservers.md)

## Example

```typescript
import type { HomeDetailsModules } from ''

// TODO: Update the object below with actual values
const example = {
  "domains": null,
  "webhosting": null,
  "vps": null,
  "licenses": null,
  "backups": null,
  "servers": null,
  "quickservers": null,
} satisfies HomeDetailsModules

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HomeDetailsModules
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


