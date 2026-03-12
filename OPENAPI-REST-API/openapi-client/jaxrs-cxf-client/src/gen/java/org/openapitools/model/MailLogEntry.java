package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * An email record
 */
@ApiModel(description="An email record")

public class MailLogEntry  {
  
 /**
  * internal db id
  */
  @ApiModelProperty(example = "103172", required = true, value = "internal db id")

  private Integer id;

 /**
  * mail id
  */
  @ApiModelProperty(example = "17c7eda538e0005d03", required = true, value = "mail id")

  private String id;

 /**
  * from address
  */
  @ApiModelProperty(example = "person@mysite.com", required = true, value = "from address")

  private String from;

 /**
  * to address
  */
  @ApiModelProperty(example = "client@isp.com", required = true, value = "to address")

  private String to;

 /**
  * email subject
  */
  @ApiModelProperty(example = "sell 0.005 shares", required = true, value = "email subject")

  private String subject;

 /**
  * creation date
  */
  @ApiModelProperty(example = "2021-10-14 08:50:10", required = true, value = "creation date")

  private String created;

 /**
  * creation timestamp
  */
  @ApiModelProperty(example = "1634215809", required = true, value = "creation timestamp")

  private Integer time;

 /**
  * user account
  */
  @ApiModelProperty(example = "mb5658", required = true, value = "user account")

  private String user;

 /**
  * transaction type
  */
  @ApiModelProperty(example = "ESMTPSA", required = true, value = "transaction type")

  private String transtype;

 /**
  * origin ip
  */
  @ApiModelProperty(example = "199.231.189.154", required = true, value = "origin ip")

  private String origin;

 /**
  * interface name
  */
  @ApiModelProperty(example = "feeder", required = true, value = "interface name")

  private String _interface;

 /**
  * sending zone
  */
  @ApiModelProperty(example = "interserver", required = true, value = "sending zone")

  private String sendingZone;

 /**
  * email body size in bytes
  */
  @ApiModelProperty(example = "63", required = true, value = "email body size in bytes")

  private Integer bodySize;

 /**
  * index of email in the to adderess list
  */
  @ApiModelProperty(example = "1", required = true, value = "index of email in the to adderess list")

  private Integer seq;

 /**
  * to address this email is being sent to
  */
  @ApiModelProperty(example = "client@isp.com", required = true, value = "to address this email is being sent to")

  private String recipient;

 /**
  * to address domain
  */
  @ApiModelProperty(example = "interserver.net", required = true, value = "to address domain")

  private String domain;

 /**
  * locked status
  */
  @ApiModelProperty(example = "1", required = true, value = "locked status")

  private Integer locked;

 /**
  * lock timestamp
  */
  @ApiModelProperty(example = "1634215818533", required = true, value = "lock timestamp")

  private Integer lockTime;

 /**
  * assigned server
  */
  @ApiModelProperty(example = "relay1", required = true, value = "assigned server")

  private String assigned;

 /**
  * queued timestamp
  */
  @ApiModelProperty(example = "2021-10-14T12:50:15.487Z", required = true, value = "queued timestamp")

  private String queued;

 /**
  * mx hostname
  */
  @ApiModelProperty(example = "mx.j.is.cc", required = true, value = "mx hostname")

  private String mxHostname;

 /**
  * mail delivery response
  */
  @ApiModelProperty(example = "250 2.0.0 Ok queued as C91D83E128C", required = true, value = "mail delivery response")

  private String response;

 /**
  * message id
  */
  @ApiModelProperty(example = "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>", value = "message id")

  private String messageId;
 /**
   * internal db id
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
   * mail id
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
   * from address
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
   * to address
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
   * email subject
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
   * creation date
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
   * creation timestamp
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
   * user account
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
   * transaction type
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
   * origin ip
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
   * interface name
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
   * sending zone
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
   * email body size in bytes
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
   * index of email in the to adderess list
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
   * to address this email is being sent to
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
   * to address domain
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
   * locked status
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
   * lock timestamp
   * @return lockTime
  **/
  @JsonProperty("lockTime")
  public Integer getLockTime() {
    return lockTime;
  }

  public void setLockTime(Integer lockTime) {
    this.lockTime = lockTime;
  }

  public MailLogEntry lockTime(Integer lockTime) {
    this.lockTime = lockTime;
    return this;
  }

 /**
   * assigned server
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
   * queued timestamp
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
   * mx hostname
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

 /**
   * mail delivery response
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
   * message id
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
        Objects.equals(this.subject, mailLogEntry.subject) &&
        Objects.equals(this.created, mailLogEntry.created) &&
        Objects.equals(this.time, mailLogEntry.time) &&
        Objects.equals(this.user, mailLogEntry.user) &&
        Objects.equals(this.transtype, mailLogEntry.transtype) &&
        Objects.equals(this.origin, mailLogEntry.origin) &&
        Objects.equals(this._interface, mailLogEntry._interface) &&
        Objects.equals(this.sendingZone, mailLogEntry.sendingZone) &&
        Objects.equals(this.bodySize, mailLogEntry.bodySize) &&
        Objects.equals(this.seq, mailLogEntry.seq) &&
        Objects.equals(this.recipient, mailLogEntry.recipient) &&
        Objects.equals(this.domain, mailLogEntry.domain) &&
        Objects.equals(this.locked, mailLogEntry.locked) &&
        Objects.equals(this.lockTime, mailLogEntry.lockTime) &&
        Objects.equals(this.assigned, mailLogEntry.assigned) &&
        Objects.equals(this.queued, mailLogEntry.queued) &&
        Objects.equals(this.mxHostname, mailLogEntry.mxHostname) &&
        Objects.equals(this.response, mailLogEntry.response) &&
        Objects.equals(this.messageId, mailLogEntry.messageId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, id, from, to, subject, created, time, user, transtype, origin, _interface, sendingZone, bodySize, seq, recipient, domain, locked, lockTime, assigned, queued, mxHostname, response, messageId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailLogEntry {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    from: ").append(toIndentedString(from)).append("\n");
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    created: ").append(toIndentedString(created)).append("\n");
    sb.append("    time: ").append(toIndentedString(time)).append("\n");
    sb.append("    user: ").append(toIndentedString(user)).append("\n");
    sb.append("    transtype: ").append(toIndentedString(transtype)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    _interface: ").append(toIndentedString(_interface)).append("\n");
    sb.append("    sendingZone: ").append(toIndentedString(sendingZone)).append("\n");
    sb.append("    bodySize: ").append(toIndentedString(bodySize)).append("\n");
    sb.append("    seq: ").append(toIndentedString(seq)).append("\n");
    sb.append("    recipient: ").append(toIndentedString(recipient)).append("\n");
    sb.append("    domain: ").append(toIndentedString(domain)).append("\n");
    sb.append("    locked: ").append(toIndentedString(locked)).append("\n");
    sb.append("    lockTime: ").append(toIndentedString(lockTime)).append("\n");
    sb.append("    assigned: ").append(toIndentedString(assigned)).append("\n");
    sb.append("    queued: ").append(toIndentedString(queued)).append("\n");
    sb.append("    mxHostname: ").append(toIndentedString(mxHostname)).append("\n");
    sb.append("    response: ").append(toIndentedString(response)).append("\n");
    sb.append("    messageId: ").append(toIndentedString(messageId)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

