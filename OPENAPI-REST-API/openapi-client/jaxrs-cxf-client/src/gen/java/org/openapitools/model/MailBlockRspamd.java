package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * This is a block entry from the rspamd block list.
 */
@ApiModel(description="This is a block entry from the rspamd block list.")

public class MailBlockRspamd  {
  
  @ApiModelProperty(required = true, value = "")

  private String from;

  @ApiModelProperty(required = true, value = "")

  private String subject;
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

  public MailBlockRspamd from(String from) {
    this.from = from;
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

  public MailBlockRspamd subject(String subject) {
    this.subject = subject;
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
    MailBlockRspamd mailBlockRspamd = (MailBlockRspamd) o;
    return Objects.equals(this.from, mailBlockRspamd.from) &&
        Objects.equals(this.subject, mailBlockRspamd.subject);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

