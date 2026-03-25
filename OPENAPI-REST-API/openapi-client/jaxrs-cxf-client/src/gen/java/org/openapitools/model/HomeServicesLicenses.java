package org.openapitools.model;

import org.openapitools.model.HomeServicesLicensesLinks;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class HomeServicesLicenses  {
  
  @ApiModelProperty(value = "")

  private HomeServicesLicensesLinks links;

 /**
  * Number of licenses.
  */
  @ApiModelProperty(example = "1", value = "Number of licenses.")

  private Integer count;
 /**
   * Get links
   * @return links
  **/
  @JsonProperty("links")
  public HomeServicesLicensesLinks getLinks() {
    return links;
  }

  public void setLinks(HomeServicesLicensesLinks links) {
    this.links = links;
  }

  public HomeServicesLicenses links(HomeServicesLicensesLinks links) {
    this.links = links;
    return this;
  }

 /**
   * Number of licenses.
   * @return count
  **/
  @JsonProperty("count")
  public Integer getCount() {
    return count;
  }

  public void setCount(Integer count) {
    this.count = count;
  }

  public HomeServicesLicenses count(Integer count) {
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
    HomeServicesLicenses homeServicesLicenses = (HomeServicesLicenses) o;
    return Objects.equals(this.links, homeServicesLicenses.links) &&
        Objects.equals(this.count, homeServicesLicenses.count);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

