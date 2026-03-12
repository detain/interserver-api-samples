package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A mail order record
 */
@ApiModel(description="A mail order record")

public class MailOrder  {
  
 /**
  * The ID of the order.
  */
  @ApiModelProperty(example = "21472", required = true, value = "The ID of the order.")

  private Integer id;

 /**
  * The order status.
  */
  @ApiModelProperty(example = "active", required = true, value = "The order status.")

  private String status;

 /**
  * The username to use for this order.
  */
  @ApiModelProperty(example = "mb21472", required = true, value = "The username to use for this order.")

  private String username;

 /**
  * Optional order comment.
  */
  @ApiModelProperty(value = "Optional order comment.")

  private String comment;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailOrder mailOrder = (MailOrder) o;
    return Objects.equals(this.id, mailOrder.id) &&
        Objects.equals(this.status, mailOrder.status) &&
        Objects.equals(this.username, mailOrder.username) &&
        Objects.equals(this.comment, mailOrder.comment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, status, username, comment);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

