package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.
 **/
@Schema(description="A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.")
public class MailLogEntry   {
  
  @Schema(example = "103172", required = true, description = "Internal auto-increment database row ID.")
 /**
   * Internal auto-increment database row ID.  
  **/
  private Integer _id = null;
  
  @Schema(example = "17c7eda538e0005d03", required = true, description = "The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints.")
 /**
   * The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints.  
  **/
  private String id = null;
  
  @Schema(example = "person@mysite.com", required = true, description = "SMTP envelope `MAIL FROM` address.")
 /**
   * SMTP envelope `MAIL FROM` address.  
  **/
  private String from = null;
  
  @Schema(example = "client@isp.com", required = true, description = "SMTP envelope `RCPT TO` address.")
 /**
   * SMTP envelope `RCPT TO` address.  
  **/
  private String to = null;
  
  @Schema(example = "sell 0.005 shares", description = "The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.")
 /**
   * The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.  
  **/
  private String subject = null;
  
  @Schema(example = "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>", description = "The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups.")
 /**
   * The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups.  
  **/
  private String messageId = null;
  
  @Schema(example = "2021-10-14 08:50:10", required = true, description = "Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format.")
 /**
   * Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format.  
  **/
  private String created = null;
  
  @Schema(example = "1634215809", required = true, description = "Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters.")
 /**
   * Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters.  
  **/
  private Integer time = null;
  
  @Schema(example = "mb5658", required = true, description = "The SMTP AUTH username used to submit the message (e.g. `mb5658`).")
 /**
   * The SMTP AUTH username used to submit the message (e.g. `mb5658`).  
  **/
  private String user = null;
  
  @Schema(example = "ESMTPSA", required = true, description = "SMTP transaction type negotiated with the relay.")
 /**
   * SMTP transaction type negotiated with the relay.  
  **/
  private String transtype = null;
  
  @Schema(example = "199.231.189.154", required = true, description = "IP address of the client that submitted the message to the relay.")
 /**
   * IP address of the client that submitted the message to the relay.  
  **/
  private String origin = null;
  
  @Schema(example = "feeder", required = true, description = "Relay interface name that accepted the message.")
 /**
   * Relay interface name that accepted the message.  
  **/
  private String _interface = null;
  
  @Schema(example = "interserver", description = "The sending zone assigned by the relay for outbound delivery.")
 /**
   * The sending zone assigned by the relay for outbound delivery.  
  **/
  private String sendingZone = null;
  
  @Schema(example = "63", description = "Size of the message body in bytes.")
 /**
   * Size of the message body in bytes.  
  **/
  private Integer bodySize = null;
  
  @Schema(example = "1", description = "Sequence index of this recipient in a multi-recipient message. Starts at 1.")
 /**
   * Sequence index of this recipient in a multi-recipient message. Starts at 1.  
  **/
  private Integer seq = null;
  
  @Schema(example = "1", description = "Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted.")
 /**
   * Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted.  
  **/
  private Integer delivered = null;
  
  @Schema(example = "250", description = "The SMTP response code from the destination MX server (e.g. `250`).")
 /**
   * The SMTP response code from the destination MX server (e.g. `250`).  
  **/
  private Integer code = null;
  
  @Schema(example = "client@isp.com", description = "The specific recipient address this delivery record is for.")
 /**
   * The specific recipient address this delivery record is for.  
  **/
  private String recipient = null;
  
  @Schema(example = "250 2.0.0 Ok queued as C91D83E128C", description = "The full SMTP response string received from the destination MX server.")
 /**
   * The full SMTP response string received from the destination MX server.  
  **/
  private String response = null;
  
  @Schema(example = "interserver.net", description = "The destination domain for this delivery attempt.")
 /**
   * The destination domain for this delivery attempt.  
  **/
  private String domain = null;
  
  @Schema(example = "1", description = "Whether the queue entry is currently locked for delivery processing.")
 /**
   * Whether the queue entry is currently locked for delivery processing.  
  **/
  private Integer locked = null;
  
  @Schema(example = "1634215818533", description = "Millisecond-precision timestamp of the last queue lock acquisition.")
 /**
   * Millisecond-precision timestamp of the last queue lock acquisition.  
  **/
  private String lockTime = null;
  
  @Schema(example = "relay1", description = "The relay server node assigned to deliver this message.")
 /**
   * The relay server node assigned to deliver this message.  
  **/
  private String assigned = null;
  
  @Schema(example = "2021-10-14T12:50:15.487Z", description = "ISO 8601 timestamp when the message was placed into the delivery queue.")
 /**
   * ISO 8601 timestamp when the message was placed into the delivery queue.  
  **/
  private String queued = null;
  
  @Schema(example = "mx.j.is.cc", description = "The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter.")
 /**
   * The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter.  
  **/
  private String mxHostname = null;
 /**
   * Internal auto-increment database row ID.
   * @return _id
  **/
  @JsonProperty("_id")
  @NotNull
  public Integer getId() {
    return _id;
  }

  public void setId(Integer _id) {
    this._id = _id;
  }

  public MailLogEntry _id(Integer _id) {
    this._id = _id;
    return this;
  }

 /**
   * The relay-assigned mail ID (18-19 hex characters).  Matches the &#x60;mailid&#x60; filter parameter and the &#x60;text&#x60; value returned by send endpoints.
   * @return id
  **/
  @JsonProperty("id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
   * Human-readable creation timestamp in &#x60;YYYY-MM-DD HH:MM:SS&#x60; format.
   * @return created
  **/
  @JsonProperty("created")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
