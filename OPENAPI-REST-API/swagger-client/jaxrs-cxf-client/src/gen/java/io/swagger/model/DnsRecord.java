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
  * A single DNS Record row for a Domain
 **/
@Schema(description="A single DNS Record row for a Domain")
public class DnsRecord   {
  
  @Schema(example = "472", required = true, description = "The ID of the DNS Record.")
 /**
   * The ID of the DNS Record.  
  **/
  private String id = null;
  
  @Schema(example = "68", required = true, description = "The ID of the Domain this is a record of.")
 /**
   * The ID of the Domain this is a record of.  
  **/
  private String domainId = null;
  
  @Schema(example = "hussfamily.com", required = true, description = "")
  private String name = null;
  
  @Schema(required = true, description = "")
  private DnsRecordType type = null;
  
  @Schema(example = "cdns1.interserver.net", required = true, description = "The content of the record, such as the IP address or hsotname.")
 /**
   * The content of the record, such as the IP address or hsotname.  
  **/
  private String content = null;
  
  @Schema(example = "86400", required = true, description = "Time To Live (seconds)")
 /**
   * Time To Live (seconds)  
  **/
  private String ttl = null;
  
  @Schema(example = "0", required = true, description = "Priority")
 /**
   * Priority  
  **/
  private String prio = null;
  
  @Schema(example = "0", required = true, description = "")
  private String disabled = null;
  
  @Schema(required = true, description = "Alternate name to use for sorting")
 /**
   * Alternate name to use for sorting  
  **/
  private String ordername = null;
  
  @Schema(example = "1", required = true, description = "")
  private String auth = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
