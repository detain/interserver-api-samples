
# UpdateTicket

Update custom fields of the ticket

## Properties

Name | Type
------------ | -------------
`ip` | string
`ip_address` | string
`customer_server_access` | string
`root_password` | string
`sudo_username` | string
`sudo_password` | string
`port` | number

## Example

```typescript
import type { UpdateTicket } from ''

// TODO: Update the object below with actual values
const example = {
  "ip": null,
  "ip_address": null,
  "customer_server_access": null,
  "root_password": null,
  "sudo_username": null,
  "sudo_password": null,
  "port": null,
} satisfies UpdateTicket

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as UpdateTicket
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


