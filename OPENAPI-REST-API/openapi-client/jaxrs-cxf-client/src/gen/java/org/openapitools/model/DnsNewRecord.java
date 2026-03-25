package org.openapitools.model;

import org.openapitools.model.DnsRecordType;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Request data for a new DNS record.
 */
@ApiModel(description="Request data for a new DNS record.")

public class DnsNewRecord  {
  
 /**
  * Name part of record
  */
  @ApiModelProperty(example = "myfamily.com", required = true, value = "Name part of record")

  private String name;

  @ApiModelProperty(required = true, value = "")

  private DnsRecordType type;

 /**
  * Content of record
  */
  @ApiModelProperty(example = "127.0.0.1", required = true, value = "Content of record")

  private String content;

 /**
  * Time-to-live
  */
  @ApiModelProperty(example = "86400", value = "Time-to-live")

  private Integer ttl = 86400;

 /**
  * Priority
  */
  @ApiModelProperty(example = "0", value = "Priority")

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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DnsNewRecord dnsNewRecord = (DnsNewRecord) o;
    return Objects.equals(this.name, dnsNewRecord.name) &&
        Objects.equals(this.type, dnsNewRecord.type) &&
        Objects.equals(this.content, dnsNewRecord.content) &&
        Objects.equals(this.ttl, dnsNewRecord.ttl) &&
        Objects.equals(this.prio, dnsNewRecord.prio);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, type, content, ttl, prio);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

