package io.swagger.model;

import javax.validation.constraints.*;

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

public class ReplyTicketResponseSchema   {
  
  @Schema(description = "")
  private Boolean success = null;
  
  @Schema(description = "")
  private Integer postId = null;
 /**
   * Get success
   * @return success
  **/
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public ReplyTicketResponseSchema success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Get postId
   * @return postId
  **/
  @JsonProperty("post_id")
  @NotNull
  public Integer getPostId() {
    return postId;
  }

  public void setPostId(Integer postId) {
    this.postId = postId;
  }

  public ReplyTicketResponseSchema postId(Integer postId) {
    this.postId = postId;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
