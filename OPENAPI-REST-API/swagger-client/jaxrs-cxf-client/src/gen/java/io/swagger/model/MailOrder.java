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
  * A mail order record
 **/
@Schema(description="A mail order record")
public class MailOrder   {
  
  @Schema(example = "21472", required = true, description = "The ID of the order.")
 /**
   * The ID of the order.  
  **/
  private Integer id = null;
  
  @Schema(example = "active", required = true, description = "The order status.")
 /**
   * The order status.  
  **/
  private String status = null;
  
  @Schema(example = "mb21472", required = true, description = "The username to use for this order.")
 /**
   * The username to use for this order.  
  **/
  private String username = null;
  
  @Schema(description = "Optional order comment.")
 /**
   * Optional order comment.  
  **/
  private String comment = null;
 /**
   * The ID of the order.
   * @return id
  **/
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public MailOrder id(Integer id) {
    this.id = id;
    return this;
  }

 /**
   * The order status.
   * @return status
  **/
  @JsonProperty("status")
  public String getStatus() {
    return status;
  }

  public void setStatus(String status) {
    this.status = status;
  }

  public MailOrder status(String status) {
    this.status = status;
    return this;
  }

 /**
   * The username to use for this order.
   * @return username
  **/
  @JsonProperty("username")
  public String getUsername() {
    return username;
  }

  public void setUsername(String username) {
    this.username = username;
  }

  public MailOrder username(String username) {
    this.username = username;
    return this;
  }

 /**
   * Optional order comment.
   * @return comment
  **/
  @JsonProperty("comment")
  public String getComment() {
    return comment;
  }

  public void setComment(String comment) {
    this.comment = comment;
  }

  public MailOrder comment(String comment) {
    this.comment = comment;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailOrder {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    username: ").append(toIndentedString(username)).append("\n");
    sb.append("    comment: ").append(toIndentedString(comment)).append("\n");
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
