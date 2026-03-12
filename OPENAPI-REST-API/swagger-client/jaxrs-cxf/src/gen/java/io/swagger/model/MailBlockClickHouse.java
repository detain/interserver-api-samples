package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import org.joda.time.LocalDate;
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
  * A block entry from the clickhouse mailblocks server.
 **/
@Schema(description="A block entry from the clickhouse mailblocks server.")
public class MailBlockClickHouse   {
  
  @Schema(required = true, description = "")
  private LocalDate date = null;
  
  @Schema(required = true, description = "")
  private String from = null;
  
  @Schema(required = true, description = "")
  private String messageId = null;
  
  @Schema(required = true, description = "")
  private String subject = null;
  
  @Schema(required = true, description = "")
  private String to = null;
 /**
   * Get date
   * @return date
  **/
  @JsonProperty("date")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
