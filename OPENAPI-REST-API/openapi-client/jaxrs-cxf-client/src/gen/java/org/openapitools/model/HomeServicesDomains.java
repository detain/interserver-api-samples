package org.openapitools.model;

import org.openapitools.model.HomeServicesDomainsLinks;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class HomeServicesDomains  {
  
  @ApiModelProperty(value = "")

  private HomeServicesDomainsLinks links;

 /**
  * Number of domains.
  */
  @ApiModelProperty(example = "5", value = "Number of domains.")

  private Integer count;
 /**
   * Get links
   * @return links
  **/
  @JsonProperty("links")
  public HomeServicesDomainsLinks getLinks() {
    return links;
  }

  public void setLinks(HomeServicesDomainsLinks links) {
    this.links = links;
  }

  public HomeServicesDomains links(HomeServicesDomainsLinks links) {
    this.links = links;
    return this;
  }

 /**
   * Number of domains.
   * @return count
  **/
  @JsonProperty("count")
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public HomeServicesDomains count(Integer count) {
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
    HomeServicesDomains homeServicesDomains = (HomeServicesDomains) o;
    return Objects.equals(this.links, homeServicesDomains.links) &&
        Objects.equals(this.count, homeServicesDomains.count);
  }

  @Override
  public int hashCode() {
    return Objects.hash(links, count);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesDomains {\n");
    
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

