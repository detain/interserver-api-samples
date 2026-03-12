package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.DnsRecordType;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A single DNS Record row for a Domain
 */




public class DnsRecord   {
  private String id = null;

  private String domainId = null;

  private String name = null;

  private DnsRecordType type = null;

  private String content = null;

  private String ttl = null;

  private String prio = null;

  private String disabled = null;

  private String ordername = null;

  private String auth = null;

  public DnsRecord id(String id) {
    this.id = id;
    return this;
  }

  /**
   * The ID of the DNS Record.
   * @return id
   **/
    public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public DnsRecord domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

  /**
   * The ID of the Domain this is a record of.
   * @return domainId
   **/
    public String getDomainId() {
    return domainId;
  }

  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  public DnsRecord name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Get name
   * @return name
   **/
    public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public DnsRecord type(DnsRecordType type) {
    this.type = type;
    return this;
  }

  /**
   * Get type
   * @return type
   **/
    public DnsRecordType getType() {
    return type;
  }

  public void setType(DnsRecordType type) {
    this.type = type;
  }

  public DnsRecord content(String content) {
    this.content = content;
    return this;
  }

  /**
   * The content of the record, such as the IP address or hsotname.
   * @return content
   **/
    public String getContent() {
    return content;
  }

  public void setContent(String content) {
    this.content = content;
  }

  public DnsRecord ttl(String ttl) {
    this.ttl = ttl;
    return this;
  }

  /**
   * Time To Live (seconds)
   * @return ttl
   **/
    public String getTtl() {
    return ttl;
  }

  public void setTtl(String ttl) {
    this.ttl = ttl;
  }

  public DnsRecord prio(String prio) {
    this.prio = prio;
    return this;
  }

  /**
   * Priority
   * @return prio
   **/
    public String getPrio() {
    return prio;
  }

  public void setPrio(String prio) {
    this.prio = prio;
  }

  public DnsRecord disabled(String disabled) {
    this.disabled = disabled;
    return this;
  }

  /**
   * Get disabled
   * @return disabled
   **/
    public String getDisabled() {
    return disabled;
  }

  public void setDisabled(String disabled) {
    this.disabled = disabled;
  }

  public DnsRecord ordername(String ordername) {
    this.ordername = ordername;
    return this;
  }

  /**
   * Alternate name to use for sorting
   * @return ordername
   **/
    public String getOrdername() {
    return ordername;
  }

  public void setOrdername(String ordername) {
    this.ordername = ordername;
  }

  public DnsRecord auth(String auth) {
    this.auth = auth;
    return this;
  }

  /**
   * Get auth
   * @return auth
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
