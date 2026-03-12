package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.HomeDetailsModules;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Users details.
 */
@Schema(description = "Users details.")
@Validated
@Introspected

public class HomeDetails   {
  @JsonProperty("modules")
  private HomeDetailsModules modules = null;

  public HomeDetails modules(HomeDetailsModules modules) {
    this.modules = modules;
    return this;
  }

  /**
   * Get modules
   * @return modules
  **/
  @Schema(description = "")
  @NotNull

  @Valid
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
