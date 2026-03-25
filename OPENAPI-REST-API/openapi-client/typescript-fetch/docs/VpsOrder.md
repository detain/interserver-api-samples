
# VpsOrder

Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.

## Properties

Name | Type
------------ | -------------
`vpsSliceSsdOvzCost` | number
`vpsSliceOvzCost` | number
`vpsSliceSsdVirtuozzoCost` | number
`vpsSliceVirtuozzoCost` | number
`vpsSliceHypervCost` | number
`vpsSliceVmwareCost` | number
`vpsSliceLxcCost` | number
`vpsSliceXenCost` | number
`vpsSliceKvmLCost` | number
`vpsSliceKvmStorageCost` | number
`vpsNyCost` | number
`vpsSliceKvmWCost` | number
`cpanelCost` | number
`daCost` | number
`ramSlice` | string
`hdSlice` | string
`hdStorageSlice` | string
`bwSlice` | string
`bwType` | string
`bwTotal` | number
`maxSlices` | string
`platformPackages` | [VpsOrderPlatformPackages](VpsOrderPlatformPackages.md)
`platformNames` | [VpsOrderPlatformNames](VpsOrderPlatformNames.md)
`packageCosts` | [VpsOrderPackageCosts](VpsOrderPackageCosts.md)
`locationStock` | [VpsOrderLocationStock](VpsOrderLocationStock.md)
`locationNames` | [VpsOrderLocationNames](VpsOrderLocationNames.md)
`osNames` | [VpsOrderOsNames](VpsOrderOsNames.md)
`templates` | [VpsOrderTemplates](VpsOrderTemplates.md)
`serviceTypes` | [VpsOrderServiceTypes](VpsOrderServiceTypes.md)
`currency` | string
`currencySymbol` | string

## Example

```typescript
import type { VpsOrder } from ''

// TODO: Update the object below with actual values
const example = {
  "vpsSliceSsdOvzCost": 9,
  "vpsSliceOvzCost": 6,
  "vpsSliceSsdVirtuozzoCost": 9,
  "vpsSliceVirtuozzoCost": 6,
  "vpsSliceHypervCost": 10,
  "vpsSliceVmwareCost": 10,
  "vpsSliceLxcCost": 6,
  "vpsSliceXenCost": 6,
  "vpsSliceKvmLCost": 6,
  "vpsSliceKvmStorageCost": 6,
  "vpsNyCost": 3,
  "vpsSliceKvmWCost": 10,
  "cpanelCost": 22,
  "daCost": 8,
  "ramSlice": 2048,
  "hdSlice": 30,
  "hdStorageSlice": 1000,
  "bwSlice": 2000,
  "bwType": 2,
  "bwTotal": 2,
  "maxSlices": 16,
  "platformPackages": null,
  "platformNames": null,
  "packageCosts": null,
  "locationStock": null,
  "locationNames": null,
  "osNames": null,
  "templates": null,
  "serviceTypes": null,
  "currency": USD,
  "currencySymbol": $,
} satisfies VpsOrder

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsOrder
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


