package org.openapitools.model;

import org.openapitools.jackson.nullable.JsonNullable;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.
 */
@ApiModel(description="A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.")

public class MailLogEntry  {
  
 /**
  * Internal auto-increment database row ID.
  */
  @ApiModelProperty(example = "103172", required = true, value = "Internal auto-increment database row ID.")

  private Integer id;

 /**
  * The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints.
  */
  @ApiModelProperty(example = "17c7eda538e0005d03", required = true, value = "The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints.")

  private String id;

 /**
  * SMTP envelope `MAIL FROM` address.
  */
  @ApiModelProperty(example = "person@mysite.com", required = true, value = "SMTP envelope `MAIL FROM` address.")

  private String from;

 /**
  * SMTP envelope `RCPT TO` address.
  */
  @ApiModelProperty(example = "client@isp.com", required = true, value = "SMTP envelope `RCPT TO` address.")

  private String to;

 /**
  * Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format.
  */
  @ApiModelProperty(example = "2021-10-14 08:50:10", required = true, value = "Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format.")

  private String created;

 /**
  * Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters.
  */
  @ApiModelProperty(example = "1634215809", required = true, value = "Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters.")

  private Integer time;

 /**
  * The SMTP AUTH username used to submit the message (e.g. `mb5658`).
  */
  @ApiModelProperty(example = "mb5658", required = true, value = "The SMTP AUTH username used to submit the message (e.g. `mb5658`).")

  private String user;

 /**
  * SMTP transaction type negotiated with the relay.
  */
  @ApiModelProperty(example = "ESMTPSA", required = true, value = "SMTP transaction type negotiated with the relay.")

  private String transtype;

 /**
  * IP address of the client that submitted the message to the relay.
  */
  @ApiModelProperty(example = "199.231.189.154", required = true, value = "IP address of the client that submitted the message to the relay.")

  private String origin;

 /**
  * Relay interface name that accepted the message.
  */
  @ApiModelProperty(example = "feeder", required = true, value = "Relay interface name that accepted the message.")

  private String _interface;

 /**
  * The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.
  */
  @ApiModelProperty(example = "sell 0.005 shares", value = "The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.")

  private String subject;

 /**
  * The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups.
  */
  @ApiModelProperty(example = "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>", value = "The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups.")

  private String messageId;

 /**
  * The sending zone assigned by the relay for outbound delivery.
  */
  @ApiModelProperty(example = "interserver", value = "The sending zone assigned by the relay for outbound delivery.")

  private String sendingZone;

 /**
  * Size of the message body in bytes.
  */
  @ApiModelProperty(example = "63", value = "Size of the message body in bytes.")

  private Integer bodySize;

 /**
  * Sequence index of this recipient in a multi-recipient message. Starts at 1.
  */
  @ApiModelProperty(example = "1", value = "Sequence index of this recipient in a multi-recipient message. Starts at 1.")

  private Integer seq;

 /**
  * Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted.
  */
  @ApiModelProperty(example = "1", value = "Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted.")

  private Integer delivered;

 /**
  * The SMTP response code from the destination MX server (e.g. `250`).
  */
  @ApiModelProperty(example = "250", value = "The SMTP response code from the destination MX server (e.g. `250`).")

  private Integer code;

 /**
  * The specific recipient address this delivery record is for.
  */
  @ApiModelProperty(example = "client@isp.com", value = "The specific recipient address this delivery record is for.")

  private String recipient;

 /**
  * The full SMTP response string received from the destination MX server.
  */
  @ApiModelProperty(example = "250 2.0.0 Ok queued as C91D83E128C", value = "The full SMTP response string received from the destination MX server.")

  private String response;

 /**
  * The destination domain for this delivery attempt.
  */
  @ApiModelProperty(example = "interserver.net", value = "The destination domain for this delivery attempt.")

  private String domain;

 /**
  * Whether the queue entry is currently locked for delivery processing.
  */
  @ApiModelProperty(example = "1", value = "Whether the queue entry is currently locked for delivery processing.")

  private Integer locked;

 /**
  * Millisecond-precision timestamp of the last queue lock acquisition.
  */
  @ApiModelProperty(example = "1634215818533", value = "Millisecond-precision timestamp of the last queue lock acquisition.")

  private String lockTime;

