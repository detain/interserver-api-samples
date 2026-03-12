package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ReplyTicketResponseSchema
 */
@Validated
@Introspected

public class ReplyTicketResponseSchema   {
  @JsonProperty("success")
  private Boolean success = null;

  @JsonProperty("post_id")
  private Integer postId = null;

  public ReplyTicketResponseSchema success(Boolean success) {
    this.success = success;
    return this;
  }

  /**
   * Get success
   * @return success
  **/
  @Schema(description = "")
  @NotNull

  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public ReplyTicketResponseSchema postId(Integer postId) {
    this.postId = postId;
    return this;
  }

  /**
   * Get postId
   * @return postId
  **/
  @Schema(description = "")
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
    return Objects.equals(this.success, replyTicketResponseSchema.success) &&
        Objects.equals(this.postId, replyTicketResponseSchema.postId);
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
