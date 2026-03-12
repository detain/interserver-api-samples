package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;





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
  /**
   **/
  public TicketPostDetailsInner postId(Integer postId) {
    this.postId = postId;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("post_id")
  public Integer getPostId() {
    return postId;
  }
  public void setPostId(Integer postId) {
    this.postId = postId;
  }

  /**
   **/
  public TicketPostDetailsInner date(String date) {
    this.date = date;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("date")
  public String getDate() {
    return date;
  }
  public void setDate(String date) {
    this.date = date;
  }

  /**
   **/
  public TicketPostDetailsInner contents(String contents) {
    this.contents = contents;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("contents")
  public String getContents() {
    return contents;
  }
  public void setContents(String contents) {
    this.contents = contents;
  }

  /**
   **/
  public TicketPostDetailsInner creator(CreatorEnum creator) {
    this.creator = creator;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("creator")
  public CreatorEnum getCreator() {
    return creator;
  }
  public void setCreator(CreatorEnum creator) {
    this.creator = creator;
  }

  /**
   **/
  public TicketPostDetailsInner creatorEmail(String creatorEmail) {
    this.creatorEmail = creatorEmail;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("creator_email")
  public String getCreatorEmail() {
    return creatorEmail;
  }
  public void setCreatorEmail(String creatorEmail) {
    this.creatorEmail = creatorEmail;
  }

  /**
   **/
  public TicketPostDetailsInner creatorName(String creatorName) {
    this.creatorName = creatorName;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("creator_name")
  public String getCreatorName() {
    return creatorName;
  }
  public void setCreatorName(String creatorName) {
    this.creatorName = creatorName;
  }

  /**
   **/
  public TicketPostDetailsInner hasattachments(Integer hasattachments) {
    this.hasattachments = hasattachments;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("hasattachments")
  public Integer getHasattachments() {
    return hasattachments;
  }
  public void setHasattachments(Integer hasattachments) {
    this.hasattachments = hasattachments;
  }

  /**
   **/
  public TicketPostDetailsInner attachmentDownload(String attachmentDownload) {
    this.attachmentDownload = attachmentDownload;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("attachment_download")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