 /**
  * The relay server node assigned to deliver this message.
  */
  @ApiModelProperty(example = "relay1", value = "The relay server node assigned to deliver this message.")

  private String assigned;

 /**
  * ISO 8601 timestamp when the message was placed into the delivery queue.
  */
  @ApiModelProperty(example = "2021-10-14T12:50:15.487Z", value = "ISO 8601 timestamp when the message was placed into the delivery queue.")

  private String queued;

 /**
  * The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter.
  */
  @ApiModelProperty(example = "mx.j.is.cc", value = "The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter.")

  private String mxHostname;
 /**
   * Internal auto-increment database row ID.
   * @return id
  **/
  @JsonProperty("_id")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public MailLogEntry id(Integer id) {
    this.id = id;
    return this;
  }

 /**
   * The relay-assigned mail ID (18-19 hex characters).  Matches the &#x60;mailid&#x60; filter parameter and the &#x60;text&#x60; value returned by send endpoints.
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public MailLogEntry id(String id) {
    this.id = id;
    return this;
  }

 /**
   * SMTP envelope &#x60;MAIL FROM&#x60; address.
   * @return from
  **/
  @JsonProperty("from")
  public String getFrom() {
    return from;
  }

  public void setFrom(String from) {
    this.from = from;
  }

  public MailLogEntry from(String from) {
    this.from = from;
    return this;
  }

 /**
   * SMTP envelope &#x60;RCPT TO&#x60; address.
   * @return to
  **/
  @JsonProperty("to")
  public String getTo() {
    return to;
  }

  public void setTo(String to) {
    this.to = to;
  }

  public MailLogEntry to(String to) {
    this.to = to;
    return this;
  }

 /**
   * Human-readable creation timestamp in &#x60;YYYY-MM-DD HH:MM:SS&#x60; format.
   * @return created
  **/
  @JsonProperty("created")
  public String getCreated() {
    return created;
  }

  public void setCreated(String created) {
    this.created = created;
  }

  public MailLogEntry created(String created) {
    this.created = created;
    return this;
  }

 /**
   * Unix timestamp of message acceptance.  Corresponds to the &#x60;startDate&#x60; and &#x60;endDate&#x60; filter parameters.
   * @return time
  **/
  @JsonProperty("time")
  public Integer getTime() {
    return time;
  }

  public void setTime(Integer time) {
    this.time = time;
  }

  public MailLogEntry time(Integer time) {
    this.time = time;
    return this;
  }

 /**
   * The SMTP AUTH username used to submit the message (e.g. &#x60;mb5658&#x60;).
   * @return user
  **/
  @JsonProperty("user")
  public String getUser() {
    return user;
  }

  public void setUser(String user) {
    this.user = user;
  }

  public MailLogEntry user(String user) {
    this.user = user;
    return this;
  }

 /**
   * SMTP transaction type negotiated with the relay.
   * @return transtype
  **/
  @JsonProperty("transtype")
  public String getTranstype() {
    return transtype;
  }

  public void setTranstype(String transtype) {
    this.transtype = transtype;
  }

  public MailLogEntry transtype(String transtype) {
    this.transtype = transtype;
    return this;
  }

 /**
   * IP address of the client that submitted the message to the relay.
   * @return origin
  **/
  @JsonProperty("origin")
  public String getOrigin() {
    return origin;
  }

  public void setOrigin(String origin) {
    this.origin = origin;
  }

  public MailLogEntry origin(String origin) {
    this.origin = origin;
    return this;
  }

 /**
   * Relay interface name that accepted the message.
   * @return _interface
  **/
  @JsonProperty("interface")
  public String getInterface() {
    return _interface;
  }

  public void setInterface(String _interface) {
    this._interface = _interface;
  }

  public MailLogEntry _interface(String _interface) {
    this._interface = _interface;
    return this;
  }

 /**
   * The &#x60;Subject&#x60; header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.
   * @return subject
  **/
  @JsonProperty("subject")
  public String getSubject() {
    return subject;
  }

  public void setSubject(String subject) {
    this.subject = subject;
  }

  public MailLogEntry subject(String subject) {
    this.subject = subject;
    return this;
  }

 /**
   * The &#x60;Message-ID&#x60; header value.  Can be used with the &#x60;messageId&#x60; filter for subsequent lookups.
   * @return messageId
  **/
  @JsonProperty("messageId")
  public String getMessageId() {
    return messageId;
  }

