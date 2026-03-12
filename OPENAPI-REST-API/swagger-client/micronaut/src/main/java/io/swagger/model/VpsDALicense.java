package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A DirectAdmin license tier option.
 */
@Schema(description = "A DirectAdmin license tier option.")
@Validated
@Introspected

public class VpsDALicense   {
  @JsonProperty("name")
  private String name = null;

  @JsonProperty("sub_name")
  private String subName = null;

  @JsonProperty("cost")
  private Integer cost = null;

  @JsonProperty("img_disabled")
  private String imgDisabled = null;

  @JsonProperty("img_active")
  private String imgActive = null;

  public VpsDALicense name(String name) {
    this.name = name;
    return this;
  }

  /**
   * License tier name.
   * @return name
  **/
  @Schema(description = "License tier name.")
  @NotNull

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsDALicense subName(String subName) {
    this.subName = subName;
    return this;
  }

  /**
   * License tier sub-name.
   * @return subName
  **/
  @Schema(description = "License tier sub-name.")
  @NotNull

  public String getSubName() {
    return subName;
  }

  public void setSubName(String subName) {
    this.subName = subName;
  }

  public VpsDALicense cost(Integer cost) {
    this.cost = cost;
    return this;
  }

  /**
   * Monthly cost in cents.
   * @return cost
  **/
  @Schema(description = "Monthly cost in cents.")
  @NotNull

  public Integer getCost() {
    return cost;
  }

  public void setCost(Integer cost) {
    this.cost = cost;
  }

  public VpsDALicense imgDisabled(String imgDisabled) {
    this.imgDisabled = imgDisabled;
    return this;
  }

  /**
   * Image path for the disabled state icon.
   * @return imgDisabled
  **/
  @Schema(description = "Image path for the disabled state icon.")
  @NotNull

  public String getImgDisabled() {
    return imgDisabled;
  }

  public void setImgDisabled(String imgDisabled) {
    this.imgDisabled = imgDisabled;
  }

  public VpsDALicense imgActive(String imgActive) {
    this.imgActive = imgActive;
    return this;
  }

  /**
   * Image path for the active state icon.
   * @return imgActive
  **/
  @Schema(description = "Image path for the active state icon.")
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
    return Objects.equals(this.name, vpsDALicense.name) &&
        Objects.equals(this.subName, vpsDALicense.subName) &&
        Objects.equals(this.cost, vpsDALicense.cost) &&
        Objects.equals(this.imgDisabled, vpsDALicense.imgDisabled) &&
        Objects.equals(this.imgActive, vpsDALicense.imgActive);
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
