package org.openapitools.model;

import org.openapitools.model.HomeServicesServersLinks;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class HomeServicesServers  {
  
  @ApiModelProperty(value = "")

  private HomeServicesServersLinks links;

 /**
  * Number of servers.
  */
  @ApiModelProperty(example = "1", value = "Number of servers.")

  private Integer count;
 /**
   * Get links
   * @return links
  **/
  @JsonProperty("links")
  public HomeServicesServersLinks getLinks() {
    return links;
  }

  public void setLinks(HomeServicesServersLinks links) {
    this.links = links;
  }

  public HomeServicesServers links(HomeServicesServersLinks links) {
    this.links = links;
    return this;
  }

 /**
   * Number of servers.
   * @return count
  **/
  @JsonProperty("count")
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public HomeServicesServers count(Integer count) {
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
    HomeServicesServers homeServicesServers = (HomeServicesServers) o;
    return Objects.equals(this.links, homeServicesServers.links) &&
        Objects.equals(this.count, homeServicesServers.count);
  }

  @Override
  public int hashCode() {
    return Objects.hash(links, count);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesServers {\n");
    
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

