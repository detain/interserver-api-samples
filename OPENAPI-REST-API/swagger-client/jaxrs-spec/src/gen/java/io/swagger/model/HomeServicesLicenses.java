package io.swagger.model;

import io.swagger.model.HomeServicesLicensesLinks;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class HomeServicesLicenses   {

  private @Valid HomeServicesLicensesLinks links = null;

  private @Valid Integer count = null;

  /**
   **/
  public HomeServicesLicenses links(HomeServicesLicensesLinks links) {
    this.links = links;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("links")
  @NotNull

  public HomeServicesLicensesLinks getLinks() {
    return links;
  }
  public void setLinks(HomeServicesLicensesLinks links) {
    this.links = links;
  }

  /**
   * Number of licenses.
   **/
  public HomeServicesLicenses count(Integer count) {
    this.count = count;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Number of licenses.")
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
    HomeServicesLicenses homeServicesLicenses = (HomeServicesLicenses) o;
    return Objects.equals(links, homeServicesLicenses.links) &&
        Objects.equals(count, homeServicesLicenses.count);
  }

  @Override
  public int hashCode() {
    return Objects.hash(links, count);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
