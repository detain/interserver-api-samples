package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Blocklist status information for a mail service.
 */
@ApiModel(description="Blocklist status information for a mail service.")

public class MailDelistResponse  {
  
 /**
  * Mail service ID.
  */
  @ApiModelProperty(value = "Mail service ID.")

  private Integer id;

 /**
  * Local blocklist entries.
  */
  @ApiModelProperty(value = "Local blocklist entries.")

  private List<Object> local = new ArrayList<>();

 /**
  * MailBaby trap block entries.
  */
  @ApiModelProperty(value = "MailBaby trap block entries.")

  private List<Object> mbtrap = new ArrayList<>();

 /**
  * Subject-based block entries.
  */
  @ApiModelProperty(value = "Subject-based block entries.")

  private List<Object> subject = new ArrayList<>();

 /**
  * Manually blocked entries.
  */
  @ApiModelProperty(value = "Manually blocked entries.")

  private List<Object> manual = new ArrayList<>();
 /**
   * Mail service ID.
   * @return id
  **/
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public MailDelistResponse id(Integer id) {
    this.id = id;
    return this;
  }

 /**
   * Local blocklist entries.
   * @return local
  **/
  @JsonProperty("local")
  public List<Object> getLocal() {
    return local;
  }

  public void setLocal(List<Object> local) {
    this.local = local;
  }

  public MailDelistResponse local(List<Object> local) {
    this.local = local;
    return this;
  }

  public MailDelistResponse addLocalItem(Object localItem) {
    this.local.add(localItem);
    return this;
  }

 /**
   * MailBaby trap block entries.
   * @return mbtrap
  **/
  @JsonProperty("mbtrap")
  public List<Object> getMbtrap() {
    return mbtrap;
  }

  public void setMbtrap(List<Object> mbtrap) {
    this.mbtrap = mbtrap;
  }

  public MailDelistResponse mbtrap(List<Object> mbtrap) {
    this.mbtrap = mbtrap;
    return this;
  }

  public MailDelistResponse addMbtrapItem(Object mbtrapItem) {
    this.mbtrap.add(mbtrapItem);
    return this;
  }

 /**
   * Subject-based block entries.
   * @return subject
  **/
  @JsonProperty("subject")
  public List<Object> getSubject() {
    return subject;
  }

  public void setSubject(List<Object> subject) {
    this.subject = subject;
  }

  public MailDelistResponse subject(List<Object> subject) {
    this.subject = subject;
    return this;
  }

  public MailDelistResponse addSubjectItem(Object subjectItem) {
    this.subject.add(subjectItem);
    return this;
  }

 /**
   * Manually blocked entries.
   * @return manual
  **/
  @JsonProperty("manual")
  public List<Object> getManual() {
    return manual;
  }

  public void setManual(List<Object> manual) {
    this.manual = manual;
  }

  public MailDelistResponse manual(List<Object> manual) {
    this.manual = manual;
    return this;
  }

  public MailDelistResponse addManualItem(Object manualItem) {
    this.manual.add(manualItem);
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailDelistResponse mailDelistResponse = (MailDelistResponse) o;
    return Objects.equals(this.id, mailDelistResponse.id) &&
        Objects.equals(this.local, mailDelistResponse.local) &&
        Objects.equals(this.mbtrap, mailDelistResponse.mbtrap) &&
        Objects.equals(this.subject, mailDelistResponse.subject) &&
        Objects.equals(this.manual, mailDelistResponse.manual);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, local, mbtrap, subject, manual);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailDelistResponse {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    local: ").append(toIndentedString(local)).append("\n");
    sb.append("    mbtrap: ").append(toIndentedString(mbtrap)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    manual: ").append(toIndentedString(manual)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

