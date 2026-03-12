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
  * A general grouping of services within a category.
 **/
@Schema(description="A general grouping of services within a category.")
public class ServiceType   {
  
  @Schema(example = "600", required = true, description = "")
  private Integer stId = null;
  
  @Schema(example = "Dedicated Server", required = true, description = "")
  private String stName = null;
  
  @Schema(example = "600", required = true, description = "")
  private Integer stCategory = null;
  
  @Schema(example = "servers", required = true, description = "")
  private String stModule = null;
 /**
   * Get stId
   * @return stId
  **/
  @JsonProperty("st_id")
  @NotNull
  public Integer getStId() {
    return stId;
  }

  public void setStId(Integer stId) {
    this.stId = stId;
  }

  public ServiceType stId(Integer stId) {
    this.stId = stId;
    return this;
  }

 /**
   * Get stName
   * @return stName
  **/
  @JsonProperty("st_name")
  @NotNull
  public String getStName() {
    return stName;
  }

  public void setStName(String stName) {
    this.stName = stName;
  }

  public ServiceType stName(String stName) {
    this.stName = stName;
    return this;
  }

 /**
   * Get stCategory
   * @return stCategory
  **/
  @JsonProperty("st_category")
  @NotNull
  public Integer getStCategory() {
    return stCategory;
  }

  public void setStCategory(Integer stCategory) {
    this.stCategory = stCategory;
  }

  public ServiceType stCategory(Integer stCategory) {
    this.stCategory = stCategory;
    return this;
  }

 /**
   * Get stModule
   * @return stModule
  **/
  @JsonProperty("st_module")
  @NotNull
  public String getStModule() {
    return stModule;
  }

  public void setStModule(String stModule) {
    this.stModule = stModule;
  }

  public ServiceType stModule(String stModule) {
    this.stModule = stModule;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServiceType {\n");
    
    sb.append("    stId: ").append(toIndentedString(stId)).append("\n");
    sb.append("    stName: ").append(toIndentedString(stName)).append("\n");
    sb.append("    stCategory: ").append(toIndentedString(stCategory)).append("\n");
    sb.append("    stModule: ").append(toIndentedString(stModule)).append("\n");
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
