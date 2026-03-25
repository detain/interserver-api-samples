
# MailLogEntry

A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.

## Properties

Name | Type
------------ | -------------
`_id` | number
`id` | string
`from` | string
`to` | string
`created` | string
`time` | number
`user` | string
`transtype` | string
`origin` | string
`_interface` | string
`subject` | string
`messageId` | string
`sendingZone` | string
`bodySize` | number
`seq` | number
`delivered` | number
`code` | number
`recipient` | string
`response` | string
`domain` | string
`locked` | number
`lockTime` | string
`assigned` | string
`queued` | string
`mxHostname` | string

## Example

```typescript
import type { MailLogEntry } from ''

// TODO: Update the object below with actual values
const example = {
  "_id": 103172,
  "id": 17c7eda538e0005d03,
  "from": person@mysite.com,
  "to": client@isp.com,
  "created": 2021-10-14 08:50:10,
  "time": 1634215809,
  "user": mb5658,
  "transtype": ESMTPSA,
  "origin": 199.231.189.154,
  "_interface": feeder,
  "subject": sell 0.005 shares,
  "messageId": <vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>,
  "sendingZone": interserver,
  "bodySize": 63,
  "seq": 1,
  "delivered": 1,
  "code": 250,
  "recipient": client@isp.com,
  "response": 250 2.0.0 Ok queued as C91D83E128C,
  "domain": interserver.net,
  "locked": 1,
  "lockTime": 1634215818533,
  "assigned": relay1,
  "queued": 2021-10-14T12:50:15.487Z,
  "mxHostname": mx.j.is.cc,
} satisfies MailLogEntry

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailLogEntry
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


