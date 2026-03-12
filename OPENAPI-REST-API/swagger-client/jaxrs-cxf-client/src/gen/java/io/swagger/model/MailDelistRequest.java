package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * Payload for removing a sender from mail blocklists.
 **/
@Schema(description="Payload for removing a sender from mail blocklists.")
public class MailDelistRequest   {
  
  @Schema(description = "Email address to delist.")
 /**
   * Email address to delist.  
  **/
  private String unblock = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
