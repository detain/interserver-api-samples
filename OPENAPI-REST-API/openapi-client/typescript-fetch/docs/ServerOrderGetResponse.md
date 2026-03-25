
# ServerOrderGetResponse

Configuration options and pricing data returned when starting a dedicated server order.

## Properties

Name | Type
------------ | -------------
`form_values` | [FormValues](FormValues.md)
`config_ids` | [ConfigIds](ConfigIds.md)
`cpu` | number
`cpu_li` | [{ [key: string]: Cpu; }](Cpu.md)
`config_li` | [ConfigLists](ConfigLists.md)
`frequency` | number
`currency` | string
`country` | string
`step` | string
`field_label` | [{ [key: string]: FieldLabel; }](FieldLabel.md)
`cpu_cores` | { [key: string]: { [key: string]: CpuWithDefaults; }; }
`currencySymbol` | string
`custid` | number
`ima` | string
`regions` | [Array&lt;Region&gt;](Region.md)
`asset_servers` | [Array&lt;AssetServer&gt;](AssetServer.md)
`buy_it_servers` | Array&lt;object&gt;
`display_showmore` | string
`cust_discount` | number

## Example

```typescript
import type { ServerOrderGetResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "form_values": null,
  "config_ids": null,
  "cpu": null,
  "cpu_li": null,
  "config_li": null,
  "frequency": null,
  "currency": null,
  "country": null,
  "step": null,
  "field_label": null,
  "cpu_cores": null,
  "currencySymbol": null,
  "custid": null,
  "ima": null,
  "regions": null,
  "asset_servers": null,
  "buy_it_servers": null,
  "display_showmore": null,
  "cust_discount": null,
} satisfies ServerOrderGetResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServerOrderGetResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