  public void setMessageId(String messageId) {
    this.messageId = messageId;
  }

  public MailLogEntry messageId(String messageId) {
    this.messageId = messageId;
    return this;
  }

 /**
   * The sending zone assigned by the relay for outbound delivery.
   * @return sendingZone
  **/
  @JsonProperty("sendingZone")
  public String getSendingZone() {
    return sendingZone;
  }

  public void setSendingZone(String sendingZone) {
    this.sendingZone = sendingZone;
  }

  public MailLogEntry sendingZone(String sendingZone) {
    this.sendingZone = sendingZone;
    return this;
  }

 /**
   * Size of the message body in bytes.
   * @return bodySize
  **/
  @JsonProperty("bodySize")
  public Integer getBodySize() {
    return bodySize;
  }

  public void setBodySize(Integer bodySize) {
    this.bodySize = bodySize;
  }

  public MailLogEntry bodySize(Integer bodySize) {
    this.bodySize = bodySize;
    return this;
  }

 /**
   * Sequence index of this recipient in a multi-recipient message. Starts at 1.
   * @return seq
  **/
  @JsonProperty("seq")
  public Integer getSeq() {
    return seq;
  }

  public void setSeq(Integer seq) {
    this.seq = seq;
  }

  public MailLogEntry seq(Integer seq) {
    this.seq = seq;
    return this;
  }

 /**
   * Delivery status flag.  &#x60;1&#x60; &#x3D; successfully delivered to destination MX. &#x60;0&#x60; &#x3D; queued, deferred, or failed.  &#x60;null&#x60; &#x3D; delivery not yet attempted.
   * @return delivered
  **/
  @JsonProperty("delivered")
  public Integer getDelivered() {
    return delivered;
  }

  public void setDelivered(Integer delivered) {
    this.delivered = delivered;
  }

  public MailLogEntry delivered(Integer delivered) {
    this.delivered = delivered;
    return this;
  }

 /**
   * The SMTP response code from the destination MX server (e.g. &#x60;250&#x60;).
   * @return code
  **/
  @JsonProperty("code")
  public Integer getCode() {
    return code;
  }

  public void setCode(Integer code) {
    this.code = code;
  }

  public MailLogEntry code(Integer code) {
    this.code = code;
    return this;
  }

 /**
   * The specific recipient address this delivery record is for.
   * @return recipient
  **/
  @JsonProperty("recipient")
  public String getRecipient() {
    return recipient;
  }

  public void setRecipient(String recipient) {
    this.recipient = recipient;
  }

  public MailLogEntry recipient(String recipient) {
    this.recipient = recipient;
    return this;
  }

 /**
   * The full SMTP response string received from the destination MX server.
   * @return response
  **/
  @JsonProperty("response")
  public String getResponse() {
    return response;
  }

  public void setResponse(String response) {
    this.response = response;
  }

  public MailLogEntry response(String response) {
    this.response = response;
    return this;
  }

 /**
   * The destination domain for this delivery attempt.
   * @return domain
  **/
  @JsonProperty("domain")
  public String getDomain() {
    return domain;
  }

  public void setDomain(String domain) {
    this.domain = domain;
  }

  public MailLogEntry domain(String domain) {
    this.domain = domain;
    return this;
  }

 /**
   * Whether the queue entry is currently locked for delivery processing.
   * @return locked
  **/
  @JsonProperty("locked")
  public Integer getLocked() {
    return locked;
  }

  public void setLocked(Integer locked) {
    this.locked = locked;
  }

  public MailLogEntry locked(Integer locked) {
    this.locked = locked;
    return this;
  }

 /**
   * Millisecond-precision timestamp of the last queue lock acquisition.
   * @return lockTime
  **/
  @JsonProperty("lockTime")
  public String getLockTime() {
    return lockTime;
  }

  public void setLockTime(String lockTime) {
    this.lockTime = lockTime;
  }

  public MailLogEntry lockTime(String lockTime) {
    this.lockTime = lockTime;
    return this;
  }

 /**
   * The relay server node assigned to deliver this message.
   * @return assigned
  **/
  @JsonProperty("assigned")
  public String getAssigned() {
    return assigned;
  }

  public void setAssigned(String assigned) {
    this.assigned = assigned;
  }

