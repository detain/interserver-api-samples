package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class HomeServicesBackups  {
  
 /**
  * List of backup links.
  */
  @ApiModelProperty(value = "List of backup links.")

  private List<String> links = new ArrayList<>();

 /**
  * Number of backups.
  */
  @ApiModelProperty(example = "0", value = "Number of backups.")

  private Integer count;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeServicesBackups homeServicesBackups = (HomeServicesBackups) o;
    return Objects.equals(this.links, homeServicesBackups.links) &&
        Objects.equals(this.count, homeServicesBackups.count);
  }

  @Override
  public int hashCode() {
    return Objects.hash(links, count);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

