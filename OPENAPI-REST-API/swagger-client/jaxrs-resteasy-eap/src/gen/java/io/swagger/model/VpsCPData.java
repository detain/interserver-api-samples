package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Control panel license options available for a VPS.")

public class VpsCPData   {
  private String name = null;
  private Integer cost = null;

  /**
   * Control panel name (e.g., cPanel).
   **/
  
  @Schema(description = "Control panel name (e.g., cPanel).")
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Monthly cost in cents for the control panel license.
   **/
  
  @Schema(description = "Monthly cost in cents for the control panel license.")
  @JsonProperty("cost")
  @NotNull
  public Integer getCost() {
    return cost;
  }
  public void setCost(Integer cost) {
    this.cost = cost;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsCPData vpsCPData = (VpsCPData) o;
    return Objects.equals(name, vpsCPData.name) &&
        Objects.equals(cost, vpsCPData.cost);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, cost);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsCPData {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
