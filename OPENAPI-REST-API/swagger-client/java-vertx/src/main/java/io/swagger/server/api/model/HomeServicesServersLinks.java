package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Map of dedicated server service IDs to their hostnames for the account dashboard.
 */




public class HomeServicesServersLinks   {
  private String _16058 = null;

  public HomeServicesServersLinks _16058(String _16058) {
    this._16058 = _16058;
    return this;
  }

  /**
   * Link to a server.
   * @return _16058
   **/
    public String get16058() {
    return _16058;
  }

  public void set16058(String _16058) {
    this._16058 = _16058;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeServicesServersLinks homeServicesServersLinks = (HomeServicesServersLinks) o;
    return Objects.equals(this._16058, homeServicesServersLinks._16058);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_16058);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesServersLinks {\n");
    
    sb.append("    _16058: ").append(toIndentedString(_16058)).append("\n");
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
