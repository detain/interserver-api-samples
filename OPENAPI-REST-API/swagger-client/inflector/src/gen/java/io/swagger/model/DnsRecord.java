package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DnsRecordType;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A single DNS Record row for a Domain
 **/
@Schema(description = "A single DNS Record row for a Domain")


public class DnsRecord   {
  @JsonProperty("id")
  private String id = null;
  @JsonProperty("domain_id")
  private String domainId = null;
  @JsonProperty("name")
  private String name = null;
  @JsonProperty("type")
  private DnsRecordType type = null;
  @JsonProperty("content")
  private String content = null;
  @JsonProperty("ttl")
  private String ttl = null;
  @JsonProperty("prio")
  private String prio = null;
  @JsonProperty("disabled")
  private String disabled = null;
  @JsonProperty("ordername")
  private String ordername = null;
  @JsonProperty("auth")
  private String auth = null;
  /**
   * The ID of the DNS Record.
   **/
  public DnsRecord id(String id) {
    this.id = id;
    return this;
  }

  
  @Schema(example = "472", required = true, description = "The ID of the DNS Record.")
  @JsonProperty("id")
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

  
  @Schema(example = "68", required = true, description = "The ID of the Domain this is a record of.")
  @JsonProperty("domain_id")
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

  
  @Schema(example = "hussfamily.com", required = true, description = "")
  @JsonProperty("name")
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

  
  @Schema(required = true, description = "")
  @JsonProperty("type")
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

  
  @Schema(example = "cdns1.interserver.net", required = true, description = "The content of the record, such as the IP address or hsotname.")
  @JsonProperty("content")
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

  
  @Schema(example = "86400", required = true, description = "Time To Live (seconds)")
  @JsonProperty("ttl")
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

  
  @Schema(example = "0", required = true, description = "Priority")
  @JsonProperty("prio")
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

  
  @Schema(example = "0", required = true, description = "")
  @JsonProperty("disabled")
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

  
  @Schema(required = true, description = "Alternate name to use for sorting")
  @JsonProperty("ordername")
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

  
  @Schema(example = "1", required = true, description = "")
  @JsonProperty("auth")
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
