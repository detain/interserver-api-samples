
# MailSchemaExtraInfoTables

Additional information tables for the mail service.

## Properties

Name | Type
------------ | -------------
`mail` | [MailExtraInfoTable](MailExtraInfoTable.md)
`tutorials` | [MailTutorialsTable](MailTutorialsTable.md)

## Example

```typescript
import type { MailSchemaExtraInfoTables } from ''

// TODO: Update the object below with actual values
const example = {
  "mail": null,
  "tutorials": null,
} satisfies MailSchemaExtraInfoTables

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailSchemaExtraInfoTables
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


