package io.swagger.server.model


/**
 * = MailLogEntry =
 *
 * A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.
 *
 * @param _id Internal auto-increment database row ID. for example: ''103172''
 * @param id The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints. for example: ''17c7eda538e0005d03''
 * @param from SMTP envelope `MAIL FROM` address. for example: ''person@mysite.com''
 * @param to SMTP envelope `RCPT TO` address. for example: ''client@isp.com''
 * @param subject The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded. for example: ''sell 0.005 shares''
 * @param messageId The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups. for example: ''<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>''
 * @param created Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format. for example: ''2021-10-14 08:50:10''
 * @param time Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters. for example: ''1634215809''
 * @param user The SMTP AUTH username used to submit the message (e.g. `mb5658`). for example: ''mb5658''
 * @param transtype SMTP transaction type negotiated with the relay. for example: ''ESMTPSA''
 * @param origin IP address of the client that submitted the message to the relay. for example: ''199.231.189.154''
 * @param interface Relay interface name that accepted the message. for example: ''feeder''
 * @param sendingZone The sending zone assigned by the relay for outbound delivery. for example: ''interserver''
 * @param bodySize Size of the message body in bytes. for example: ''63''
 * @param seq Sequence index of this recipient in a multi-recipient message. Starts at 1. for example: ''1''
 * @param delivered Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted. for example: ''1''
 * @param code The SMTP response code from the destination MX server (e.g. `250`). for example: ''250''
 * @param recipient The specific recipient address this delivery record is for. for example: ''client@isp.com''
 * @param response The full SMTP response string received from the destination MX server. for example: ''250 2.0.0 Ok queued as C91D83E128C''
 * @param domain The destination domain for this delivery attempt. for example: ''interserver.net''
 * @param locked Whether the queue entry is currently locked for delivery processing. for example: ''1''
 * @param lockTime Millisecond-precision timestamp of the last queue lock acquisition. for example: ''1634215818533''
 * @param assigned The relay server node assigned to deliver this message. for example: ''relay1''
 * @param queued ISO 8601 timestamp when the message was placed into the delivery queue. for example: ''2021-10-14T12:50:15.487Z''
 * @param mxHostname The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter. for example: ''mx.j.is.cc''
 */
case class MailLogEntry (
  _id: Int,
  id: String,
  from: String,
  to: String,
  subject: Option[String],
  messageId: Option[String],
  created: String,
  time: Int,
  user: String,
  transtype: String,
  origin: String,
  interface: String,
  sendingZone: Option[String],
  bodySize: Option[Int],
  seq: Option[Int],
  delivered: Option[Int],
  code: Option[Int],
  recipient: Option[String],
  response: Option[String],
  domain: Option[String],
  locked: Option[Int],
  lockTime: Option[String],
  assigned: Option[String],
  queued: Option[String],
  mxHostname: Option[String]
)

