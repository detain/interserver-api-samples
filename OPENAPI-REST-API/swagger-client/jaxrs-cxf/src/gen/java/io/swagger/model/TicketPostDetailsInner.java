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

public class TicketPostDetailsInner   {
  
  @Schema(description = "")
  private Integer postId = null;
  
  @Schema(description = "")
  private String date = null;
  
  @Schema(description = "")
  private String contents = null;
  public enum CreatorEnum {
    USER("User"),
    STAFF("Staff");

    private String value;

    CreatorEnum(String value) {
      this.value = value;
    }
    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
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
  @Schema(description = "")
  private CreatorEnum creator = null;
  
  @Schema(description = "")
  private String creatorEmail = null;
  
  @Schema(description = "")
  private String creatorName = null;
  
  @Schema(description = "")
  private Integer hasattachments = null;
  
  @Schema(description = "")
  private String attachmentDownload = null;
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

  public TicketPostDetailsInner postId(Integer postId) {
    this.postId = postId;
    return this;
  }

 /**
   * Get date
   * @return date
  **/
  @JsonProperty("date")
  @NotNull
  public String getDate() {
    return date;
  }

  public void setDate(String date) {
    this.date = date;
  }

  public TicketPostDetailsInner date(String date) {
    this.date = date;
    return this;
  }

 /**
   * Get contents
   * @return contents
  **/
  @JsonProperty("contents")
  @NotNull
  public String getContents() {
    return contents;
  }

  public void setContents(String contents) {
    this.contents = contents;
  }

  public TicketPostDetailsInner contents(String contents) {
    this.contents = contents;
    return this;
  }

 /**
   * Get creator
   * @return creator
  **/
  @JsonProperty("creator")
  @NotNull
  public String getCreator() {
    if (creator == null) {
      return null;
    }
    return creator.getValue();
  }

  public void setCreator(CreatorEnum creator) {
    this.creator = creator;
  }

  public TicketPostDetailsInner creator(CreatorEnum creator) {
    this.creator = creator;
    return this;
  }

 /**
   * Get creatorEmail
   * @return creatorEmail
  **/
  @JsonProperty("creator_email")
  @NotNull
  public String getCreatorEmail() {
    return creatorEmail;
  }

  public void setCreatorEmail(String creatorEmail) {
    this.creatorEmail = creatorEmail;
  }

  public TicketPostDetailsInner creatorEmail(String creatorEmail) {
    this.creatorEmail = creatorEmail;
    return this;
  }

 /**
   * Get creatorName
   * @return creatorName
  **/
  @JsonProperty("creator_name")
  @NotNull
  public String getCreatorName() {
    return creatorName;
  }

  public void setCreatorName(String creatorName) {
    this.creatorName = creatorName;
  }

  public TicketPostDetailsInner creatorName(String creatorName) {
    this.creatorName = creatorName;
    return this;
  }

 /**
   * Get hasattachments
   * @return hasattachments
  **/
  @JsonProperty("hasattachments")
  @NotNull
  public Integer getHasattachments() {
    return hasattachments;
  }

  public void setHasattachments(Integer hasattachments) {
    this.hasattachments = hasattachments;
  }

  public TicketPostDetailsInner hasattachments(Integer hasattachments) {
    this.hasattachments = hasattachments;
    return this;
  }

 /**
   * Get attachmentDownload
   * @return attachmentDownload
  **/
  @JsonProperty("attachment_download")
  @NotNull
  public String getAttachmentDownload() {
    return attachmentDownload;
  }

  public void setAttachmentDownload(String attachmentDownload) {
    this.attachmentDownload = attachmentDownload;
  }

  public TicketPostDetailsInner attachmentDownload(String attachmentDownload) {
    this.attachmentDownload = attachmentDownload;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
