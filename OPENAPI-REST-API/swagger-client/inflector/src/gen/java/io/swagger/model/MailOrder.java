package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A mail order record
 **/
@Schema(description = "A mail order record")


public class MailOrder   {
  @JsonProperty("id")
  private Integer id = null;
  @JsonProperty("status")
  private String status = null;
  @JsonProperty("username")
  private String username = null;
  @JsonProperty("comment")
  private String comment = null;
  /**
   * The ID of the order.
   **/
  public MailOrder id(Integer id) {
    this.id = id;
    return this;
  }

  
  @Schema(example = "21472", required = true, description = "The ID of the order.")
  @JsonProperty("id")
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

  
  @Schema(example = "active", required = true, description = "The order status.")
  @JsonProperty("status")
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

  
  @Schema(example = "mb21472", required = true, description = "The username to use for this order.")
  @JsonProperty("username")
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

  
  @Schema(description = "Optional order comment.")
  @JsonProperty("comment")
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
