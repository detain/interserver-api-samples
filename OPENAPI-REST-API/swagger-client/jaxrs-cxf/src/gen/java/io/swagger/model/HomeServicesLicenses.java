package io.swagger.model;

import io.swagger.model.HomeServicesLicensesLinks;
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

public class HomeServicesLicenses   {
  
  @Schema(description = "")
  private HomeServicesLicensesLinks links = null;
  
  @Schema(example = "1", description = "Number of licenses.")
 /**
   * Number of licenses.  
  **/
  private Integer count = null;
 /**
   * Get links
   * @return links
  **/
  @JsonProperty("links")
  @NotNull
  public HomeServicesLicensesLinks getLinks() {
    return links;
  }

  public void setLinks(HomeServicesLicensesLinks links) {
    this.links = links;
  }

  public HomeServicesLicenses links(HomeServicesLicensesLinks links) {
    this.links = links;
    return this;
  }

 /**
   * Number of licenses.
   * @return count
  **/
  @JsonProperty("count")
  @NotNull
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public HomeServicesLicenses count(Integer count) {
    this.count = count;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesLicenses {\n");
    
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
