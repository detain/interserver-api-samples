package org.openapitools.model;

import org.openapitools.model.DnsRecordType;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The request data to update a dns record.
 */
@ApiModel(description="The request data to update a dns record.")

public class DnsUpdateRecord  {
  
  @ApiModelProperty(value = "")

  private String name;

  @ApiModelProperty(value = "")

  private DnsRecordType type;

  @ApiModelProperty(value = "")

  private String content;

  @ApiModelProperty(value = "")

  private String ttl;

  @ApiModelProperty(value = "")

  private String prio;

  @ApiModelProperty(value = "")

  private String disabled;

  @ApiModelProperty(value = "")

  private String ordername;

  @ApiModelProperty(value = "")

  private String auth;
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public DnsUpdateRecord name(String name) {
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

  public DnsUpdateRecord type(DnsRecordType type) {
    this.type = type;
    return this;
  }

 /**
   * Get content
   * @return content
  **/
  @JsonProperty("content")
  public String getContent() {
    return content;
  }

  public void setContent(String content) {
    this.content = content;
  }

  public DnsUpdateRecord content(String content) {
    this.content = content;
    return this;
  }

 /**
   * Get ttl
   * @return ttl
  **/
  @JsonProperty("ttl")
  public String getTtl() {
    return ttl;
  }

  public void setTtl(String ttl) {
    this.ttl = ttl;
  }

  public DnsUpdateRecord ttl(String ttl) {
    this.ttl = ttl;
    return this;
  }

 /**
   * Get prio
   * @return prio
  **/
  @JsonProperty("prio")
  public String getPrio() {
    return prio;
  }

  public void setPrio(String prio) {
    this.prio = prio;
  }

  public DnsUpdateRecord prio(String prio) {
    this.prio = prio;
    return this;
  }

 /**
   * Get disabled
   * @return disabled
  **/
  @JsonProperty("disabled")
  public String getDisabled() {
    return disabled;
  }

  public void setDisabled(String disabled) {
    this.disabled = disabled;
  }

  public DnsUpdateRecord disabled(String disabled) {
    this.disabled = disabled;
    return this;
  }

 /**
   * Get ordername
   * @return ordername
  **/
  @JsonProperty("ordername")
  public String getOrdername() {
    return ordername;
  }

  public void setOrdername(String ordername) {
    this.ordername = ordername;
  }

  public DnsUpdateRecord ordername(String ordername) {
    this.ordername = ordername;
    return this;
  }

 /**
   * Get auth
   * @return auth
  **/
  @JsonProperty("auth")
  public String getAuth() {
    return auth;
  }

  public void setAuth(String auth) {
    this.auth = auth;
  }

  public DnsUpdateRecord auth(String auth) {
    this.auth = auth;
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
    DnsUpdateRecord dnsUpdateRecord = (DnsUpdateRecord) o;
    return Objects.equals(this.name, dnsUpdateRecord.name) &&
        Objects.equals(this.type, dnsUpdateRecord.type) &&
        Objects.equals(this.content, dnsUpdateRecord.content) &&
        Objects.equals(this.ttl, dnsUpdateRecord.ttl) &&
        Objects.equals(this.prio, dnsUpdateRecord.prio) &&
        Objects.equals(this.disabled, dnsUpdateRecord.disabled) &&
        Objects.equals(this.ordername, dnsUpdateRecord.ordername) &&
        Objects.equals(this.auth, dnsUpdateRecord.auth);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

