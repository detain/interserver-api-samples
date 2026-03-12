package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * An email record
 */
@Schema(description = "An email record")
@Validated
@NotUndefined



public class MailLogEntry   {
  @JsonProperty("_id")

  private Integer _id = null;

  @JsonProperty("id")

  private String id = null;

  @JsonProperty("from")

  private String from = null;

  @JsonProperty("to")

  private String to = null;

  @JsonProperty("subject")

  private String subject = null;

  @JsonProperty("messageId")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String messageId = null;

  @JsonProperty("created")

  private String created = null;

  @JsonProperty("time")

  private Integer time = null;

  @JsonProperty("user")

  private String user = null;

  @JsonProperty("transtype")

  private String transtype = null;

  @JsonProperty("origin")

  private String origin = null;

  @JsonProperty("interface")

  private String _interface = null;

  @JsonProperty("sendingZone")

  private String sendingZone = null;

  @JsonProperty("bodySize")

  private Integer bodySize = null;

  @JsonProperty("seq")

  private Integer seq = null;

  @JsonProperty("recipient")

  private String recipient = null;

  @JsonProperty("domain")

  private String domain = null;

  @JsonProperty("locked")

  private Integer locked = null;

  @JsonProperty("lockTime")

  private Integer lockTime = null;

  @JsonProperty("assigned")

  private String assigned = null;

  @JsonProperty("queued")

  private String queued = null;

  @JsonProperty("mxHostname")

  private String mxHostname = null;

  @JsonProperty("response")

  private String response = null;


  public MailLogEntry _id(Integer _id) { 

    this._id = _id;
    return this;
  }

  /**
   * internal db id
   * @return _id
   **/
  
  @Schema(example = "103172", required = true, description = "internal db id")
  
  @NotNull
  public Integer getId() {  
    return _id;
  }



  public void setId(Integer _id) { 

    this._id = _id;
  }

  public MailLogEntry id(String id) { 

    this.id = id;
    return this;
  }

  /**
   * mail id
   * @return id
   **/
  
  @Schema(example = "17c7eda538e0005d03", required = true, description = "mail id")
  
  @NotNull
  public String getId() {  
    return id;
  }



  public void setId(String id) { 

    this.id = id;
  }

  public MailLogEntry from(String from) { 

    this.from = from;
    return this;
  }

  /**
   * from address
   * @return from
   **/
  
  @Schema(example = "person@mysite.com", required = true, description = "from address")
  
  @NotNull
  public String getFrom() {  
    return from;
  }



  public void setFrom(String from) { 

    this.from = from;
  }

  public MailLogEntry to(String to) { 

    this.to = to;
    return this;
  }

  /**
   * to address
   * @return to
   **/
  
  @Schema(example = "client@isp.com", required = true, description = "to address")
  
  @NotNull
  public String getTo() {  
    return to;
  }



  public void setTo(String to) { 

    this.to = to;
  }

  public MailLogEntry subject(String subject) { 

    this.subject = subject;
    return this;
  }

  /**
   * email subject
   * @return subject
   **/
  
  @Schema(example = "sell 0.005 shares", required = true, description = "email subject")
  
  @NotNull
  public String getSubject() {  
    return subject;
  }



  public void setSubject(String subject) { 

    this.subject = subject;
  }

  public MailLogEntry messageId(String messageId) { 

    this.messageId = messageId;
    return this;
  }

  /**
   * message id
   * @return messageId
   **/
  
  @Schema(example = "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>", description = "message id")
  
  public String getMessageId() {  
    return messageId;
  }



  public void setMessageId(String messageId) { 
    this.messageId = messageId;
  }

  public MailLogEntry created(String created) { 

    this.created = created;
    return this;
  }

  /**
   * creation date
   * @return created
   **/
  
  @Schema(example = "2021-10-14 08:50:10", required = true, description = "creation date")
  
  @NotNull
  public String getCreated() {  
    return created;
  }



  public void setCreated(String created) { 

    this.created = created;
  }

  public MailLogEntry time(Integer time) { 

    this.time = time;
    return this;
  }

  /**
   * creation timestamp
   * @return time
   **/
  
  @Schema(example = "1634215809", required = true, description = "creation timestamp")
  
  @NotNull
  public Integer getTime() {  
    return time;
  }



  public void setTime(Integer time) { 

    this.time = time;
  }

  public MailLogEntry user(String user) { 

    this.user = user;
    return this;
  }

  /**
   * user account
   * @return user
   **/
  
  @Schema(example = "mb5658", required = true, description = "user account")
  
  @NotNull
  public String getUser() {  
    return user;
  }



  public void setUser(String user) { 

    this.user = user;
  }

  public MailLogEntry transtype(String transtype) { 

    this.transtype = transtype;
    return this;
  }

  /**
   * transaction type
   * @return transtype
   **/
  
  @Schema(example = "ESMTPSA", required = true, description = "transaction type")
  
  @NotNull
  public String getTranstype() {  
    return transtype;
  }



  public void setTranstype(String transtype) { 

    this.transtype = transtype;
  }

  public MailLogEntry origin(String origin) { 

    this.origin = origin;
    return this;
  }

  /**
   * origin ip
   * @return origin
   **/
  
  @Schema(example = "199.231.189.154", required = true, description = "origin ip")
  
  @NotNull
  public String getOrigin() {  
    return origin;
  }



