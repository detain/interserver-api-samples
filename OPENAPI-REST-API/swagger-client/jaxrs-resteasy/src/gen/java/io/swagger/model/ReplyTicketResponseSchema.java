package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class ReplyTicketResponseSchema   {
  private Boolean success = null;  private Integer postId = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("post_id")
  @NotNull
  public Integer getPostId() {
    return postId;
  }
  public void setPostId(Integer postId) {
    this.postId = postId;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ReplyTicketResponseSchema replyTicketResponseSchema = (ReplyTicketResponseSchema) o;
    return Objects.equals(success, replyTicketResponseSchema.success) &&
        Objects.equals(postId, replyTicketResponseSchema.postId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, postId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ReplyTicketResponseSchema {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    postId: ").append(toIndentedString(postId)).append("\n");
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
