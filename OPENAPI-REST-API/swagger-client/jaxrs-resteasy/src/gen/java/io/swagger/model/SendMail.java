package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Details for an Email")

public class SendMail   {
  private String to = null;  private String from = null;  private String subject = null;  private String body = null;

  /**
   * The Contact whom is the primary recipient of this email.
   **/
  
  @Schema(example = "johndoe@company.com", required = true, description = "The Contact whom is the primary recipient of this email.")
  @JsonProperty("to")
  @NotNull
  public String getTo() {
    return to;
  }
  public void setTo(String to) {
    this.to = to;
  }

  /**
   * The contact whom is the this email is from.
   **/
  
  @Schema(example = "janedoe@company.com", required = true, description = "The contact whom is the this email is from.")
  @JsonProperty("from")
  @NotNull
  public String getFrom() {
    return from;
  }
  public void setFrom(String from) {
    this.from = from;
  }

  /**
   * The subject or title of the email
   **/
  
  @Schema(example = "Attention Client", required = true, description = "The subject or title of the email")
  @JsonProperty("subject")
  @NotNull
  public String getSubject() {
    return subject;
  }
  public void setSubject(String subject) {
    this.subject = subject;
  }

  /**
   * The main email contents.
   **/
  
  @Schema(example = "This is an email to inform you that something noteworthy happened.", required = true, description = "The main email contents.")
  @JsonProperty("body")
  @NotNull
  public String getBody() {
    return body;
  }
  public void setBody(String body) {
    this.body = body;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SendMail sendMail = (SendMail) o;
    return Objects.equals(to, sendMail.to) &&
        Objects.equals(from, sendMail.from) &&
        Objects.equals(subject, sendMail.subject) &&
        Objects.equals(body, sendMail.body);
  }

  @Override
  public int hashCode() {
    return Objects.hash(to, from, subject, body);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SendMail {\n");
    
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    from: ").append(toIndentedString(from)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    body: ").append(toIndentedString(body)).append("\n");
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
