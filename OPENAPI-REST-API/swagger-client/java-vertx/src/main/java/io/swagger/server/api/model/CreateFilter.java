package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Create firewall rule for your ip
 */




public class CreateFilter   {
  private String filterType = null;

  private Integer port = null;

  public CreateFilter filterType(String filterType) {
    this.filterType = filterType;
    return this;
  }

  /**
   * Get filterType
   * @return filterType
   **/
    public String getFilterType() {
    return filterType;
  }

  public void setFilterType(String filterType) {
    this.filterType = filterType;
  }

  public CreateFilter port(Integer port) {
    this.port = port;
    return this;
  }

  /**
   * Get port
   * @return port
   **/
    public Integer getPort() {
    return port;
  }

  public void setPort(Integer port) {
    this.port = port;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CreateFilter createFilter = (CreateFilter) o;
    return Objects.equals(this.filterType, createFilter.filterType) &&
        Objects.equals(this.port, createFilter.port);
  }

  @Override
  public int hashCode() {
    return Objects.hash(filterType, port);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CreateFilter {\n");
    
    sb.append("    filterType: ").append(toIndentedString(filterType)).append("\n");
    sb.append("    port: ").append(toIndentedString(port)).append("\n");
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
