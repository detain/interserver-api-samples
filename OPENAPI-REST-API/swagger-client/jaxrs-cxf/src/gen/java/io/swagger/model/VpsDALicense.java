package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * A DirectAdmin license tier option.
 **/
@Schema(description="A DirectAdmin license tier option.")
public class VpsDALicense   {
  
  @Schema(description = "License tier name.")
 /**
   * License tier name.  
  **/
  private String name = null;
  
  @Schema(description = "License tier sub-name.")
 /**
   * License tier sub-name.  
  **/
  private String subName = null;
  
  @Schema(description = "Monthly cost in cents.")
 /**
   * Monthly cost in cents.  
  **/
  private Integer cost = null;
  
  @Schema(description = "Image path for the disabled state icon.")
 /**
   * Image path for the disabled state icon.  
  **/
  private String imgDisabled = null;
  
  @Schema(description = "Image path for the active state icon.")
 /**
   * Image path for the active state icon.  
  **/
  private String imgActive = null;
 /**
   * License tier name.
   * @return name
  **/
  @JsonProperty("name")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
