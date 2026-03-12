package org.openapitools.model;

import org.openapitools.model.DnsRecordType;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single DNS Record row for a Domain
 */
@ApiModel(description="A single DNS Record row for a Domain")

public class DnsRecord  {
  
 /**
  * The ID of the DNS Record.
  */
  @ApiModelProperty(example = "472", required = true, value = "The ID of the DNS Record.")

  private String id;

 /**
  * The ID of the Domain this is a record of.
  */
  @ApiModelProperty(example = "68", required = true, value = "The ID of the Domain this is a record of.")

  private String domainId;

  @ApiModelProperty(example = "hussfamily.com", required = true, value = "")

  private String name;

  @ApiModelProperty(required = true, value = "")

  private DnsRecordType type;

 /**
  * The content of the record, such as the IP address or hsotname.
  */
  @ApiModelProperty(example = "cdns1.interserver.net", required = true, value = "The content of the record, such as the IP address or hsotname.")

  private String content;

 /**
  * Time To Live (seconds)
  */
  @ApiModelProperty(example = "86400", required = true, value = "Time To Live (seconds)")

  private String ttl;

 /**
  * Priority
  */
  @ApiModelProperty(example = "0", required = true, value = "Priority")

  private String prio;

  @ApiModelProperty(example = "0", required = true, value = "")

  private String disabled;

 /**
  * Alternate name to use for sorting
  */
  @ApiModelProperty(required = true, value = "Alternate name to use for sorting")

  private String ordername;

  @ApiModelProperty(example = "1", required = true, value = "")

  private String auth;
 /**
   * The ID of the DNS Record.
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public DnsRecord id(String id) {
    this.id = id;
    return this;
  }

 /**
   * The ID of the Domain this is a record of.
   * @return domainId
  **/
  @JsonProperty("domain_id")
  public String getDomainId() {
    return domainId;
  }

  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  public DnsRecord domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

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

  public DnsRecord name(String name) {
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

  public DnsRecord type(DnsRecordType type) {
    this.type = type;
    return this;
  }

 /**
   * The content of the record, such as the IP address or hsotname.
   * @return content
  **/
  @JsonProperty("content")
  public String getContent() {
    return content;
  }

  public void setContent(String content) {
    this.content = content;
  }

  public DnsRecord content(String content) {
    this.content = content;
    return this;
  }

 /**
   * Time To Live (seconds)
   * @return ttl
  **/
  @JsonProperty("ttl")
  public String getTtl() {
    return ttl;
  }

  public void setTtl(String ttl) {
    this.ttl = ttl;
  }

  public DnsRecord ttl(String ttl) {
    this.ttl = ttl;
    return this;
  }

 /**
   * Priority
   * @return prio
  **/
  @JsonProperty("prio")
  public String getPrio() {
    return prio;
  }

  public void setPrio(String prio) {
    this.prio = prio;
  }

  public DnsRecord prio(String prio) {
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

  public DnsRecord disabled(String disabled) {
    this.disabled = disabled;
    return this;
  }

 /**
   * Alternate name to use for sorting
   * @return ordername
  **/
  @JsonProperty("ordername")
  public String getOrdername() {
    return ordername;
  }

  public void setOrdername(String ordername) {
    this.ordername = ordername;
  }

  public DnsRecord ordername(String ordername) {
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

  public DnsRecord auth(String auth) {
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
    DnsRecord dnsRecord = (DnsRecord) o;
    return Objects.equals(this.id, dnsRecord.id) &&
        Objects.equals(this.domainId, dnsRecord.domainId) &&
        Objects.equals(this.name, dnsRecord.name) &&
        Objects.equals(this.type, dnsRecord.type) &&
        Objects.equals(this.content, dnsRecord.content) &&
        Objects.equals(this.ttl, dnsRecord.ttl) &&
        Objects.equals(this.prio, dnsRecord.prio) &&
        Objects.equals(this.disabled, dnsRecord.disabled) &&
        Objects.equals(this.ordername, dnsRecord.ordername) &&
        Objects.equals(this.auth, dnsRecord.auth);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

