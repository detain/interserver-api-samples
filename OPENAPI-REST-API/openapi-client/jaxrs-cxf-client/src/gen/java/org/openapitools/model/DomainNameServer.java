package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single registered nameserver entry with glue IPs.
 */
@ApiModel(description="A single registered nameserver entry with glue IPs.")

public class DomainNameServer  {
  
  @ApiModelProperty(value = "")

  private String sortorder;

  @ApiModelProperty(value = "")

  private String name;

  @ApiModelProperty(value = "")

  private String ipaddress;
 /**
   * Get sortorder
   * @return sortorder
  **/
  @JsonProperty("sortorder")
  public String getSortorder() {
    return sortorder;
  }

  public void setSortorder(String sortorder) {
    this.sortorder = sortorder;
  }

  public DomainNameServer sortorder(String sortorder) {
    this.sortorder = sortorder;
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

  public DomainNameServer name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get ipaddress
   * @return ipaddress
  **/
  @JsonProperty("ipaddress")
  public String getIpaddress() {
    return ipaddress;
  }

  public void setIpaddress(String ipaddress) {
    this.ipaddress = ipaddress;
  }

  public DomainNameServer ipaddress(String ipaddress) {
    this.ipaddress = ipaddress;
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