  public void setOrigin(String origin) { 

    this.origin = origin;
  }

  public MailLogEntry _interface(String _interface) { 

    this._interface = _interface;
    return this;
  }

  /**
   * interface name
   * @return _interface
   **/
  
  @Schema(example = "feeder", required = true, description = "interface name")
  
  @NotNull
  public String getInterface() {  
    return _interface;
  }



  public void setInterface(String _interface) { 

    this._interface = _interface;
  }

  public MailLogEntry sendingZone(String sendingZone) { 

    this.sendingZone = sendingZone;
    return this;
  }

  /**
   * sending zone
   * @return sendingZone
   **/
  
  @Schema(example = "interserver", required = true, description = "sending zone")
  
  @NotNull
  public String getSendingZone() {  
    return sendingZone;
  }



  public void setSendingZone(String sendingZone) { 

    this.sendingZone = sendingZone;
  }

  public MailLogEntry bodySize(Integer bodySize) { 

    this.bodySize = bodySize;
    return this;
  }

  /**
   * email body size in bytes
   * @return bodySize
   **/
  
  @Schema(example = "63", required = true, description = "email body size in bytes")
  
  @NotNull
  public Integer getBodySize() {  
    return bodySize;
  }



  public void setBodySize(Integer bodySize) { 

    this.bodySize = bodySize;
  }

  public MailLogEntry seq(Integer seq) { 

    this.seq = seq;
    return this;
  }

  /**
   * index of email in the to adderess list
   * @return seq
   **/
  
  @Schema(example = "1", required = true, description = "index of email in the to adderess list")
  
  @NotNull
  public Integer getSeq() {  
    return seq;
  }



  public void setSeq(Integer seq) { 

    this.seq = seq;
  }

  public MailLogEntry recipient(String recipient) { 

    this.recipient = recipient;
    return this;
  }

  /**
   * to address this email is being sent to
   * @return recipient
   **/
  
  @Schema(example = "client@isp.com", required = true, description = "to address this email is being sent to")
  
  @NotNull
  public String getRecipient() {  
    return recipient;
  }



  public void setRecipient(String recipient) { 

    this.recipient = recipient;
  }

  public MailLogEntry domain(String domain) { 

    this.domain = domain;
    return this;
  }

  /**
   * to address domain
   * @return domain
   **/
  
  @Schema(example = "interserver.net", required = true, description = "to address domain")
  
  @NotNull
  public String getDomain() {  
    return domain;
  }



  public void setDomain(String domain) { 

    this.domain = domain;
  }

  public MailLogEntry locked(Integer locked) { 

    this.locked = locked;
    return this;
  }

  /**
   * locked status
   * @return locked
   **/
  
  @Schema(example = "1", required = true, description = "locked status")
  
  @NotNull
  public Integer getLocked() {  
    return locked;
  }



  public void setLocked(Integer locked) { 

    this.locked = locked;
  }

  public MailLogEntry lockTime(Integer lockTime) { 

    this.lockTime = lockTime;
    return this;
  }

  /**
   * lock timestamp
   * @return lockTime
   **/
  
  @Schema(example = "1634215818533", required = true, description = "lock timestamp")
  
  @NotNull
  public Integer getLockTime() {  
    return lockTime;
  }



  public void setLockTime(Integer lockTime) { 

    this.lockTime = lockTime;
  }

  public MailLogEntry assigned(String assigned) { 

    this.assigned = assigned;
    return this;
  }

  /**
   * assigned server
   * @return assigned
   **/
  
  @Schema(example = "relay1", required = true, description = "assigned server")
  
  @NotNull
  public String getAssigned() {  
    return assigned;
  }



  public void setAssigned(String assigned) { 

    this.assigned = assigned;
  }

  public MailLogEntry queued(String queued) { 

    this.queued = queued;
    return this;
  }

  /**
   * queued timestamp
   * @return queued
   **/
  
  @Schema(example = "2021-10-14T12:50:15.487Z", required = true, description = "queued timestamp")
  
  @NotNull
  public String getQueued() {  
    return queued;
  }



  public void setQueued(String queued) { 

    this.queued = queued;
  }

  public MailLogEntry mxHostname(String mxHostname) { 

    this.mxHostname = mxHostname;
    return this;
  }

  /**
   * mx hostname
   * @return mxHostname
   **/
  
  @Schema(example = "mx.j.is.cc", required = true, description = "mx hostname")
  
  @NotNull
  public String getMxHostname() {  
    return mxHostname;
  }



  public void setMxHostname(String mxHostname) { 

    this.mxHostname = mxHostname;
  }

  public MailLogEntry response(String response) { 

    this.response = response;
    return this;
  }

  /**
   * mail delivery response
   * @return response
   **/
  
  @Schema(example = "250 2.0.0 Ok queued as C91D83E128C", required = true, description = "mail delivery response")
  
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
    return Objects.equals(this._id, mailLogEntry._id) &&
        Objects.equals(this.id, mailLogEntry.id) &&
        Objects.equals(this.from, mailLogEntry.from) &&
        Objects.equals(this.to, mailLogEntry.to) &&
        Objects.equals(this.subject, mailLogEntry.subject) &&
        Objects.equals(this.messageId, mailLogEntry.messageId) &&
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
        Objects.equals(this.response, mailLogEntry.response);
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
