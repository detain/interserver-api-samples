
# TicketCustomFieldDetails

Optional fields providing additional info in ticket

## Properties

Name | Type
------------ | -------------
`Customer_Server_Access` | string
`Ip_Address` | string
`Root_Password` | string
`Sudo_User` | string
`Sudo_Password` | number
`Port` | number

## Example

```typescript
import type { TicketCustomFieldDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "Customer_Server_Access": null,
  "Ip_Address": null,
  "Root_Password": null,
  "Sudo_User": null,
  "Sudo_Password": null,
  "Port": null,
} satisfies TicketCustomFieldDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as TicketCustomFieldDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


