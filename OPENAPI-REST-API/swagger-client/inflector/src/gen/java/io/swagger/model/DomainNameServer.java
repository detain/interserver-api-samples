package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A single registered nameserver entry with glue IPs.
 **/
@Schema(description = "A single registered nameserver entry with glue IPs.")


public class DomainNameServer   {
  @JsonProperty("sortorder")
  private String sortorder = null;
  @JsonProperty("name")
  private String name = null;
  @JsonProperty("ipaddress")
  private String ipaddress = null;
  /**
   **/
  public DomainNameServer sortorder(String sortorder) {
    this.sortorder = sortorder;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("sortorder")
  public String getSortorder() {
    return sortorder;
  }
  public void setSortorder(String sortorder) {
    this.sortorder = sortorder;
  }

  /**
   **/
  public DomainNameServer name(String name) {
    this.name = name;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public DomainNameServer ipaddress(String ipaddress) {
    this.ipaddress = ipaddress;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("ipaddress")
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
    return Objects.equals(sortorder, domainNameServer.sortorder) &&
        Objects.equals(name, domainNameServer.name) &&
        Objects.equals(ipaddress, domainNameServer.ipaddress);
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
