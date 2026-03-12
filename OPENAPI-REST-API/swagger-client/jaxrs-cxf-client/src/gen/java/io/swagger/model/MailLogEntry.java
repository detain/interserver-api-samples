package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * An email record
 **/
@Schema(description="An email record")
public class MailLogEntry   {
  
  @Schema(example = "103172", required = true, description = "internal db id")
 /**
   * internal db id  
  **/
  private Integer _id = null;
  
  @Schema(example = "17c7eda538e0005d03", required = true, description = "mail id")
 /**
   * mail id  
  **/
  private String id = null;
  
  @Schema(example = "person@mysite.com", required = true, description = "from address")
 /**
   * from address  
  **/
  private String from = null;
  
  @Schema(example = "client@isp.com", required = true, description = "to address")
 /**
   * to address  
  **/
  private String to = null;
  
  @Schema(example = "sell 0.005 shares", required = true, description = "email subject")
 /**
   * email subject  
  **/
  private String subject = null;
  
  @Schema(example = "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>", description = "message id")
 /**
   * message id  
  **/
  private String messageId = null;
  
  @Schema(example = "2021-10-14 08:50:10", required = true, description = "creation date")
 /**
   * creation date  
  **/
  private String created = null;
  
  @Schema(example = "1634215809", required = true, description = "creation timestamp")
 /**
   * creation timestamp  
  **/
  private Integer time = null;
  
  @Schema(example = "mb5658", required = true, description = "user account")
 /**
   * user account  
  **/
  private String user = null;
  
  @Schema(example = "ESMTPSA", required = true, description = "transaction type")
 /**
   * transaction type  
  **/
  private String transtype = null;
  
  @Schema(example = "199.231.189.154", required = true, description = "origin ip")
 /**
   * origin ip  
  **/
  private String origin = null;
  
  @Schema(example = "feeder", required = true, description = "interface name")
 /**
   * interface name  
  **/
  private String _interface = null;
  
  @Schema(example = "interserver", required = true, description = "sending zone")
 /**
   * sending zone  
  **/
  private String sendingZone = null;
  
  @Schema(example = "63", required = true, description = "email body size in bytes")
 /**
   * email body size in bytes  
  **/
  private Integer bodySize = null;
  
  @Schema(example = "1", required = true, description = "index of email in the to adderess list")
 /**
   * index of email in the to adderess list  
  **/
  private Integer seq = null;
  
  @Schema(example = "client@isp.com", required = true, description = "to address this email is being sent to")
 /**
   * to address this email is being sent to  
  **/
  private String recipient = null;
  
  @Schema(example = "interserver.net", required = true, description = "to address domain")
 /**
   * to address domain  
  **/
  private String domain = null;
  
  @Schema(example = "1", required = true, description = "locked status")
 /**
   * locked status  
  **/
  private Integer locked = null;
  
  @Schema(example = "1634215818533", required = true, description = "lock timestamp")
 /**
   * lock timestamp  
  **/
  private Integer lockTime = null;
  
  @Schema(example = "relay1", required = true, description = "assigned server")
 /**
   * assigned server  
  **/
  private String assigned = null;
  
  @Schema(example = "2021-10-14T12:50:15.487Z", required = true, description = "queued timestamp")
 /**
   * queued timestamp  
  **/
  private String queued = null;
  
  @Schema(example = "mx.j.is.cc", required = true, description = "mx hostname")
 /**
   * mx hostname  
  **/
  private String mxHostname = null;
  
  @Schema(example = "250 2.0.0 Ok queued as C91D83E128C", required = true, description = "mail delivery response")
 /**
   * mail delivery response  
  **/
  private String response = null;
 /**
   * internal db id
   * @return _id
  **/
  @JsonProperty("_id")
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
