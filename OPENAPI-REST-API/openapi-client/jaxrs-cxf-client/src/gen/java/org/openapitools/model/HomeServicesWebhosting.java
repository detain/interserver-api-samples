package org.openapitools.model;

import org.openapitools.model.HomeServicesWebhostingLinks;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class HomeServicesWebhosting  {
  
  @ApiModelProperty(value = "")

  private HomeServicesWebhostingLinks links;

 /**
  * Number of web hosting services.
  */
  @ApiModelProperty(example = "8", value = "Number of web hosting services.")

  private Integer count;
 /**
   * Get links
   * @return links
  **/
  @JsonProperty("links")
  public HomeServicesWebhostingLinks getLinks() {
    return links;
  }

  public void setLinks(HomeServicesWebhostingLinks links) {
    this.links = links;
  }

  public HomeServicesWebhosting links(HomeServicesWebhostingLinks links) {
    this.links = links;
    return this;
  }

 /**
   * Number of web hosting services.
   * @return count
  **/
  @JsonProperty("count")
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public HomeServicesWebhosting count(Integer count) {
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
    HomeServicesWebhosting homeServicesWebhosting = (HomeServicesWebhosting) o;
    return Objects.equals(this.links, homeServicesWebhosting.links) &&
        Objects.equals(this.count, homeServicesWebhosting.count);
  }

  @Override
  public int hashCode() {
    return Objects.hash(links, count);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesWebhosting {\n");
    
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
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

