package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class TicketPostDetailsInner   {
  private Integer postId = null;
  private String date = null;
  private String contents = null;
  /**
   * Gets or Sets creator
   */
  public enum CreatorEnum {
    USER("User"),
    STAFF("Staff");
    private String value;

    CreatorEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private CreatorEnum creator = null;
  private String creatorEmail = null;
  private String creatorName = null;
  private Integer hasattachments = null;
  private String attachmentDownload = null;

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

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("date")
  @NotNull
  public String getDate() {
    return date;
  }
  public void setDate(String date) {
    this.date = date;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("contents")
  @NotNull
  public String getContents() {
    return contents;
  }
  public void setContents(String contents) {
    this.contents = contents;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("creator")
  @NotNull
  public CreatorEnum getCreator() {
    return creator;
  }
  public void setCreator(CreatorEnum creator) {
    this.creator = creator;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("creator_email")
  @NotNull
  public String getCreatorEmail() {
    return creatorEmail;
  }
  public void setCreatorEmail(String creatorEmail) {
    this.creatorEmail = creatorEmail;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("creator_name")
  @NotNull
  public String getCreatorName() {
    return creatorName;
  }
  public void setCreatorName(String creatorName) {
    this.creatorName = creatorName;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("hasattachments")
  @NotNull
  public Integer getHasattachments() {
    return hasattachments;
  }
  public void setHasattachments(Integer hasattachments) {
    this.hasattachments = hasattachments;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("attachment_download")
  @NotNull
  public String getAttachmentDownload() {
    return attachmentDownload;
  }
  public void setAttachmentDownload(String attachmentDownload) {
    this.attachmentDownload = attachmentDownload;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketPostDetailsInner ticketPostDetailsInner = (TicketPostDetailsInner) o;
    return Objects.equals(postId, ticketPostDetailsInner.postId) &&
        Objects.equals(date, ticketPostDetailsInner.date) &&
        Objects.equals(contents, ticketPostDetailsInner.contents) &&
        Objects.equals(creator, ticketPostDetailsInner.creator) &&
        Objects.equals(creatorEmail, ticketPostDetailsInner.creatorEmail) &&
        Objects.equals(creatorName, ticketPostDetailsInner.creatorName) &&
        Objects.equals(hasattachments, ticketPostDetailsInner.hasattachments) &&
        Objects.equals(attachmentDownload, ticketPostDetailsInner.attachmentDownload);
  }

  @Override
  public int hashCode() {
    return Objects.hash(postId, date, contents, creator, creatorEmail, creatorName, hasattachments, attachmentDownload);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketPostDetailsInner {\n");
    
    sb.append("    postId: ").append(toIndentedString(postId)).append("\n");
    sb.append("    date: ").append(toIndentedString(date)).append("\n");
    sb.append("    contents: ").append(toIndentedString(contents)).append("\n");
    sb.append("    creator: ").append(toIndentedString(creator)).append("\n");
    sb.append("    creatorEmail: ").append(toIndentedString(creatorEmail)).append("\n");
    sb.append("    creatorName: ").append(toIndentedString(creatorName)).append("\n");
    sb.append("    hasattachments: ").append(toIndentedString(hasattachments)).append("\n");
    sb.append("    attachmentDownload: ").append(toIndentedString(attachmentDownload)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
