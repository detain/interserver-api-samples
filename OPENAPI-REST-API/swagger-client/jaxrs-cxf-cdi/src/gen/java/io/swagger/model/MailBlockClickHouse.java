package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import org.joda.time.LocalDate;
import javax.validation.constraints.*;
/**
 * A block entry from the clickhouse mailblocks server.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A block entry from the clickhouse mailblocks server.")

public class MailBlockClickHouse   {
  private LocalDate date = null;
  private String from = null;
  private String messageId = null;
  private String subject = null;
  private String to = null;

  /**
   **/
  public MailBlockClickHouse date(LocalDate date) {
    this.date = date;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("date")
  @NotNull
  @Valid
  public LocalDate getDate() {
    return date;
  }
  public void setDate(LocalDate date) {
    this.date = date;
  }

  /**
   **/
  public MailBlockClickHouse from(String from) {
    this.from = from;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("from")
  @NotNull
  public String getFrom() {
    return from;
  }
  public void setFrom(String from) {
    this.from = from;
  }

  /**
   **/
  public MailBlockClickHouse messageId(String messageId) {
    this.messageId = messageId;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("messageId")
  @NotNull
  public String getMessageId() {
    return messageId;
  }
  public void setMessageId(String messageId) {
    this.messageId = messageId;
  }

  /**
   **/
  public MailBlockClickHouse subject(String subject) {
    this.subject = subject;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("subject")
  @NotNull
  public String getSubject() {
    return subject;
  }
  public void setSubject(String subject) {
    this.subject = subject;
  }

  /**
   **/
  public MailBlockClickHouse to(String to) {
    this.to = to;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("to")
  @NotNull
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
    return Objects.equals(date, mailBlockClickHouse.date) &&
        Objects.equals(from, mailBlockClickHouse.from) &&
        Objects.equals(messageId, mailBlockClickHouse.messageId) &&
        Objects.equals(subject, mailBlockClickHouse.subject) &&
        Objects.equals(to, mailBlockClickHouse.to);
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
