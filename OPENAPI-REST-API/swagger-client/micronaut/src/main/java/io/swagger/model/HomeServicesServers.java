package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.HomeServicesServersLinks;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * HomeServicesServers
 */
@Validated
@Introspected

public class HomeServicesServers   {
  @JsonProperty("links")
  private HomeServicesServersLinks links = null;

  @JsonProperty("count")
  private Integer count = null;

  public HomeServicesServers links(HomeServicesServersLinks links) {
    this.links = links;
    return this;
  }

  /**
   * Get links
   * @return links
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public HomeServicesServersLinks getLinks() {
    return links;
  }

  public void setLinks(HomeServicesServersLinks links) {
    this.links = links;
  }

  public HomeServicesServers count(Integer count) {
    this.count = count;
    return this;
  }

  /**
   * Number of servers.
   * @return count
  **/
  @Schema(example = "1", description = "Number of servers.")
  @NotNull

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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
