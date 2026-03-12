package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A mail order record
 */




public class MailOrder   {
  private Integer id = null;

  private String status = null;

  private String username = null;

  private String comment = null;

  public MailOrder id(Integer id) {
    this.id = id;
    return this;
  }

  /**
   * The ID of the order.
   * @return id
   **/
    public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public MailOrder status(String status) {
    this.status = status;
    return this;
  }

  /**
   * The order status.
   * @return status
   **/
    public String getStatus() {
    return status;
  }

  public void setStatus(String status) {
    this.status = status;
  }

  public MailOrder username(String username) {
    this.username = username;
    return this;
  }

  /**
   * The username to use for this order.
   * @return username
   **/
    public String getUsername() {
    return username;
  }

  public void setUsername(String username) {
    this.username = username;
  }

  public MailOrder comment(String comment) {
    this.comment = comment;
    return this;
  }

  /**
   * Optional order comment.
   * @return comment
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
