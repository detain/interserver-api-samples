package io.swagger.model;

import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class HomeServicesBackups   {

  private @Valid List<String> links = new ArrayList<String>();

  private @Valid Integer count = null;

  /**
   * List of backup links.
   **/
  public HomeServicesBackups links(List<String> links) {
    this.links = links;
    return this;
  }

  
  @ApiModelProperty(value = "List of backup links.")
  @JsonProperty("links")
  @NotNull

  public List<String> getLinks() {
    return links;
  }
  public void setLinks(List<String> links) {
    this.links = links;
  }

  /**
   * Number of backups.
   **/
  public HomeServicesBackups count(Integer count) {
    this.count = count;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Number of backups.")
  @JsonProperty("count")
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
    HomeServicesBackups homeServicesBackups = (HomeServicesBackups) o;
    return Objects.equals(links, homeServicesBackups.links) &&
        Objects.equals(count, homeServicesBackups.count);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