  public MailLogEntry assigned(String assigned) {
    this.assigned = assigned;
    return this;
  }

 /**
   * ISO 8601 timestamp when the message was placed into the delivery queue.
   * @return queued
  **/
  @JsonProperty("queued")
  public String getQueued() {
    return queued;
  }

  public void setQueued(String queued) {
    this.queued = queued;
  }

  public MailLogEntry queued(String queued) {
    this.queued = queued;
    return this;
  }

 /**
   * The MX hostname the relay connected to for delivery.  Corresponds to the &#x60;mx&#x60; filter parameter.
   * @return mxHostname
  **/
  @JsonProperty("mxHostname")
  public String getMxHostname() {
    return mxHostname;
  }

  public void setMxHostname(String mxHostname) {
    this.mxHostname = mxHostname;
  }

  public MailLogEntry mxHostname(String mxHostname) {
    this.mxHostname = mxHostname;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailLogEntry mailLogEntry = (MailLogEntry) o;
    return Objects.equals(this.id, mailLogEntry.id) &&
        Objects.equals(this.id, mailLogEntry.id) &&
        Objects.equals(this.from, mailLogEntry.from) &&
        Objects.equals(this.to, mailLogEntry.to) &&
        Objects.equals(this.created, mailLogEntry.created) &&
        Objects.equals(this.time, mailLogEntry.time) &&
        Objects.equals(this.user, mailLogEntry.user) &&
        Objects.equals(this.transtype, mailLogEntry.transtype) &&
        Objects.equals(this.origin, mailLogEntry.origin) &&
        Objects.equals(this._interface, mailLogEntry._interface) &&
        Objects.equals(this.subject, mailLogEntry.subject) &&
        Objects.equals(this.messageId, mailLogEntry.messageId) &&
        Objects.equals(this.sendingZone, mailLogEntry.sendingZone) &&
        Objects.equals(this.bodySize, mailLogEntry.bodySize) &&
        Objects.equals(this.seq, mailLogEntry.seq) &&
        Objects.equals(this.delivered, mailLogEntry.delivered) &&
        Objects.equals(this.code, mailLogEntry.code) &&
        Objects.equals(this.recipient, mailLogEntry.recipient) &&
        Objects.equals(this.response, mailLogEntry.response) &&
        Objects.equals(this.domain, mailLogEntry.domain) &&
        Objects.equals(this.locked, mailLogEntry.locked) &&
        Objects.equals(this.lockTime, mailLogEntry.lockTime) &&
        Objects.equals(this.assigned, mailLogEntry.assigned) &&
        Objects.equals(this.queued, mailLogEntry.queued) &&
        Objects.equals(this.mxHostname, mailLogEntry.mxHostname);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, id, from, to, created, time, user, transtype, origin, _interface, subject, messageId, sendingZone, bodySize, seq, delivered, code, recipient, response, domain, locked, lockTime, assigned, queued, mxHostname);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailLogEntry {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    from: ").append(toIndentedString(from)).append("\n");
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    created: ").append(toIndentedString(created)).append("\n");
    sb.append("    time: ").append(toIndentedString(time)).append("\n");
    sb.append("    user: ").append(toIndentedString(user)).append("\n");
    sb.append("    transtype: ").append(toIndentedString(transtype)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    _interface: ").append(toIndentedString(_interface)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    messageId: ").append(toIndentedString(messageId)).append("\n");
    sb.append("    sendingZone: ").append(toIndentedString(sendingZone)).append("\n");
    sb.append("    bodySize: ").append(toIndentedString(bodySize)).append("\n");
    sb.append("    seq: ").append(toIndentedString(seq)).append("\n");
    sb.append("    delivered: ").append(toIndentedString(delivered)).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("    recipient: ").append(toIndentedString(recipient)).append("\n");
    sb.append("    response: ").append(toIndentedString(response)).append("\n");
    sb.append("    domain: ").append(toIndentedString(domain)).append("\n");
    sb.append("    locked: ").append(toIndentedString(locked)).append("\n");
    sb.append("    lockTime: ").append(toIndentedString(lockTime)).append("\n");
    sb.append("    assigned: ").append(toIndentedString(assigned)).append("\n");
    sb.append("    queued: ").append(toIndentedString(queued)).append("\n");
    sb.append("    mxHostname: ").append(toIndentedString(mxHostname)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

