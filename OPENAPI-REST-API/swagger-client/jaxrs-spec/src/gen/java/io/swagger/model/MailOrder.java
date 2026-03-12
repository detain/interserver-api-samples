package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A mail order record
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A mail order record")

public class MailOrder   {

  private @Valid Integer id = null;

  private @Valid String status = null;

  private @Valid String username = null;

  private @Valid String comment = null;

  /**
   * The ID of the order.
   **/
  public MailOrder id(Integer id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "21472", required = true, value = "The ID of the order.")
  @JsonProperty("id")
  @NotNull

  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   * The order status.
   **/
  public MailOrder status(String status) {
    this.status = status;
    return this;
  }

  
  @ApiModelProperty(example = "active", required = true, value = "The order status.")
  @JsonProperty("status")
  @NotNull

  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   * The username to use for this order.
   **/
  public MailOrder username(String username) {
    this.username = username;
    return this;
  }

  
  @ApiModelProperty(example = "mb21472", required = true, value = "The username to use for this order.")
  @JsonProperty("username")
  @NotNull

  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
  }

  /**
   * Optional order comment.
   **/
  public MailOrder comment(String comment) {
    this.comment = comment;
    return this;
  }

  
  @ApiModelProperty(value = "Optional order comment.")
  @JsonProperty("comment")
  @NotNull

  public String getComment() {
    return comment;
  }
  public void setComment(String comment) {
    this.comment = comment;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailOrder mailOrder = (MailOrder) o;
    return Objects.equals(id, mailOrder.id) &&
        Objects.equals(status, mailOrder.status) &&
        Objects.equals(username, mailOrder.username) &&
        Objects.equals(comment, mailOrder.comment);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
