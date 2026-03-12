package io.swagger.model;

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
  * Create firewall rule for your ip
 **/
@Schema(description="Create firewall rule for your ip")
public class CreateFilter   {
  
  @Schema(example = "cs2_udp", required = true, description = "")
  private String filterType = null;
  
  @Schema(example = "8080", required = true, description = "")
  private Integer port = null;
 /**
   * Get filterType
   * @return filterType
  **/
  @JsonProperty("filter_type")
  public String getFilterType() {
    return filterType;
  }

  public void setFilterType(String filterType) {
    this.filterType = filterType;
  }

  public CreateFilter filterType(String filterType) {
    this.filterType = filterType;
    return this;
  }

 /**
   * Get port
   * @return port
  **/
  @JsonProperty("port")
  public Integer getPort() {
    return port;
  }

  public void setPort(Integer port) {
    this.port = port;
  }

  public CreateFilter port(Integer port) {
    this.port = port;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CreateFilter {\n");
    
    sb.append("    filterType: ").append(toIndentedString(filterType)).append("\n");
    sb.append("    port: ").append(toIndentedString(port)).append("\n");
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
