package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import org.threeten.bp.LocalDate;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A block entry from the clickhouse mailblocks server.
 */




public class MailBlockClickHouse   {
  private LocalDate date = null;

  private String from = null;

  private String messageId = null;

  private String subject = null;

  private String to = null;

  public MailBlockClickHouse date(LocalDate date) {
    this.date = date;
    return this;
  }

  /**
   * Get date
   * @return date
   **/
    public LocalDate getDate() {
    return date;
  }

  public void setDate(LocalDate date) {
    this.date = date;
  }

  public MailBlockClickHouse from(String from) {
    this.from = from;
    return this;
  }

  /**
   * Get from
   * @return from
   **/
    public String getFrom() {
    return from;
  }

  public void setFrom(String from) {
    this.from = from;
  }

  public MailBlockClickHouse messageId(String messageId) {
    this.messageId = messageId;
    return this;
  }

  /**
   * Get messageId
   * @return messageId
   **/
    public String getMessageId() {
    return messageId;
  }

  public void setMessageId(String messageId) {
    this.messageId = messageId;
  }

  public MailBlockClickHouse subject(String subject) {
    this.subject = subject;
    return this;
  }

  /**
   * Get subject
   * @return subject
   **/
    public String getSubject() {
    return subject;
  }

  public void setSubject(String subject) {
    this.subject = subject;
  }

  public MailBlockClickHouse to(String to) {
    this.to = to;
    return this;
  }

  /**
   * Get to
   * @return to
   **/
    public String getTo() {
    return to;
  }

  public void setTo(String to) {
    this.to = to;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailBlockClickHouse mailBlockClickHouse = (MailBlockClickHouse) o;
    return Objects.equals(this.date, mailBlockClickHouse.date) &&
        Objects.equals(this.from, mailBlockClickHouse.from) &&
        Objects.equals(this.messageId, mailBlockClickHouse.messageId) &&
        Objects.equals(this.subject, mailBlockClickHouse.subject) &&
        Objects.equals(this.to, mailBlockClickHouse.to);
  }

  @Override
  public int hashCode() {
    return Objects.hash(date, from, messageId, subject, to);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailBlockClickHouse {\n");
    
    sb.append("    date: ").append(toIndentedString(date)).append("\n");
    sb.append("    from: ").append(toIndentedString(from)).append("\n");
    sb.append("    messageId: ").append(toIndentedString(messageId)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
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
