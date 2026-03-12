package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Control panel license options available for a VPS.
 */
@ApiModel(description="Control panel license options available for a VPS.")

public class VpsCPData  {
  
 /**
  * Control panel name (e.g., cPanel).
  */
  @ApiModelProperty(value = "Control panel name (e.g., cPanel).")

  private String name;

 /**
  * Monthly cost in cents for the control panel license.
  */
  @ApiModelProperty(value = "Monthly cost in cents for the control panel license.")

  private Integer cost;
 /**
   * Control panel name (e.g., cPanel).
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsCPData name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Monthly cost in cents for the control panel license.
   * @return cost
  **/
  @JsonProperty("cost")
  public Integer getCost() {
    return cost;
  }

  public void setCost(Integer cost) {
    this.cost = cost;
  }

  public VpsCPData cost(Integer cost) {
    this.cost = cost;
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
    VpsCPData vpsCPData = (VpsCPData) o;
    return Objects.equals(this.name, vpsCPData.name) &&
        Objects.equals(this.cost, vpsCPData.cost);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

