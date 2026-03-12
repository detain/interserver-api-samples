package io.swagger.model;

import io.swagger.model.DnsRecordType;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The request data to update a dns record.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The request data to update a dns record.")

public class DnsUpdateRecord   {

  private @Valid String name = null;

  private @Valid DnsRecordType type = null;

  private @Valid String content = null;

  private @Valid String ttl = null;

  private @Valid String prio = null;

  private @Valid String disabled = null;

  private @Valid String ordername = null;

  private @Valid String auth = null;

  /**
   **/
  public DnsUpdateRecord name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DnsUpdateRecord type(DnsRecordType type) {
    this.type = type;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DnsUpdateRecord content(String content) {
    this.content = content;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DnsUpdateRecord ttl(String ttl) {
    this.ttl = ttl;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DnsUpdateRecord prio(String prio) {
    this.prio = prio;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DnsUpdateRecord disabled(String disabled) {
    this.disabled = disabled;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DnsUpdateRecord ordername(String ordername) {
    this.ordername = ordername;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DnsUpdateRecord auth(String auth) {
    this.auth = auth;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("auth")
  @NotNull

  public String getAuth() {
    return auth;
  }
  public void setAuth(String auth) {
    this.auth = auth;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
