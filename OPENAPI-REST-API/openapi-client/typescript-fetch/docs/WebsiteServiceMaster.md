
# WebsiteServiceMaster


## Properties

Name | Type
------------ | -------------
`website_id` | string
`website_name` | string
`website_ip` | string
`website_type` | string
`website_available` | string
`website_hdsize` | string
`website_hdfree` | string
`website_load` | string
`website_last_update` | string
`website_max_sites` | string
`website_order` | string
`website_partitions` | string
`website_dns1` | string
`website_dns2` | string

## Example

```typescript
import type { WebsiteServiceMaster } from ''

// TODO: Update the object below with actual values
const example = {
  "website_id": 543,
  "website_name": vda4200.is.cc,
  "website_ip": 74.50.80.15,
  "website_type": 206,
  "website_available": 0,
  "website_hdsize": 2062,
  "website_hdfree": 196,
  "website_load": 6.55,
  "website_last_update": 2023-08-17T23:01:02.000Z,
  "website_max_sites": 300,
  "website_order": 58984,
  "website_partitions": null,
  "website_dns1": vda4200a.trouble-free.net,
  "website_dns2": vda4200b.trouble-free.net,
} satisfies WebsiteServiceMaster

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as WebsiteServiceMaster
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


