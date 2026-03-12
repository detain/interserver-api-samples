package io.swagger.model;

import java.util.ArrayList;
import java.util.List;

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

public class HomeServicesBackups   {
  
  @Schema(description = "List of backup links.")
 /**
   * List of backup links.  
  **/
  private List<String> links = null;
  
  @Schema(example = "0", description = "Number of backups.")
 /**
   * Number of backups.  
  **/
  private Integer count = null;
 /**
   * List of backup links.
   * @return links
  **/
  @JsonProperty("links")
  public List<String> getLinks() {
    return links;
  }

  public void setLinks(List<String> links) {
    this.links = links;
  }

  public HomeServicesBackups links(List<String> links) {
    this.links = links;
    return this;
  }

  public HomeServicesBackups addLinksItem(String linksItem) {
    this.links.add(linksItem);
    return this;
  }

 /**
   * Number of backups.
   * @return count
  **/
  @JsonProperty("count")
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public HomeServicesBackups count(Integer count) {
    this.count = count;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesBackups {\n");
    
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
