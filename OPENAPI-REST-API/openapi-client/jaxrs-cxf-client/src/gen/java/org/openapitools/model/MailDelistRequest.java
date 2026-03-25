package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Payload for removing a sender from mail blocklists.
 */
@ApiModel(description="Payload for removing a sender from mail blocklists.")

public class MailDelistRequest  {
  
 /**
  * Email address to delist.
  */
  @ApiModelProperty(value = "Email address to delist.")

  private String unblock;
 /**
   * Email address to delist.
   * @return unblock
  **/
  @JsonProperty("unblock")
  public String getUnblock() {
    return unblock;
  }

  public void setUnblock(String unblock) {
    this.unblock = unblock;
  }

  public MailDelistRequest unblock(String unblock) {
    this.unblock = unblock;
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
    MailDelistRequest mailDelistRequest = (MailDelistRequest) o;
    return Objects.equals(this.unblock, mailDelistRequest.unblock);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

