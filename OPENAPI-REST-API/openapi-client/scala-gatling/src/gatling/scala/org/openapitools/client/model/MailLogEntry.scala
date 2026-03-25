
package org.openapitools.client.model


case class MailLogEntry (
    /* Internal auto-increment database row ID. */
    __id: Integer,
    /* The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints. */
    _id: String,
    /* SMTP envelope `MAIL FROM` address. */
    _from: String,
    /* SMTP envelope `RCPT TO` address. */
    _to: String,
    /* Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format. */
    _created: String,
    /* Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters. */
    _time: Integer,
    /* The SMTP AUTH username used to submit the message (e.g. `mb5658`). */
    _user: String,
    /* SMTP transaction type negotiated with the relay. */
    _transtype: String,
    /* IP address of the client that submitted the message to the relay. */
    _origin: String,
    /* Relay interface name that accepted the message. */
    _interface: String,
    /* The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded. */
    _subject: Option[String],
    /* The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups. */
    _messageId: Option[String],
    /* The sending zone assigned by the relay for outbound delivery. */
    _sendingZone: Option[String],
    /* Size of the message body in bytes. */
    _bodySize: Option[Integer],
    /* Sequence index of this recipient in a multi-recipient message. Starts at 1. */
    _seq: Option[Integer],
    /* Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted. */
    _delivered: Option[Integer],
    /* The SMTP response code from the destination MX server (e.g. `250`). */
    _code: Option[Integer],
    /* The specific recipient address this delivery record is for. */
    _recipient: Option[String],
    /* The full SMTP response string received from the destination MX server. */
    _response: Option[String],
    /* The destination domain for this delivery attempt. */
    _domain: Option[String],
    /* Whether the queue entry is currently locked for delivery processing. */
    _locked: Option[Integer],
    /* Millisecond-precision timestamp of the last queue lock acquisition. */
    _lockTime: Option[String],
    /* The relay server node assigned to deliver this message. */
    _assigned: Option[String],
    /* ISO 8601 timestamp when the message was placed into the delivery queue. */
    _queued: Option[String],
    /* The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter. */
    _mxHostname: Option[String]
)
object MailLogEntry {
    def toStringBody(var__id: Object, var_id: Object, var_from: Object, var_to: Object, var_created: Object, var_time: Object, var_user: Object, var_transtype: Object, var_origin: Object, var_interface: Object, var_subject: Object, var_messageId: Object, var_sendingZone: Object, var_bodySize: Object, var_seq: Object, var_delivered: Object, var_code: Object, var_recipient: Object, var_response: Object, var_domain: Object, var_locked: Object, var_lockTime: Object, var_assigned: Object, var_queued: Object, var_mxHostname: Object) =
        s"""
        | {
        | "_id":$var__id,"id":$var_id,"from":$var_from,"to":$var_to,"created":$var_created,"time":$var_time,"user":$var_user,"transtype":$var_transtype,"origin":$var_origin,"interface":$var_interface,"subject":$var_subject,"messageId":$var_messageId,"sendingZone":$var_sendingZone,"bodySize":$var_bodySize,"seq":$var_seq,"delivered":$var_delivered,"code":$var_code,"recipient":$var_recipient,"response":$var_response,"domain":$var_domain,"locked":$var_locked,"lockTime":$var_lockTime,"assigned":$var_assigned,"queued":$var_queued,"mxHostname":$var_mxHostname
        | }
        """.stripMargin
}
