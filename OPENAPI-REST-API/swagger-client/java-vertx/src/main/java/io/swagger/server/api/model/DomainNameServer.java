package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A single registered nameserver entry with glue IPs.
 */




public class DomainNameServer   {
  private String sortorder = null;

  private String name = null;

  private String ipaddress = null;

  public DomainNameServer sortorder(String sortorder) {
    this.sortorder = sortorder;
    return this;
  }

  /**
   * Get sortorder
   * @return sortorder
   **/
    public String getSortorder() {
    return sortorder;
  }

  public void setSortorder(String sortorder) {
    this.sortorder = sortorder;
  }

  public DomainNameServer name(String name) {
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

  public DomainNameServer ipaddress(String ipaddress) {
    this.ipaddress = ipaddress;
    return this;
  }

  /**
   * Get ipaddress
   * @return ipaddress
   **/
    public String getIpaddress() {
    return ipaddress;
  }

  public void setIpaddress(String ipaddress) {
    this.ipaddress = ipaddress;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainNameServer domainNameServer = (DomainNameServer) o;
    return Objects.equals(this.sortorder, domainNameServer.sortorder) &&
        Objects.equals(this.name, domainNameServer.name) &&
        Objects.equals(this.ipaddress, domainNameServer.ipaddress);
  }

  @Override
  public int hashCode() {
    return Objects.hash(sortorder, name, ipaddress);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainNameServer {\n");
    
    sb.append("    sortorder: ").append(toIndentedString(sortorder)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    ipaddress: ").append(toIndentedString(ipaddress)).append("\n");
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
