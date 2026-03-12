package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.HomeServicesLicensesLinks;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * HomeServicesLicenses
 */




public class HomeServicesLicenses   {
  private HomeServicesLicensesLinks links = null;

  private Integer count = null;

  public HomeServicesLicenses links(HomeServicesLicensesLinks links) {
    this.links = links;
    return this;
  }

  /**
   * Get links
   * @return links
   **/
    public HomeServicesLicensesLinks getLinks() {
    return links;
  }

  public void setLinks(HomeServicesLicensesLinks links) {
    this.links = links;
  }

  public HomeServicesLicenses count(Integer count) {
    this.count = count;
    return this;
  }

  /**
   * Number of licenses.
   * @return count
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
