goog.provide('API.Client.MailLogEntry');

/**
 * A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.
 * @record
 */
API.Client.MailLogEntry = function() {}

/**
 * Internal auto-increment database row ID.
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.id;

/**
 * The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.id;

/**
 * SMTP envelope `MAIL FROM` address.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.from;

/**
 * SMTP envelope `RCPT TO` address.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.to;

/**
 * Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.created;

/**
 * Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters.
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.time;

/**
 * The SMTP AUTH username used to submit the message (e.g. `mb5658`).
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.user;

/**
 * SMTP transaction type negotiated with the relay.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.transtype;

/**
 * IP address of the client that submitted the message to the relay.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.origin;

/**
 * Relay interface name that accepted the message.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype._interface;

/**
 * The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.subject;

/**
 * The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.messageId;

/**
 * The sending zone assigned by the relay for outbound delivery.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.sendingZone;

/**
 * Size of the message body in bytes.
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.bodySize;

/**
 * Sequence index of this recipient in a multi-recipient message. Starts at 1.
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.seq;

/**
 * Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted.
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.delivered;

/**
 * The SMTP response code from the destination MX server (e.g. `250`).
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.code;

/**
 * The specific recipient address this delivery record is for.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.recipient;

/**
 * The full SMTP response string received from the destination MX server.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.response;

/**
 * The destination domain for this delivery attempt.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.domain;

/**
 * Whether the queue entry is currently locked for delivery processing.
 * @type {!number}
 * @export
 */
API.Client.MailLogEntry.prototype.locked;

/**
 * Millisecond-precision timestamp of the last queue lock acquisition.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.lockTime;

/**
 * The relay server node assigned to deliver this message.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.assigned;

/**
 * ISO 8601 timestamp when the message was placed into the delivery queue.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.queued;

/**
 * The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter.
 * @type {!string}
 * @export
 */
API.Client.MailLogEntry.prototype.mxHostname;

