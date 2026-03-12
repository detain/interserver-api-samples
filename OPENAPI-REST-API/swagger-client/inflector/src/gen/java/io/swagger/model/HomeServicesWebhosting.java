package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.HomeServicesWebhostingLinks;
import io.swagger.v3.oas.annotations.media.Schema;





public class HomeServicesWebhosting   {
  @JsonProperty("links")
  private HomeServicesWebhostingLinks links = null;
  @JsonProperty("count")
  private Integer count = null;
  /**
   **/
  public HomeServicesWebhosting links(HomeServicesWebhostingLinks links) {
    this.links = links;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("links")
  public HomeServicesWebhostingLinks getLinks() {
    return links;
  }
  public void setLinks(HomeServicesWebhostingLinks links) {
    this.links = links;
  }

  /**
   * Number of web hosting services.
   **/
  public HomeServicesWebhosting count(Integer count) {
    this.count = count;
    return this;
  }

  
  @Schema(example = "8", description = "Number of web hosting services.")
  @JsonProperty("count")
  public Integer getCount() {
    return count;
  }
  public void setCount(Integer count) {
    this.count = count;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeServicesWebhosting homeServicesWebhosting = (HomeServicesWebhosting) o;
    return Objects.equals(links, homeServicesWebhosting.links) &&
        Objects.equals(count, homeServicesWebhosting.count);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
