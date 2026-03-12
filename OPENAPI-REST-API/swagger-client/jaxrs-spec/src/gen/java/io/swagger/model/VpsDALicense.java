package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A DirectAdmin license tier option.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A DirectAdmin license tier option.")

public class VpsDALicense   {

  private @Valid String name = null;

  private @Valid String subName = null;

  private @Valid Integer cost = null;

  private @Valid String imgDisabled = null;

  private @Valid String imgActive = null;

  /**
   * License tier name.
   **/
  public VpsDALicense name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(value = "License tier name.")
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
  public VpsDALicense subName(String subName) {
    this.subName = subName;
    return this;
  }

  
  @ApiModelProperty(value = "License tier sub-name.")
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
  public VpsDALicense cost(Integer cost) {
    this.cost = cost;
    return this;
  }

  
  @ApiModelProperty(value = "Monthly cost in cents.")
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
  public VpsDALicense imgDisabled(String imgDisabled) {
    this.imgDisabled = imgDisabled;
    return this;
  }

  
  @ApiModelProperty(value = "Image path for the disabled state icon.")
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
  public VpsDALicense imgActive(String imgActive) {
    this.imgActive = imgActive;
    return this;
  }

  
  @ApiModelProperty(value = "Image path for the active state icon.")
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
