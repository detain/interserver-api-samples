package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;

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

/**
  * Blocklist status information for a mail service.
 **/
@Schema(description="Blocklist status information for a mail service.")
public class MailDelistResponse   {
  
  @Schema(description = "Mail service ID.")
 /**
   * Mail service ID.  
  **/
  private Integer id = null;
  
  @Schema(description = "Local blocklist entries.")
 /**
   * Local blocklist entries.  
  **/
  private List<Object> local = null;
  
  @Schema(description = "MailBaby trap block entries.")
 /**
   * MailBaby trap block entries.  
  **/
  private List<Object> mbtrap = null;
  
  @Schema(description = "Subject-based block entries.")
 /**
   * Subject-based block entries.  
  **/
  private List<Object> subject = null;
  
  @Schema(description = "Manually blocked entries.")
 /**
   * Manually blocked entries.  
  **/
  private List<Object> manual = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
