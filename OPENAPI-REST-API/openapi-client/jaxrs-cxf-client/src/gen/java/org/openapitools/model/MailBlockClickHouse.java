package org.openapitools.model;

import org.joda.time.LocalDate;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A block entry from the clickhouse mailblocks server.
 */
@ApiModel(description="A block entry from the clickhouse mailblocks server.")

public class MailBlockClickHouse  {
  
  @ApiModelProperty(required = true, value = "")

  private LocalDate date;

  @ApiModelProperty(required = true, value = "")

  private String from;

  @ApiModelProperty(required = true, value = "")

  private String messageId;

  @ApiModelProperty(required = true, value = "")

  private String subject;

  @ApiModelProperty(required = true, value = "")

  private String to;
 /**
   * Get date
   * @return date
  **/
  @JsonProperty("date")
  public LocalDate getDate() {
    return date;
  }

  public void setDate(LocalDate date) {
    this.date = date;
  }

  public MailBlockClickHouse date(LocalDate date) {
    this.date = date;
    return this;
  }

 /**
   * Get from
   * @return from
  **/
  @JsonProperty("from")
  public String getFrom() {
    return from;
  }

  public void setFrom(String from) {
    this.from = from;
  }

  public MailBlockClickHouse from(String from) {
    this.from = from;
    return this;
  }

 /**
   * Get messageId
   * @return messageId
  **/
  @JsonProperty("messageId")
  public String getMessageId() {
    return messageId;
  }

  public void setMessageId(String messageId) {
    this.messageId = messageId;
  }

  public MailBlockClickHouse messageId(String messageId) {
    this.messageId = messageId;
    return this;
  }

 /**
   * Get subject
   * @return subject
  **/
  @JsonProperty("subject")
  public String getSubject() {
    return subject;
  }

  public void setSubject(String subject) {
    this.subject = subject;
  }

  public MailBlockClickHouse subject(String subject) {
    this.subject = subject;
    return this;
  }

 /**
   * Get to
   * @return to
  **/
  @JsonProperty("to")
  public String getTo() {
    return to;
  }

  public void setTo(String to) {
    this.to = to;
  }

  public MailBlockClickHouse to(String to) {
    this.to = to;
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

