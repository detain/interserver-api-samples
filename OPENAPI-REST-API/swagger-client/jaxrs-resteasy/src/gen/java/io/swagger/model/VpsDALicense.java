package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A DirectAdmin license tier option.")

public class VpsDALicense   {
  private String name = null;  private String subName = null;  private Integer cost = null;  private String imgDisabled = null;  private String imgActive = null;

  /**
   * License tier name.
   **/
  
  @Schema(description = "License tier name.")
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * License tier sub-name.
   **/
  
  @Schema(description = "License tier sub-name.")
  @JsonProperty("sub_name")
  @NotNull
  public String getSubName() {
    return subName;
  }
  public void setSubName(String subName) {
    this.subName = subName;
  }

  /**
   * Monthly cost in cents.
   **/
  
  @Schema(description = "Monthly cost in cents.")
  @JsonProperty("cost")
  @NotNull
  public Integer getCost() {
    return cost;
  }
  public void setCost(Integer cost) {
    this.cost = cost;
  }

  /**
   * Image path for the disabled state icon.
   **/
  
  @Schema(description = "Image path for the disabled state icon.")
  @JsonProperty("img_disabled")
  @NotNull
  public String getImgDisabled() {
    return imgDisabled;
  }
  public void setImgDisabled(String imgDisabled) {
    this.imgDisabled = imgDisabled;
  }

  /**
   * Image path for the active state icon.
   **/
  
  @Schema(description = "Image path for the active state icon.")
  @JsonProperty("img_active")
  @NotNull
  public String getImgActive() {
    return imgActive;
  }
  public void setImgActive(String imgActive) {
    this.imgActive = imgActive;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsDALicense vpsDALicense = (VpsDALicense) o;
    return Objects.equals(name, vpsDALicense.name) &&
        Objects.equals(subName, vpsDALicense.subName) &&
        Objects.equals(cost, vpsDALicense.cost) &&
        Objects.equals(imgDisabled, vpsDALicense.imgDisabled) &&
        Objects.equals(imgActive, vpsDALicense.imgActive);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, subName, cost, imgDisabled, imgActive);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsDALicense {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    subName: ").append(toIndentedString(subName)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("    imgDisabled: ").append(toIndentedString(imgDisabled)).append("\n");
    sb.append("    imgActive: ").append(toIndentedString(imgActive)).append("\n");
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
