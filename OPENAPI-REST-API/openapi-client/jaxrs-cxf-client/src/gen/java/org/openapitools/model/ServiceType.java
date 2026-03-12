package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A general grouping of services within a category.
 */
@ApiModel(description="A general grouping of services within a category.")

public class ServiceType  {
  
  @ApiModelProperty(example = "600", required = true, value = "")

  private Integer stId;

  @ApiModelProperty(example = "Dedicated Server", required = true, value = "")

  private String stName;

  @ApiModelProperty(example = "600", required = true, value = "")

  private Integer stCategory;

  @ApiModelProperty(example = "servers", required = true, value = "")

  private String stModule;
 /**
   * Get stId
   * @return stId
  **/
  @JsonProperty("st_id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServiceType serviceType = (ServiceType) o;
    return Objects.equals(this.stId, serviceType.stId) &&
        Objects.equals(this.stName, serviceType.stName) &&
        Objects.equals(this.stCategory, serviceType.stCategory) &&
        Objects.equals(this.stModule, serviceType.stModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(stId, stName, stCategory, stModule);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

