package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
/**
 * Blocklist status information for a mail service.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Blocklist status information for a mail service.")

public class MailDelistResponse   {
  private Integer id = null;
  private List<Object> local = new ArrayList<Object>();
  private List<Object> mbtrap = new ArrayList<Object>();
  private List<Object> subject = new ArrayList<Object>();
  private List<Object> manual = new ArrayList<Object>();

  /**
   * Mail service ID.
   **/
  public MailDelistResponse id(Integer id) {
    this.id = id;
    return this;
  }

  
  
  @Schema(description = "Mail service ID.")
  @JsonProperty("id")
  @NotNull
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   * Local blocklist entries.
   **/
  public MailDelistResponse local(List<Object> local) {
    this.local = local;
    return this;
  }

  
  
  @Schema(description = "Local blocklist entries.")
  @JsonProperty("local")
  @NotNull
  public List<Object> getLocal() {
    return local;
  }
  public void setLocal(List<Object> local) {
    this.local = local;
  }

  /**
   * MailBaby trap block entries.
   **/
  public MailDelistResponse mbtrap(List<Object> mbtrap) {
    this.mbtrap = mbtrap;
    return this;
  }

  
  
  @Schema(description = "MailBaby trap block entries.")
  @JsonProperty("mbtrap")
  @NotNull
  public List<Object> getMbtrap() {
    return mbtrap;
  }
  public void setMbtrap(List<Object> mbtrap) {
    this.mbtrap = mbtrap;
  }

  /**
   * Subject-based block entries.
   **/
  public MailDelistResponse subject(List<Object> subject) {
    this.subject = subject;
    return this;
  }

  
  
  @Schema(description = "Subject-based block entries.")
  @JsonProperty("subject")
  @NotNull
  public List<Object> getSubject() {
    return subject;
  }
  public void setSubject(List<Object> subject) {
    this.subject = subject;
  }

  /**
   * Manually blocked entries.
   **/
  public MailDelistResponse manual(List<Object> manual) {
    this.manual = manual;
    return this;
  }

  
  
  @Schema(description = "Manually blocked entries.")
  @JsonProperty("manual")
  @NotNull
  public List<Object> getManual() {
    return manual;
  }
  public void setManual(List<Object> manual) {
    this.manual = manual;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailDelistResponse mailDelistResponse = (MailDelistResponse) o;
    return Objects.equals(id, mailDelistResponse.id) &&
        Objects.equals(local, mailDelistResponse.local) &&
        Objects.equals(mbtrap, mailDelistResponse.mbtrap) &&
        Objects.equals(subject, mailDelistResponse.subject) &&
        Objects.equals(manual, mailDelistResponse.manual);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
