package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * TicketPostDetailsInner
 */
@Validated
@Introspected

public class TicketPostDetailsInner   {
  @JsonProperty("post_id")
  private Integer postId = null;

  @JsonProperty("date")
  private String date = null;

  @JsonProperty("contents")
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

    @JsonCreator
    public static CreatorEnum fromValue(String text) {
      for (CreatorEnum b : CreatorEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }
  @JsonProperty("creator")
  private CreatorEnum creator = null;

  @JsonProperty("creator_email")
  private String creatorEmail = null;

  @JsonProperty("creator_name")
  private String creatorName = null;

  @JsonProperty("hasattachments")
  private Integer hasattachments = null;

  @JsonProperty("attachment_download")
  private String attachmentDownload = null;

  public TicketPostDetailsInner postId(Integer postId) {
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

  public TicketPostDetailsInner date(String date) {
    this.date = date;
    return this;
  }

  /**
   * Get date
   * @return date
  **/
  @Schema(description = "")
  @NotNull

  public String getDate() {
    return date;
  }

  public void setDate(String date) {
    this.date = date;
  }

  public TicketPostDetailsInner contents(String contents) {
    this.contents = contents;
    return this;
  }

  /**
   * Get contents
   * @return contents
  **/
  @Schema(description = "")
  @NotNull

  public String getContents() {
    return contents;
  }

  public void setContents(String contents) {
    this.contents = contents;
  }

  public TicketPostDetailsInner creator(CreatorEnum creator) {
    this.creator = creator;
    return this;
  }

  /**
   * Get creator
   * @return creator
  **/
  @Schema(description = "")
  @NotNull

  public CreatorEnum getCreator() {
    return creator;
  }

  public void setCreator(CreatorEnum creator) {
    this.creator = creator;
  }

  public TicketPostDetailsInner creatorEmail(String creatorEmail) {
    this.creatorEmail = creatorEmail;
    return this;
  }

  /**
   * Get creatorEmail
   * @return creatorEmail
  **/
  @Schema(description = "")
  @NotNull

  public String getCreatorEmail() {
    return creatorEmail;
  }

  public void setCreatorEmail(String creatorEmail) {
    this.creatorEmail = creatorEmail;
  }

  public TicketPostDetailsInner creatorName(String creatorName) {
    this.creatorName = creatorName;
    return this;
  }

  /**
   * Get creatorName
   * @return creatorName
  **/
  @Schema(description = "")
  @NotNull

  public String getCreatorName() {
    return creatorName;
  }

  public void setCreatorName(String creatorName) {
    this.creatorName = creatorName;
  }

  public TicketPostDetailsInner hasattachments(Integer hasattachments) {
    this.hasattachments = hasattachments;
    return this;
  }

  /**
   * Get hasattachments
   * @return hasattachments
  **/
  @Schema(description = "")
  @NotNull

  public Integer getHasattachments() {
    return hasattachments;
  }

  public void setHasattachments(Integer hasattachments) {
    this.hasattachments = hasattachments;
  }

  public TicketPostDetailsInner attachmentDownload(String attachmentDownload) {
    this.attachmentDownload = attachmentDownload;
    return this;
  }

  /**
   * Get attachmentDownload
   * @return attachmentDownload
  **/
  @Schema(description = "")
  @NotNull

  public String getAttachmentDownload() {
    return attachmentDownload;
  }

  public void setAttachmentDownload(String attachmentDownload) {
    this.attachmentDownload = attachmentDownload;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketPostDetailsInner ticketPostDetailsInner = (TicketPostDetailsInner) o;
    return Objects.equals(this.postId, ticketPostDetailsInner.postId) &&
        Objects.equals(this.date, ticketPostDetailsInner.date) &&
        Objects.equals(this.contents, ticketPostDetailsInner.contents) &&
        Objects.equals(this.creator, ticketPostDetailsInner.creator) &&
        Objects.equals(this.creatorEmail, ticketPostDetailsInner.creatorEmail) &&
        Objects.equals(this.creatorName, ticketPostDetailsInner.creatorName) &&
        Objects.equals(this.hasattachments, ticketPostDetailsInner.hasattachments) &&
        Objects.equals(this.attachmentDownload, ticketPostDetailsInner.attachmentDownload);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
