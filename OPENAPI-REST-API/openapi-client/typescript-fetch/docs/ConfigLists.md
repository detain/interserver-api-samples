
# ConfigLists

All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.

## Properties

Name | Type
------------ | -------------
`cpu_li` | [{ [key: string]: Cpu; }](Cpu.md)
`memory_li` | { [key: string]: { [key: string]: MemoryOption; }; }
`hd_li` | { [key: string]: { [key: string]: HardDrive; }; }
`bandwidth_li` | [{ [key: string]: Bandwidth; }](Bandwidth.md)
`ips_li` | [{ [key: string]: IpBlock; }](IpBlock.md)
`os_li` | [{ [key: string]: OperatingSystem; }](OperatingSystem.md)
`cp_li` | [{ [key: string]: ControlPanel; }](ControlPanel.md)
`raid_li` | [Array&lt;RaidOption&gt;](RaidOption.md)

## Example

```typescript
import type { ConfigLists } from ''

// TODO: Update the object below with actual values
const example = {
  "cpu_li": null,
  "memory_li": null,
  "hd_li": null,
  "bandwidth_li": null,
  "ips_li": null,
  "os_li": null,
  "cp_li": null,
  "raid_li": null,
} satisfies ConfigLists

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ConfigLists
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


