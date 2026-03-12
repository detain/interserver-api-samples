package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * An email record
 */




public class MailLogEntry   {
  private Integer _id = null;

  private String id = null;

  private String from = null;

  private String to = null;

  private String subject = null;

  private String messageId = null;

  private String created = null;

  private Integer time = null;

  private String user = null;

  private String transtype = null;

  private String origin = null;

  private String _interface = null;

  private String sendingZone = null;

  private Integer bodySize = null;

  private Integer seq = null;

  private String recipient = null;

  private String domain = null;

  private Integer locked = null;

  private Integer lockTime = null;

  private String assigned = null;

  private String queued = null;

  private String mxHostname = null;

  private String response = null;

  public MailLogEntry _id(Integer _id) {
    this._id = _id;
    return this;
  }

  /**
   * internal db id
   * @return _id
   **/
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
