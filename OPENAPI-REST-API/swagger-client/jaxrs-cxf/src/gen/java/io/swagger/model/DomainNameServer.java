package io.swagger.model;

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
  * A single registered nameserver entry with glue IPs.
 **/
@Schema(description="A single registered nameserver entry with glue IPs.")
public class DomainNameServer   {
  
  @Schema(description = "")
  private String sortorder = null;
  
  @Schema(description = "")
  private String name = null;
  
  @Schema(description = "")
  private String ipaddress = null;
 /**
   * Get sortorder
   * @return sortorder
  **/
  @JsonProperty("sortorder")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
