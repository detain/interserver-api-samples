package io.swagger.model;

import io.swagger.model.HomeDetailsModules;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Users details.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Users details.")

public class HomeDetails   {

  private @Valid HomeDetailsModules modules = null;

  /**
   **/
  public HomeDetails modules(HomeDetailsModules modules) {
    this.modules = modules;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("modules")
  @NotNull

  public HomeDetailsModules getModules() {
    return modules;
  }
  public void setModules(HomeDetailsModules modules) {
    this.modules = modules;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeDetails homeDetails = (HomeDetails) o;
    return Objects.equals(modules, homeDetails.modules);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
