package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Blocklist status information for a mail service.
 */
@Schema(description = "Blocklist status information for a mail service.")
@Validated
@Introspected

public class MailDelistResponse   {
  @JsonProperty("id")
  private Integer id = null;

  @JsonProperty("local")
  @Valid
  private List<Object> local = null;

  @JsonProperty("mbtrap")
  @Valid
  private List<Object> mbtrap = null;

  @JsonProperty("subject")
  @Valid
  private List<Object> subject = null;

  @JsonProperty("manual")
  @Valid
  private List<Object> manual = null;

  public MailDelistResponse id(Integer id) {
    this.id = id;
    return this;
  }

  /**
   * Mail service ID.
   * @return id
  **/
  @Schema(description = "Mail service ID.")
  @NotNull

  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public MailDelistResponse local(List<Object> local) {
    this.local = local;
    return this;
  }

  public MailDelistResponse addLocalItem(Object localItem) {
    if (this.local == null) {
      this.local = new ArrayList<Object>();
    }
    this.local.add(localItem);
    return this;
  }

  /**
   * Local blocklist entries.
   * @return local
  **/
  @Schema(description = "Local blocklist entries.")
  @NotNull

  public List<Object> getLocal() {
    return local;
  }

  public void setLocal(List<Object> local) {
    this.local = local;
  }

  public MailDelistResponse mbtrap(List<Object> mbtrap) {
    this.mbtrap = mbtrap;
    return this;
  }

  public MailDelistResponse addMbtrapItem(Object mbtrapItem) {
    if (this.mbtrap == null) {
      this.mbtrap = new ArrayList<Object>();
    }
    this.mbtrap.add(mbtrapItem);
    return this;
  }

  /**
   * MailBaby trap block entries.
   * @return mbtrap
  **/
  @Schema(description = "MailBaby trap block entries.")
  @NotNull

  public List<Object> getMbtrap() {
    return mbtrap;
  }

  public void setMbtrap(List<Object> mbtrap) {
    this.mbtrap = mbtrap;
  }

  public MailDelistResponse subject(List<Object> subject) {
    this.subject = subject;
    return this;
  }

  public MailDelistResponse addSubjectItem(Object subjectItem) {
    if (this.subject == null) {
      this.subject = new ArrayList<Object>();
    }
    this.subject.add(subjectItem);
    return this;
  }

  /**
   * Subject-based block entries.
   * @return subject
  **/
  @Schema(description = "Subject-based block entries.")
  @NotNull

  public List<Object> getSubject() {
    return subject;
  }

  public void setSubject(List<Object> subject) {
    this.subject = subject;
  }

  public MailDelistResponse manual(List<Object> manual) {
    this.manual = manual;
    return this;
  }

  public MailDelistResponse addManualItem(Object manualItem) {
    if (this.manual == null) {
      this.manual = new ArrayList<Object>();
    }
    this.manual.add(manualItem);
    return this;
  }

  /**
   * Manually blocked entries.
   * @return manual
  **/
  @Schema(description = "Manually blocked entries.")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
