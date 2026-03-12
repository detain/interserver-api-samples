package org.openapitools.model;

import org.openapitools.model.HomeDetailsModules;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Users details.
 */
@ApiModel(description="Users details.")

public class HomeDetails  {
  
  @ApiModelProperty(value = "")

  private HomeDetailsModules modules;
 /**
   * Get modules
   * @return modules
  **/
  @JsonProperty("modules")
  public HomeDetailsModules getModules() {
    return modules;
  }

  public void setModules(HomeDetailsModules modules) {
    this.modules = modules;
  }

  public HomeDetails modules(HomeDetailsModules modules) {
    this.modules = modules;
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
    HomeDetails homeDetails = (HomeDetails) o;
    return Objects.equals(this.modules, homeDetails.modules);
  }

  @Override
  public int hashCode() {
    return Objects.hash(modules);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetails {\n");
    
    sb.append("    modules: ").append(toIndentedString(modules)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

