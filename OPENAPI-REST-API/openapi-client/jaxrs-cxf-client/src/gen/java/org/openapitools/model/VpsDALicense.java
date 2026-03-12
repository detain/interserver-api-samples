package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A DirectAdmin license tier option.
 */
@ApiModel(description="A DirectAdmin license tier option.")

public class VpsDALicense  {
  
 /**
  * License tier name.
  */
  @ApiModelProperty(value = "License tier name.")

  private String name;

 /**
  * License tier sub-name.
  */
  @ApiModelProperty(value = "License tier sub-name.")

  private String subName;

 /**
  * Monthly cost in cents.
  */
  @ApiModelProperty(value = "Monthly cost in cents.")

  private Integer cost;

 /**
  * Image path for the disabled state icon.
  */
  @ApiModelProperty(value = "Image path for the disabled state icon.")

  private String imgDisabled;

 /**
  * Image path for the active state icon.
  */
  @ApiModelProperty(value = "Image path for the active state icon.")

  private String imgActive;
 /**
   * License tier name.
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsDALicense name(String name) {
    this.name = name;
    return this;
  }

 /**
   * License tier sub-name.
   * @return subName
  **/
  @JsonProperty("sub_name")
  public String getSubName() {
    return subName;
  }

  public void setSubName(String subName) {
    this.subName = subName;
  }

  public VpsDALicense subName(String subName) {
    this.subName = subName;
    return this;
  }

 /**
   * Monthly cost in cents.
   * @return cost
  **/
  @JsonProperty("cost")
  public Integer getCost() {
    return cost;
  }

  public void setCost(Integer cost) {
    this.cost = cost;
  }

  public VpsDALicense cost(Integer cost) {
    this.cost = cost;
    return this;
  }

 /**
   * Image path for the disabled state icon.
   * @return imgDisabled
  **/
  @JsonProperty("img_disabled")
  public String getImgDisabled() {
    return imgDisabled;
  }

  public void setImgDisabled(String imgDisabled) {
    this.imgDisabled = imgDisabled;
  }

  public VpsDALicense imgDisabled(String imgDisabled) {
    this.imgDisabled = imgDisabled;
    return this;
  }

 /**
   * Image path for the active state icon.
   * @return imgActive
  **/
  @JsonProperty("img_active")
  public String getImgActive() {
    return imgActive;
  }

  public void setImgActive(String imgActive) {
    this.imgActive = imgActive;
  }

  public VpsDALicense imgActive(String imgActive) {
    this.imgActive = imgActive;
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

