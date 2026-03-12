package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.HomeServicesServersLinks;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class HomeServicesServers   {
  private HomeServicesServersLinks links = null;
  private Integer count = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("links")
  @NotNull
  public HomeServicesServersLinks getLinks() {
    return links;
  }
  public void setLinks(HomeServicesServersLinks links) {
    this.links = links;
  }

  /**
   * Number of servers.
   **/
  
  @Schema(example = "1", description = "Number of servers.")
  @JsonProperty("count")
  @NotNull
  public Integer getCount() {
    return count;
  }
  public void setCount(Integer count) {
    this.count = count;
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
    return Objects.equals(links, homeServicesServers.links) &&
        Objects.equals(count, homeServicesServers.count);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
