package io.swagger.model;

import io.swagger.model.DnsRecordType;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request data for a new DNS record.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Request data for a new DNS record.")

public class DnsNewRecord   {

  private @Valid String name = null;

  private @Valid DnsRecordType type = null;

  private @Valid String content = null;

  private @Valid Integer ttl = 86400;

  private @Valid Integer prio = 0;

  /**
   * Name part of record
   **/
  public DnsNewRecord name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "myfamily.com", required = true, value = "Name part of record")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public DnsNewRecord type(DnsRecordType type) {
    this.type = type;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("type")
  @NotNull

  public DnsRecordType getType() {
    return type;
  }
  public void setType(DnsRecordType type) {
    this.type = type;
  }

  /**
   * Content of record
   **/
  public DnsNewRecord content(String content) {
    this.content = content;
    return this;
  }

  
  @ApiModelProperty(example = "127.0.0.1", required = true, value = "Content of record")
  @JsonProperty("content")
  @NotNull

  public String getContent() {
    return content;
  }
  public void setContent(String content) {
    this.content = content;
  }

  /**
   * Time-to-live
   **/
  public DnsNewRecord ttl(Integer ttl) {
    this.ttl = ttl;
    return this;
  }

  
  @ApiModelProperty(example = "86400", value = "Time-to-live")
  @JsonProperty("ttl")
  @NotNull

  public Integer getTtl() {
    return ttl;
  }
  public void setTtl(Integer ttl) {
    this.ttl = ttl;
  }

  /**
   * Priority
   **/
  public DnsNewRecord prio(Integer prio) {
    this.prio = prio;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Priority")
  @JsonProperty("prio")
  @NotNull

  public Integer getPrio() {
    return prio;
  }
  public void setPrio(Integer prio) {
    this.prio = prio;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DnsNewRecord dnsNewRecord = (DnsNewRecord) o;
    return Objects.equals(name, dnsNewRecord.name) &&
        Objects.equals(type, dnsNewRecord.type) &&
        Objects.equals(content, dnsNewRecord.content) &&
        Objects.equals(ttl, dnsNewRecord.ttl) &&
        Objects.equals(prio, dnsNewRecord.prio);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
