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

@Schema(description="The request data to update a dns record.")

public class DnsUpdateRecord   {
  private String name = null;
  private DnsRecordType type = null;
  private String content = null;
  private String ttl = null;
  private String prio = null;
  private String disabled = null;
  private String ordername = null;
  private String auth = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
  @JsonProperty("type")
  @NotNull
  public DnsRecordType getType() {
    return type;
  }
  public void setType(DnsRecordType type) {
    this.type = type;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("content")
  @NotNull
  public String getContent() {
    return content;
  }
  public void setContent(String content) {
    this.content = content;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ttl")
  @NotNull
  public String getTtl() {
    return ttl;
  }
  public void setTtl(String ttl) {
    this.ttl = ttl;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("prio")
  @NotNull
  public String getPrio() {
    return prio;
  }
  public void setPrio(String prio) {
    this.prio = prio;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("disabled")
  @NotNull
  public String getDisabled() {
    return disabled;
  }
  public void setDisabled(String disabled) {
    this.disabled = disabled;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ordername")
  @NotNull
  public String getOrdername() {
    return ordername;
  }
  public void setOrdername(String ordername) {
    this.ordername = ordername;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("auth")
  @NotNull
  public String getAuth() {
    return auth;
  }
  public void setAuth(String auth) {
    this.auth = auth;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DnsUpdateRecord dnsUpdateRecord = (DnsUpdateRecord) o;
    return Objects.equals(name, dnsUpdateRecord.name) &&
        Objects.equals(type, dnsUpdateRecord.type) &&
        Objects.equals(content, dnsUpdateRecord.content) &&
        Objects.equals(ttl, dnsUpdateRecord.ttl) &&
        Objects.equals(prio, dnsUpdateRecord.prio) &&
        Objects.equals(disabled, dnsUpdateRecord.disabled) &&
        Objects.equals(ordername, dnsUpdateRecord.ordername) &&
        Objects.equals(auth, dnsUpdateRecord.auth);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, type, content, ttl, prio, disabled, ordername, auth);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DnsUpdateRecord {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    content: ").append(toIndentedString(content)).append("\n");
    sb.append("    ttl: ").append(toIndentedString(ttl)).append("\n");
    sb.append("    prio: ").append(toIndentedString(prio)).append("\n");
    sb.append("    disabled: ").append(toIndentedString(disabled)).append("\n");
    sb.append("    ordername: ").append(toIndentedString(ordername)).append("\n");
    sb.append("    auth: ").append(toIndentedString(auth)).append("\n");
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
