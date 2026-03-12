package io.swagger.model;

import io.swagger.model.DnsRecordType;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * The request data to update a dns record.
 **/
@Schema(description="The request data to update a dns record.")
public class DnsUpdateRecord   {
  
  @Schema(description = "")
  private String name = null;
  
  @Schema(description = "")
  private DnsRecordType type = null;
  
  @Schema(description = "")
  private String content = null;
  
  @Schema(description = "")
  private String ttl = null;
  
  @Schema(description = "")
  private String prio = null;
  
  @Schema(description = "")
  private String disabled = null;
  
  @Schema(description = "")
  private String ordername = null;
  
  @Schema(description = "")
  private String auth = null;
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
