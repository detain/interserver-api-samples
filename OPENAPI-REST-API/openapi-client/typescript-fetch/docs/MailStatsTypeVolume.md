
# MailStatsTypeVolume


## Properties

Name | Type
------------ | -------------
`to` | [MailStatsTypeVolumeTo](MailStatsTypeVolumeTo.md)
`from` | [MailStatsTypeVolumeFrom](MailStatsTypeVolumeFrom.md)
`ip` | [MailStatsTypeVolumeIp](MailStatsTypeVolumeIp.md)

## Example

```typescript
import type { MailStatsTypeVolume } from ''

// TODO: Update the object below with actual values
const example = {
  "to": null,
  "from": null,
  "ip": null,
} satisfies MailStatsTypeVolume

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailStatsTypeVolume
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


