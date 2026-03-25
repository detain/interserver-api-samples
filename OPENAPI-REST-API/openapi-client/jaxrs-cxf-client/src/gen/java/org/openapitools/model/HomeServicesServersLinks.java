package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Map of dedicated server service IDs to their hostnames for the account dashboard.
 */
@ApiModel(description="Map of dedicated server service IDs to their hostnames for the account dashboard.")

public class HomeServicesServersLinks  {
  
 /**
  * Link to a server.
  */
  @ApiModelProperty(example = "anotherserver.com", value = "Link to a server.")

  private String _16058;
 /**
   * Link to a server.
   * @return _16058
  **/
  @JsonProperty("16058")
  public String get16058() {
    return _16058;
  }

  public void set16058(String _16058) {
    this._16058 = _16058;
  }

  public HomeServicesServersLinks _16058(String _16058) {
    this._16058 = _16058;
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

