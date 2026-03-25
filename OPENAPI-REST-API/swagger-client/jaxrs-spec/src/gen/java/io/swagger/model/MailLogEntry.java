package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When &#x60;groupby&#x3D;recipient&#x60; each row represents one delivery attempt; when &#x60;groupby&#x3D;message&#x60; delivery fields reflect one arbitrary recipient.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.")

public class MailLogEntry   {

  private @Valid Integer _id = null;

  private @Valid String id = null;

  private @Valid String from = null;

  private @Valid String to = null;

  private @Valid String subject = null;

  private @Valid String messageId = null;

  private @Valid String created = null;

  private @Valid Integer time = null;

  private @Valid String user = null;

  private @Valid String transtype = null;

  private @Valid String origin = null;

  private @Valid String _interface = null;

  private @Valid String sendingZone = null;

  private @Valid Integer bodySize = null;

  private @Valid Integer seq = null;

  private @Valid Integer delivered = null;

  private @Valid Integer code = null;

  private @Valid String recipient = null;

  private @Valid String response = null;

  private @Valid String domain = null;

  private @Valid Integer locked = null;

  private @Valid String lockTime = null;

  private @Valid String assigned = null;

  private @Valid String queued = null;

  private @Valid String mxHostname = null;

  /**
   * Internal auto-increment database row ID.
   **/
  public MailLogEntry _id(Integer _id) {
    this._id = _id;
    return this;
  }

  
  @ApiModelProperty(example = "103172", required = true, value = "Internal auto-increment database row ID.")
  @JsonProperty("_id")
  @NotNull

  public Integer getId() {
    return _id;
  }
  public void setId(Integer _id) {
    this._id = _id;
  }

