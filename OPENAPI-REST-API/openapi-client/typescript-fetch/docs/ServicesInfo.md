
# ServicesInfo

Contains the complete catalog of available modules, services, service types, and service categories.

## Properties

Name | Type
------------ | -------------
`modules` | [Modules](Modules.md)
`services` | [Services](Services.md)
`serviceTypes` | [ServiceTypes](ServiceTypes.md)
`serviceCategories` | [ServiceCategories](ServiceCategories.md)

## Example

```typescript
import type { ServicesInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "modules": null,
  "services": null,
  "serviceTypes": null,
  "serviceCategories": null,
} satisfies ServicesInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServicesInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


