package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * This is a block entry from the rspamd block list.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "This is a block entry from the rspamd block list.")

public class MailBlockRspamd   {
  private String from = null;
  private String subject = null;

  /**
   **/
  public MailBlockRspamd from(String from) {
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
  public MailBlockRspamd subject(String subject) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailBlockRspamd mailBlockRspamd = (MailBlockRspamd) o;
    return Objects.equals(from, mailBlockRspamd.from) &&
        Objects.equals(subject, mailBlockRspamd.subject);
  }

  @Override
  public int hashCode() {
    return Objects.hash(from, subject);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailBlockRspamd {\n");
    
    sb.append("    from: ").append(toIndentedString(from)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
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
