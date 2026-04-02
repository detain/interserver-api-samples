
# ServerOrderCPU

A CPU option available when ordering a dedicated server.

## Properties

Name | Type
------------ | -------------
`id` | string
`price` | number
`img` | string
`short_desc` | string
`long_desc` | string
`location` | string
`fsb` | string
`manu` | string
`type` | string
`speed` | string
`cache` | string
`active` | string
`num_cores` | string
`num_cpus` | string
`benchmark` | string
`monthly_price` | number
`max_ram` | string
`min_ram` | string
`max_lff` | string
`max_sff` | string
`max_nve` | string
`visible` | string
`hd_ids` | string
`price_display` | string
`monthly_price_display` | string

## Example

```typescript
import type { ServerOrderCPU } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 254,
  "price": 0,
  "img": ryzen.png,
  "short_desc": AMD RYZEN 7900X,
  "long_desc": High core and thread count...,
  "location": New York,
  "fsb": null,
  "manu": null,
  "type": AMD,
  "speed": 4.7,
  "cache": null,
  "active": 1,
  "num_cores": 12,
  "num_cpus": 1,
  "benchmark": 121148,
  "monthly_price": 75,
  "max_ram": 128,
  "min_ram": 128,
  "max_lff": 4,
  "max_sff": 4,
  "max_nve": 2,
  "visible": yes,
  "hd_ids": null,
  "price_display": $0.00,
  "monthly_price_display": $75.00,
} satisfies ServerOrderCPU

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderCPU
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


