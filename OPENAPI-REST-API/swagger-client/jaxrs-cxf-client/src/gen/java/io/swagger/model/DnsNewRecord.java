package io.swagger.model;

import io.swagger.model.DnsRecordType;
import io.swagger.v3.oas.annotations.media.Schema;

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
  * Request data for a new DNS record.
 **/
@Schema(description="Request data for a new DNS record.")
public class DnsNewRecord   {
  
  @Schema(example = "myfamily.com", required = true, description = "Name part of record")
 /**
   * Name part of record  
  **/
  private String name = null;
  
  @Schema(required = true, description = "")
  private DnsRecordType type = null;
  
  @Schema(example = "127.0.0.1", required = true, description = "Content of record")
 /**
   * Content of record  
  **/
  private String content = null;
  
  @Schema(example = "86400", description = "Time-to-live")
 /**
   * Time-to-live  
  **/
  private Integer ttl = 86400;
  
  @Schema(example = "0", description = "Priority")
 /**
   * Priority  
  **/
  private Integer prio = 0;
 /**
   * Name part of record
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public DnsNewRecord name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get type
   * @return type
  **/
  @JsonProperty("type")
  public DnsRecordType getType() {
    return type;
  }

  public void setType(DnsRecordType type) {
    this.type = type;
  }

  public DnsNewRecord type(DnsRecordType type) {
    this.type = type;
    return this;
  }

 /**
   * Content of record
   * @return content
  **/
  @JsonProperty("content")
  public String getContent() {
    return content;
  }

  public void setContent(String content) {
    this.content = content;
  }

  public DnsNewRecord content(String content) {
    this.content = content;
    return this;
  }

 /**
   * Time-to-live
   * @return ttl
  **/
  @JsonProperty("ttl")
  public Integer getTtl() {
    return ttl;
  }

  public void setTtl(Integer ttl) {
    this.ttl = ttl;
  }

  public DnsNewRecord ttl(Integer ttl) {
    this.ttl = ttl;
    return this;
  }

 /**
   * Priority
   * @return prio
  **/
  @JsonProperty("prio")
  public Integer getPrio() {
    return prio;
  }

  public void setPrio(Integer prio) {
    this.prio = prio;
  }

  public DnsNewRecord prio(Integer prio) {
    this.prio = prio;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DnsNewRecord {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    content: ").append(toIndentedString(content)).append("\n");
    sb.append("    ttl: ").append(toIndentedString(ttl)).append("\n");
    sb.append("    prio: ").append(toIndentedString(prio)).append("\n");
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
