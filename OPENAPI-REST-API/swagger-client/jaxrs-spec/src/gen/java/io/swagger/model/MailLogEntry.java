package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * An email record
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "An email record")

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

  private @Valid String recipient = null;

  private @Valid String domain = null;

  private @Valid Integer locked = null;

  private @Valid Integer lockTime = null;

  private @Valid String assigned = null;

  private @Valid String queued = null;

  private @Valid String mxHostname = null;

  private @Valid String response = null;

  /**
   * internal db id
   **/
  public MailLogEntry _id(Integer _id) {
    this._id = _id;
    return this;
  }

  
  @ApiModelProperty(example = "103172", required = true, value = "internal db id")
  @JsonProperty("_id")
  @NotNull

  public Integer getId() {
    return _id;
  }
  public void setId(Integer _id) {
    this._id = _id;
  }

  /**
   * mail id
   **/
  public MailLogEntry id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "17c7eda538e0005d03", required = true, value = "mail id")
  @JsonProperty("id")
  @NotNull

  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * from address
   **/
  public MailLogEntry from(String from) {
    this.from = from;
    return this;
  }

  
  @ApiModelProperty(example = "person@mysite.com", required = true, value = "from address")
  @JsonProperty("from")
  @NotNull

  public String getFrom() {
    return from;
  }
  public void setFrom(String from) {
    this.from = from;
  }

  /**
   * to address
   **/
  public MailLogEntry to(String to) {
    this.to = to;
    return this;
  }

  
  @ApiModelProperty(example = "client@isp.com", required = true, value = "to address")
  @JsonProperty("to")
  @NotNull

  public String getTo() {
    return to;
  }
  public void setTo(String to) {
    this.to = to;
  }

  /**
   * email subject
   **/
  public MailLogEntry subject(String subject) {
    this.subject = subject;
    return this;
  }

  
  @ApiModelProperty(example = "sell 0.005 shares", required = true, value = "email subject")
  @JsonProperty("subject")
  @NotNull

  public String getSubject() {
    return subject;
  }
  public void setSubject(String subject) {
    this.subject = subject;
  }

  /**
   * message id
   **/
  public MailLogEntry messageId(String messageId) {
    this.messageId = messageId;
    return this;
  }

  
  @ApiModelProperty(example = "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>", value = "message id")
  @JsonProperty("messageId")
  @NotNull

  public String getMessageId() {
    return messageId;
  }
  public void setMessageId(String messageId) {
    this.messageId = messageId;
  }

  /**
   * creation date
   **/
  public MailLogEntry created(String created) {
    this.created = created;
    return this;
  }

  
  @ApiModelProperty(example = "2021-10-14 08:50:10", required = true, value = "creation date")
  @JsonProperty("created")
  @NotNull

  public String getCreated() {
    return created;
  }
  public void setCreated(String created) {
    this.created = created;
  }

  /**
   * creation timestamp
   **/
  public MailLogEntry time(Integer time) {
    this.time = time;
    return this;
  }

  
  @ApiModelProperty(example = "1634215809", required = true, value = "creation timestamp")
  @JsonProperty("time")
  @NotNull

  public Integer getTime() {
    return time;
  }
  public void setTime(Integer time) {
    this.time = time;
  }

  /**
   * user account
   **/
  public MailLogEntry user(String user) {
    this.user = user;
    return this;
  }

  
  @ApiModelProperty(example = "mb5658", required = true, value = "user account")
  @JsonProperty("user")
  @NotNull

  public String getUser() {
    return user;
  }
  public void setUser(String user) {
    this.user = user;
  }

  /**
   * transaction type
   **/
  public MailLogEntry transtype(String transtype) {
    this.transtype = transtype;
    return this;
  }

  
  @ApiModelProperty(example = "ESMTPSA", required = true, value = "transaction type")
  @JsonProperty("transtype")
  @NotNull

  public String getTranstype() {
    return transtype;
  }
  public void setTranstype(String transtype) {
    this.transtype = transtype;
  }

  /**
   * origin ip
   **/
  public MailLogEntry origin(String origin) {
    this.origin = origin;
    return this;
  }

  
  @ApiModelProperty(example = "199.231.189.154", required = true, value = "origin ip")
  @JsonProperty("origin")
  @NotNull

  public String getOrigin() {
    return origin;
  }
  public void setOrigin(String origin) {
    this.origin = origin;
  }

  /**
   * interface name
   **/
  public MailLogEntry _interface(String _interface) {
    this._interface = _interface;
    return this;
  }

  
  @ApiModelProperty(example = "feeder", required = true, value = "interface name")
  @JsonProperty("interface")
  @NotNull

  public String getInterface() {
    return _interface;
  }
  public void setInterface(String _interface) {
    this._interface = _interface;
  }

  /**
   * sending zone
   **/
  public MailLogEntry sendingZone(String sendingZone) {
    this.sendingZone = sendingZone;
    return this;
  }

  
  @ApiModelProperty(example = "interserver", required = true, value = "sending zone")
  @JsonProperty("sendingZone")
  @NotNull

  public String getSendingZone() {
    return sendingZone;
  }
  public void setSendingZone(String sendingZone) {
    this.sendingZone = sendingZone;
  }

  /**
   * email body size in bytes
   **/
  public MailLogEntry bodySize(Integer bodySize) {
    this.bodySize = bodySize;
    return this;
  }

  
  @ApiModelProperty(example = "63", required = true, value = "email body size in bytes")
  @JsonProperty("bodySize")
  @NotNull

  public Integer getBodySize() {
    return bodySize;
  }
  public void setBodySize(Integer bodySize) {
    this.bodySize = bodySize;
  }

  /**
   * index of email in the to adderess list
   **/
  public MailLogEntry seq(Integer seq) {
    this.seq = seq;
    return this;
  }

  
  @ApiModelProperty(example = "1", required = true, value = "index of email in the to adderess list")
  @JsonProperty("seq")
  @NotNull

  public Integer getSeq() {
    return seq;
  }
  public void setSeq(Integer seq) {
    this.seq = seq;
  }

  /**
   * to address this email is being sent to
   **/
  public MailLogEntry recipient(String recipient) {
    this.recipient = recipient;
    return this;
  }

  
  @ApiModelProperty(example = "client@isp.com", required = true, value = "to address this email is being sent to")
  @JsonProperty("recipient")
  @NotNull

  public String getRecipient() {
    return recipient;
  }
  public void setRecipient(String recipient) {
    this.recipient = recipient;
  }

  /**
   * to address domain
   **/
  public MailLogEntry domain(String domain) {
    this.domain = domain;
    return this;
  }

  
  @ApiModelProperty(example = "interserver.net", required = true, value = "to address domain")
  @JsonProperty("domain")
  @NotNull

  public String getDomain() {
    return domain;
  }
  public void setDomain(String domain) {
    this.domain = domain;
  }

  /**
   * locked status
   **/
  public MailLogEntry locked(Integer locked) {
    this.locked = locked;
    return this;
  }

  
  @ApiModelProperty(example = "1", required = true, value = "locked status")
  @JsonProperty("locked")
  @NotNull

  public Integer getLocked() {
    return locked;
  }
  public void setLocked(Integer locked) {
    this.locked = locked;
  }

  /**
   * lock timestamp
   **/
  public MailLogEntry lockTime(Integer lockTime) {
    this.lockTime = lockTime;
    return this;
  }

  
  @ApiModelProperty(example = "1634215818533", required = true, value = "lock timestamp")
  @JsonProperty("lockTime")
  @NotNull

  public Integer getLockTime() {
    return lockTime;
  }
  public void setLockTime(Integer lockTime) {
    this.lockTime = lockTime;
  }

  /**
   * assigned server
   **/
  public MailLogEntry assigned(String assigned) {
    this.assigned = assigned;
    return this;
  }

  
  @ApiModelProperty(example = "relay1", required = true, value = "assigned server")
  @JsonProperty("assigned")
  @NotNull

  public String getAssigned() {
    return assigned;
  }
  public void setAssigned(String assigned) {
    this.assigned = assigned;
  }

  /**
   * queued timestamp
   **/
  public MailLogEntry queued(String queued) {
    this.queued = queued;
    return this;
  }

  
  @ApiModelProperty(example = "2021-10-14T12:50:15.487Z", required = true, value = "queued timestamp")
  @JsonProperty("queued")
  @NotNull

  public String getQueued() {
    return queued;
  }
  public void setQueued(String queued) {
    this.queued = queued;
  }

  /**
   * mx hostname
   **/
  public MailLogEntry mxHostname(String mxHostname) {
    this.mxHostname = mxHostname;
    return this;
  }

  
  @ApiModelProperty(example = "mx.j.is.cc", required = true, value = "mx hostname")
  @JsonProperty("mxHostname")
  @NotNull

  public String getMxHostname() {
    return mxHostname;
  }
  public void setMxHostname(String mxHostname) {
    this.mxHostname = mxHostname;
  }

  /**
   * mail delivery response
   **/
  public MailLogEntry response(String response) {
    this.response = response;
    return this;
  }

  
  @ApiModelProperty(example = "250 2.0.0 Ok queued as C91D83E128C", required = true, value = "mail delivery response")
  @JsonProperty("response")
  @NotNull

  public String getResponse() {
    return response;
  }
  public void setResponse(String response) {
    this.response = response;
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
        Objects.equals(recipient, mailLogEntry.recipient) &&
        Objects.equals(domain, mailLogEntry.domain) &&
        Objects.equals(locked, mailLogEntry.locked) &&
        Objects.equals(lockTime, mailLogEntry.lockTime) &&
        Objects.equals(assigned, mailLogEntry.assigned) &&
        Objects.equals(queued, mailLogEntry.queued) &&
        Objects.equals(mxHostname, mailLogEntry.mxHostname) &&
        Objects.equals(response, mailLogEntry.response);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_id, id, from, to, subject, messageId, created, time, user, transtype, origin, _interface, sendingZone, bodySize, seq, recipient, domain, locked, lockTime, assigned, queued, mxHostname, response);
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
    sb.append("    recipient: ").append(toIndentedString(recipient)).append("\n");
    sb.append("    domain: ").append(toIndentedString(domain)).append("\n");
    sb.append("    locked: ").append(toIndentedString(locked)).append("\n");
    sb.append("    lockTime: ").append(toIndentedString(lockTime)).append("\n");
    sb.append("    assigned: ").append(toIndentedString(assigned)).append("\n");
    sb.append("    queued: ").append(toIndentedString(queued)).append("\n");
    sb.append("    mxHostname: ").append(toIndentedString(mxHostname)).append("\n");
    sb.append("    response: ").append(toIndentedString(response)).append("\n");
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
