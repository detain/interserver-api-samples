package io.swagger.model;

import io.swagger.model.DnsRecordType;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A single DNS Record row for a Domain
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A single DNS Record row for a Domain")

public class DnsRecord   {

  private @Valid String id = null;

  private @Valid String domainId = null;

  private @Valid String name = null;

  private @Valid DnsRecordType type = null;

  private @Valid String content = null;

  private @Valid String ttl = null;

  private @Valid String prio = null;

  private @Valid String disabled = null;

  private @Valid String ordername = null;

  private @Valid String auth = null;

  /**
   * The ID of the DNS Record.
   **/
  public DnsRecord id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "472", required = true, value = "The ID of the DNS Record.")
  @JsonProperty("id")
  @NotNull

  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * The ID of the Domain this is a record of.
   **/
  public DnsRecord domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

  
  @ApiModelProperty(example = "68", required = true, value = "The ID of the Domain this is a record of.")
  @JsonProperty("domain_id")
  @NotNull

  public String getDomainId() {
    return domainId;
  }
  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  /**
   **/
  public DnsRecord name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "hussfamily.com", required = true, value = "")
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
  public DnsRecord type(DnsRecordType type) {
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
   * The content of the record, such as the IP address or hsotname.
   **/
  public DnsRecord content(String content) {
    this.content = content;
    return this;
  }

  
  @ApiModelProperty(example = "cdns1.interserver.net", required = true, value = "The content of the record, such as the IP address or hsotname.")
  @JsonProperty("content")
  @NotNull

  public String getContent() {
    return content;
  }
  public void setContent(String content) {
    this.content = content;
  }

  /**
   * Time To Live (seconds)
   **/
  public DnsRecord ttl(String ttl) {
    this.ttl = ttl;
    return this;
  }

  
  @ApiModelProperty(example = "86400", required = true, value = "Time To Live (seconds)")
  @JsonProperty("ttl")
  @NotNull

  public String getTtl() {
    return ttl;
  }
  public void setTtl(String ttl) {
    this.ttl = ttl;
  }

  /**
   * Priority
   **/
  public DnsRecord prio(String prio) {
    this.prio = prio;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "Priority")
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
  public DnsRecord disabled(String disabled) {
    this.disabled = disabled;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "")
  @JsonProperty("disabled")
  @NotNull

  public String getDisabled() {
    return disabled;
  }
  public void setDisabled(String disabled) {
    this.disabled = disabled;
  }

  /**
   * Alternate name to use for sorting
   **/
  public DnsRecord ordername(String ordername) {
    this.ordername = ordername;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Alternate name to use for sorting")
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
  public DnsRecord auth(String auth) {
    this.auth = auth;
    return this;
  }

  
  @ApiModelProperty(example = "1", required = true, value = "")
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
    DnsRecord dnsRecord = (DnsRecord) o;
    return Objects.equals(id, dnsRecord.id) &&
        Objects.equals(domainId, dnsRecord.domainId) &&
        Objects.equals(name, dnsRecord.name) &&
        Objects.equals(type, dnsRecord.type) &&
        Objects.equals(content, dnsRecord.content) &&
        Objects.equals(ttl, dnsRecord.ttl) &&
        Objects.equals(prio, dnsRecord.prio) &&
        Objects.equals(disabled, dnsRecord.disabled) &&
        Objects.equals(ordername, dnsRecord.ordername) &&
        Objects.equals(auth, dnsRecord.auth);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, domainId, name, type, content, ttl, prio, disabled, ordername, auth);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DnsRecord {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    domainId: ").append(toIndentedString(domainId)).append("\n");
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