  /**
   * The relay-assigned mail ID (18-19 hex characters).  Matches the &#x60;mailid&#x60; filter parameter and the &#x60;text&#x60; value returned by send endpoints.
   **/
  public MailLogEntry id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "17c7eda538e0005d03", required = true, value = "The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints.")
  @JsonProperty("id")
  @NotNull

  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * SMTP envelope &#x60;MAIL FROM&#x60; address.
   **/
  public MailLogEntry from(String from) {
    this.from = from;
    return this;
  }

  
  @ApiModelProperty(example = "person@mysite.com", required = true, value = "SMTP envelope `MAIL FROM` address.")
  @JsonProperty("from")
  @NotNull

  public String getFrom() {
    return from;
  }
  public void setFrom(String from) {
    this.from = from;
  }

  /**
   * SMTP envelope &#x60;RCPT TO&#x60; address.
   **/
  public MailLogEntry to(String to) {
    this.to = to;
    return this;
  }

  
  @ApiModelProperty(example = "client@isp.com", required = true, value = "SMTP envelope `RCPT TO` address.")
  @JsonProperty("to")
  @NotNull

  public String getTo() {
    return to;
  }
  public void setTo(String to) {
    this.to = to;
  }

  /**
   * The &#x60;Subject&#x60; header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.
   **/
  public MailLogEntry subject(String subject) {
    this.subject = subject;
    return this;
  }

  
  @ApiModelProperty(example = "sell 0.005 shares", value = "The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.")
  @JsonProperty("subject")

  public String getSubject() {
    return subject;
  }
  public void setSubject(String subject) {
    this.subject = subject;
  }

  /**
   * The &#x60;Message-ID&#x60; header value.  Can be used with the &#x60;messageId&#x60; filter for subsequent lookups.
   **/
  public MailLogEntry messageId(String messageId) {
    this.messageId = messageId;
    return this;
  }

  
  @ApiModelProperty(example = "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>", value = "The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups.")
  @JsonProperty("messageId")

  public String getMessageId() {
    return messageId;
  }
  public void setMessageId(String messageId) {
    this.messageId = messageId;
  }

  /**
   * Human-readable creation timestamp in &#x60;YYYY-MM-DD HH:MM:SS&#x60; format.
   **/
  public MailLogEntry created(String created) {
    this.created = created;
    return this;
  }

  
  @ApiModelProperty(example = "2021-10-14 08:50:10", required = true, value = "Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format.")
  @JsonProperty("created")
  @NotNull

  public String getCreated() {
    return created;
  }
  public void setCreated(String created) {
    this.created = created;
  }

  /**
   * Unix timestamp of message acceptance.  Corresponds to the &#x60;startDate&#x60; and &#x60;endDate&#x60; filter parameters.
   **/
  public MailLogEntry time(Integer time) {
    this.time = time;
    return this;
  }

  
  @ApiModelProperty(example = "1634215809", required = true, value = "Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters.")
  @JsonProperty("time")
  @NotNull

  public Integer getTime() {
    return time;
  }
  public void setTime(Integer time) {
    this.time = time;
  }

  /**
   * The SMTP AUTH username used to submit the message (e.g. &#x60;mb5658&#x60;).
   **/
  public MailLogEntry user(String user) {
    this.user = user;
    return this;
  }

  
  @ApiModelProperty(example = "mb5658", required = true, value = "The SMTP AUTH username used to submit the message (e.g. `mb5658`).")
  @JsonProperty("user")
  @NotNull

  public String getUser() {
    return user;
  }
  public void setUser(String user) {
    this.user = user;
  }

  /**
   * SMTP transaction type negotiated with the relay.
   **/
  public MailLogEntry transtype(String transtype) {
    this.transtype = transtype;
    return this;
  }

  
  @ApiModelProperty(example = "ESMTPSA", required = true, value = "SMTP transaction type negotiated with the relay.")
  @JsonProperty("transtype")
  @NotNull

  public String getTranstype() {
    return transtype;
  }
  public void setTranstype(String transtype) {
    this.transtype = transtype;
  }

  /**
   * IP address of the client that submitted the message to the relay.
   **/
  public MailLogEntry origin(String origin) {
    this.origin = origin;
    return this;
  }

  
  @ApiModelProperty(example = "199.231.189.154", required = true, value = "IP address of the client that submitted the message to the relay.")
  @JsonProperty("origin")
  @NotNull

  public String getOrigin() {
    return origin;
  }
  public void setOrigin(String origin) {
    this.origin = origin;
  }

  /**
   * Relay interface name that accepted the message.
   **/
  public MailLogEntry _interface(String _interface) {
    this._interface = _interface;
    return this;
  }

  
  @ApiModelProperty(example = "feeder", required = true, value = "Relay interface name that accepted the message.")
  @JsonProperty("interface")
  @NotNull

  public String getInterface() {
    return _interface;
  }
  public void setInterface(String _interface) {
    this._interface = _interface;
  }

  /**
   * The sending zone assigned by the relay for outbound delivery.
   **/
  public MailLogEntry sendingZone(String sendingZone) {
    this.sendingZone = sendingZone;
    return this;
  }

  
  @ApiModelProperty(example = "interserver", value = "The sending zone assigned by the relay for outbound delivery.")
  @JsonProperty("sendingZone")

  public String getSendingZone() {
    return sendingZone;
  }
  public void setSendingZone(String sendingZone) {
    this.sendingZone = sendingZone;
  }

  /**
   * Size of the message body in bytes.
   **/
  public MailLogEntry bodySize(Integer bodySize) {
    this.bodySize = bodySize;
    return this;
  }

  
  @ApiModelProperty(example = "63", value = "Size of the message body in bytes.")
  @JsonProperty("bodySize")

  public Integer getBodySize() {
    return bodySize;
  }
  public void setBodySize(Integer bodySize) {
    this.bodySize = bodySize;
  }

  /**
   * Sequence index of this recipient in a multi-recipient message. Starts at 1.
   **/
  public MailLogEntry seq(Integer seq) {
    this.seq = seq;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Sequence index of this recipient in a multi-recipient message. Starts at 1.")
  @JsonProperty("seq")

  public Integer getSeq() {
    return seq;
  }
  public void setSeq(Integer seq) {
    this.seq = seq;
  }

  /**
   * Delivery status flag.  &#x60;1&#x60; &#x3D; successfully delivered to destination MX. &#x60;0&#x60; &#x3D; queued, deferred, or failed.  &#x60;null&#x60; &#x3D; delivery not yet attempted.
   **/
  public MailLogEntry delivered(Integer delivered) {
    this.delivered = delivered;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted.")
  @JsonProperty("delivered")

  public Integer getDelivered() {
    return delivered;
  }
  public void setDelivered(Integer delivered) {
    this.delivered = delivered;
  }

  /**
   * The SMTP response code from the destination MX server (e.g. &#x60;250&#x60;).
   **/
  public MailLogEntry code(Integer code) {
    this.code = code;
    return this;
  }

  
  @ApiModelProperty(example = "250", value = "The SMTP response code from the destination MX server (e.g. `250`).")
  @JsonProperty("code")

  public Integer getCode() {
    return code;
  }
  public void setCode(Integer code) {
    this.code = code;
  }

  /**
   * The specific recipient address this delivery record is for.
   **/
  public MailLogEntry recipient(String recipient) {
    this.recipient = recipient;
    return this;
  }

  
  @ApiModelProperty(example = "client@isp.com", value = "The specific recipient address this delivery record is for.")
  @JsonProperty("recipient")

  public String getRecipient() {
    return recipient;
  }
  public void setRecipient(String recipient) {
    this.recipient = recipient;
  }

  /**
   * The full SMTP response string received from the destination MX server.
   **/
  public MailLogEntry response(String response) {
    this.response = response;
    return this;
  }

  
  @ApiModelProperty(example = "250 2.0.0 Ok queued as C91D83E128C", value = "The full SMTP response string received from the destination MX server.")
  @JsonProperty("response")

  public String getResponse() {
    return response;
  }
  public void setResponse(String response) {
    this.response = response;
  }

  /**
   * The destination domain for this delivery attempt.
   **/
  public MailLogEntry domain(String domain) {
    this.domain = domain;
    return this;
  }

  
  @ApiModelProperty(example = "interserver.net", value = "The destination domain for this delivery attempt.")
  @JsonProperty("domain")

  public String getDomain() {
    return domain;
  }
  public void setDomain(String domain) {
    this.domain = domain;
  }

  /**
   * Whether the queue entry is currently locked for delivery processing.
   **/
  public MailLogEntry locked(Integer locked) {
    this.locked = locked;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Whether the queue entry is currently locked for delivery processing.")
  @JsonProperty("locked")

  public Integer getLocked() {
    return locked;
  }
  public void setLocked(Integer locked) {
    this.locked = locked;
  }

  /**
   * Millisecond-precision timestamp of the last queue lock acquisition.
   **/
  public MailLogEntry lockTime(String lockTime) {
    this.lockTime = lockTime;
    return this;
  }

  
  @ApiModelProperty(example = "1634215818533", value = "Millisecond-precision timestamp of the last queue lock acquisition.")
  @JsonProperty("lockTime")

  public String getLockTime() {
    return lockTime;
  }
  public void setLockTime(String lockTime) {
    this.lockTime = lockTime;
  }

  /**
   * The relay server node assigned to deliver this message.
   **/
  public MailLogEntry assigned(String assigned) {
    this.assigned = assigned;
    return this;
  }

  
  @ApiModelProperty(example = "relay1", value = "The relay server node assigned to deliver this message.")
  @JsonProperty("assigned")

  public String getAssigned() {
    return assigned;
  }
  public void setAssigned(String assigned) {
    this.assigned = assigned;
  }

  /**
   * ISO 8601 timestamp when the message was placed into the delivery queue.
   **/
  public MailLogEntry queued(String queued) {
    this.queued = queued;
    return this;
  }

  
  @ApiModelProperty(example = "2021-10-14T12:50:15.487Z", value = "ISO 8601 timestamp when the message was placed into the delivery queue.")
  @JsonProperty("queued")

  public String getQueued() {
    return queued;
  }
  public void setQueued(String queued) {
    this.queued = queued;
  }

  /**
   * The MX hostname the relay connected to for delivery.  Corresponds to the &#x60;mx&#x60; filter parameter.
   **/
  public MailLogEntry mxHostname(String mxHostname) {
    this.mxHostname = mxHostname;
    return this;
  }

  
  @ApiModelProperty(example = "mx.j.is.cc", value = "The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter.")
  @JsonProperty("mxHostname")

  public String getMxHostname() {
    return mxHostname;
  }
  public void setMxHostname(String mxHostname) {
    this.mxHostname = mxHostname;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailLogEntry mailLogEntry = (MailLogEntry) o;
    return Objects.equals(_id, mailLogEntry._id) &&
        Objects.equals(id, mailLogEntry.id) &&
        Objects.equals(from, mailLogEntry.from) &&
        Objects.equals(to, mailLogEntry.to) &&
        Objects.equals(subject, mailLogEntry.subject) &&
        Objects.equals(messageId, mailLogEntry.messageId) &&
        Objects.equals(created, mailLogEntry.created) &&
        Objects.equals(time, mailLogEntry.time) &&
        Objects.equals(user, mailLogEntry.user) &&
        Objects.equals(transtype, mailLogEntry.transtype) &&
        Objects.equals(origin, mailLogEntry.origin) &&
        Objects.equals(_interface, mailLogEntry._interface) &&
        Objects.equals(sendingZone, mailLogEntry.sendingZone) &&
        Objects.equals(bodySize, mailLogEntry.bodySize) &&
        Objects.equals(seq, mailLogEntry.seq) &&
        Objects.equals(delivered, mailLogEntry.delivered) &&
        Objects.equals(code, mailLogEntry.code) &&
        Objects.equals(recipient, mailLogEntry.recipient) &&
        Objects.equals(response, mailLogEntry.response) &&
        Objects.equals(domain, mailLogEntry.domain) &&
        Objects.equals(locked, mailLogEntry.locked) &&
        Objects.equals(lockTime, mailLogEntry.lockTime) &&
        Objects.equals(assigned, mailLogEntry.assigned) &&
        Objects.equals(queued, mailLogEntry.queued) &&
        Objects.equals(mxHostname, mailLogEntry.mxHostname);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_id, id, from, to, subject, messageId, created, time, user, transtype, origin, _interface, sendingZone, bodySize, seq, delivered, code, recipient, response, domain, locked, lockTime, assigned, queued, mxHostname);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailLogEntry {\n");
    
    sb.append("    _id: ").append(toIndentedString(_id)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    from: ").append(toIndentedString(from)).append("\n");
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    messageId: ").append(toIndentedString(messageId)).append("\n");
    sb.append("    created: ").append(toIndentedString(created)).append("\n");
    sb.append("    time: ").append(toIndentedString(time)).append("\n");
    sb.append("    user: ").append(toIndentedString(user)).append("\n");
    sb.append("    transtype: ").append(toIndentedString(transtype)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    _interface: ").append(toIndentedString(_interface)).append("\n");
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
