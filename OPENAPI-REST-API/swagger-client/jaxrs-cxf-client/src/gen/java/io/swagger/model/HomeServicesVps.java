package io.swagger.model;

import io.swagger.model.HomeServicesVpsLinks;

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

public class HomeServicesVps   {
  
  @Schema(description = "")
  private HomeServicesVpsLinks links = null;
  
  @Schema(example = "20", description = "Number of VPS services.")
 /**
   * Number of VPS services.  
  **/
  private Integer count = null;
 /**
   * Get links
   * @return links
  **/
  @JsonProperty("links")
  public HomeServicesVpsLinks getLinks() {
    return links;
  }

  public void setLinks(HomeServicesVpsLinks links) {
    this.links = links;
  }

  public HomeServicesVps links(HomeServicesVpsLinks links) {
    this.links = links;
    return this;
  }

 /**
   * Number of VPS services.
   * @return count
  **/
  @JsonProperty("count")
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public HomeServicesVps count(Integer count) {
    this.count = count;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesVps {\n");
    
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("    count: ").append(toIndentedString(count)).append("\n");
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
