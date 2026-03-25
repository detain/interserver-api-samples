
# CpuWithDefaults


## Properties

Name | Type
------------ | -------------
`id` | number
`short_desc` | string
`long_desc` | string
`type` | string
`speed` | string
`num_cores` | string
`num_cpus` | string
`benchmark` | string
`monthly_price` | number
`monthly_price_display` | string
`max_ram` | string
`min_ram` | string
`max_lff` | string
`max_sff` | string
`max_nve` | string
`visible` | string
`active` | string
`memory_det` | [MemoryOption](MemoryOption.md)
`hd_det` | [HardDrive](HardDrive.md)
`monthly_fee` | string

## Example

```typescript
import type { CpuWithDefaults } from ''

// TODO: Update the object below with actual values
const example = {
  "id": null,
  "short_desc": null,
  "long_desc": null,
  "type": null,
  "speed": null,
  "num_cores": null,
  "num_cpus": null,
  "benchmark": null,
  "monthly_price": null,
  "monthly_price_display": null,
  "max_ram": null,
  "min_ram": null,
  "max_lff": null,
  "max_sff": null,
  "max_nve": null,
  "visible": null,
  "active": null,
  "memory_det": null,
  "hd_det": null,
  "monthly_fee": null,
} satisfies CpuWithDefaults

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as CpuWithDefaults
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


