package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DnsRecordType;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Request data for a new DNS record.")

public class DnsNewRecord   {
  private String name = null;
  private DnsRecordType type = null;
  private String content = null;
  private Integer ttl = 86400;
  private Integer prio = 0;

  /**
   * Name part of record
   **/
  
  @Schema(example = "myfamily.com", required = true, description = "Name part of record")
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
  
  @Schema(required = true, description = "")
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
  
  @Schema(example = "127.0.0.1", required = true, description = "Content of record")
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
  
  @Schema(example = "86400", description = "Time-to-live")
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
  
  @Schema(example = "0", description = "Priority")
  @JsonProperty("prio")
  @NotNull
  public Integer getPrio() {
    return prio;
  }
  public void setPrio(Integer prio) {
    this.prio = prio;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
