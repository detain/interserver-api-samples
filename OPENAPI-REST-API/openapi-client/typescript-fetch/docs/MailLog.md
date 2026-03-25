
# MailLog

Paginated mail log response.  Contains the full matched count (`total`) plus a page of `MailLogEntry` records.  The `total` reflects the grouping mode: with `groupby=recipient` it counts delivery attempts, with `groupby=message` it counts unique messages.

## Properties

Name | Type
------------ | -------------
`total` | number
`skip` | number
`limit` | number
`emails` | [Array&lt;MailLogEntry&gt;](MailLogEntry.md)

## Example

```typescript
import type { MailLog } from ''

// TODO: Update the object below with actual values
const example = {
  "total": 10234,
  "skip": 0,
  "limit": 100,
  "emails": [{"_id":103172,"id":"17c7eda538e0005d03","from":"person@mysite.com","to":"client@isp.com","subject":"sell 0.005 shares","messageId":"<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>","created":"2021-10-14 08:50:10","time":1634215809,"user":"mb5658","transtype":"ESMTPSA","origin":"199.231.189.154","interface":"feeder","sendingZone":"interserver","bodySize":63,"seq":1,"delivered":1,"code":250,"recipient":"client@isp.com","domain":"interserver.net","locked":1,"lockTime":"1634215818533","assigned":"relay1","queued":"2021-10-14T12:50:15.487Z","mxHostname":"mx.j.is.cc","response":"250 2.0.0 Ok queued as C91D83E128C"}],
} satisfies MailLog

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailLog
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


