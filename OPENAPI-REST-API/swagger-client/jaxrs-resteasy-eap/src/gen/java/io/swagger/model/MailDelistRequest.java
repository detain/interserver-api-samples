package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Payload for removing a sender from mail blocklists.")

public class MailDelistRequest   {
  private String unblock = null;

  /**
   * Email address to delist.
   **/
  
  @Schema(description = "Email address to delist.")
  @JsonProperty("unblock")
  @NotNull
  public String getUnblock() {
    return unblock;
  }
  public void setUnblock(String unblock) {
    this.unblock = unblock;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
