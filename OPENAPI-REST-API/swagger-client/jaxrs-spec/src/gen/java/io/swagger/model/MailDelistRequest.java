package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Payload for removing a sender from mail blocklists.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Payload for removing a sender from mail blocklists.")

public class MailDelistRequest   {

  private @Valid String unblock = null;

  /**
   * Email address to delist.
   **/
  public MailDelistRequest unblock(String unblock) {
    this.unblock = unblock;
    return this;
  }

  
  @ApiModelProperty(value = "Email address to delist.")
  @JsonProperty("unblock")
  @NotNull

  public String getUnblock() {
    return unblock;
  }
  public void setUnblock(String unblock) {
    this.unblock = unblock;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailDelistRequest mailDelistRequest = (MailDelistRequest) o;
    return Objects.equals(unblock, mailDelistRequest.unblock);
  }

  @Override
  public int hashCode() {
    return Objects.hash(unblock);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailDelistRequest {\n");
    
    sb.append("    unblock: ").append(toIndentedString(unblock)).append("\n");
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
