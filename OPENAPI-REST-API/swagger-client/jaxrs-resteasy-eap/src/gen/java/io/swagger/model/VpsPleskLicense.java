package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class VpsPleskLicense   {
  private Integer id = null;
  private String name = null;
  private String subName = null;
  private Integer cost = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("id")
  @NotNull
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("sub_name")
  @NotNull
  public String getSubName() {
    return subName;
  }
  public void setSubName(String subName) {
    this.subName = subName;
  }

  /**
   **/
  
  @Schema(description = "")
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
    VpsPleskLicense vpsPleskLicense = (VpsPleskLicense) o;
    return Objects.equals(id, vpsPleskLicense.id) &&
        Objects.equals(name, vpsPleskLicense.name) &&
        Objects.equals(subName, vpsPleskLicense.subName) &&
        Objects.equals(cost, vpsPleskLicense.cost);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, subName, cost);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsPleskLicense {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    subName: ").append(toIndentedString(subName)).append("\n");
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
