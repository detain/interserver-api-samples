package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * HomeServicesBackups
 */




public class HomeServicesBackups   {
  
  private List<String> links = null;

  private Integer count = null;

  public HomeServicesBackups links(List<String> links) {
    this.links = links;
    return this;
  }

  public HomeServicesBackups addLinksItem(String linksItem) {
    if (this.links == null) {
      this.links = new ArrayList<String>();
    }
    this.links.add(linksItem);
    return this;
  }

  /**
   * List of backup links.
   * @return links
   **/
    public List<String> getLinks() {
    return links;
  }

  public void setLinks(List<String> links) {
    this.links = links;
  }

  public HomeServicesBackups count(Integer count) {
    this.count = count;
    return this;
  }

  /**
   * Number of backups.
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
    HomeServicesBackups homeServicesBackups = (HomeServicesBackups) o;
    return Objects.equals(this.links, homeServicesBackups.links) &&
        Objects.equals(this.count, homeServicesBackups.count);
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
