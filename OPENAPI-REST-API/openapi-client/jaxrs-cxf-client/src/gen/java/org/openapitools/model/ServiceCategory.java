package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A Category of Services.  This is the broadest grouping within a module.
 */
@ApiModel(description="A Category of Services.  This is the broadest grouping within a module.")

public class ServiceCategory  {
  
  @ApiModelProperty(example = "1", required = true, value = "")

  private Integer categoryId;

  @ApiModelProperty(example = "OpenVZ Virtual Servers", required = true, value = "")

  private String categoryName;

  @ApiModelProperty(example = "openvz", required = true, value = "")

  private String categoryTag;

  @ApiModelProperty(example = "vps", required = true, value = "")

  private String categoryModule;
 /**
   * Get categoryId
   * @return categoryId
  **/
  @JsonProperty("category_id")
  public Integer getCategoryId() {
    return categoryId;
  }

  public void setCategoryId(Integer categoryId) {
    this.categoryId = categoryId;
  }

  public ServiceCategory categoryId(Integer categoryId) {
    this.categoryId = categoryId;
    return this;
  }

 /**
   * Get categoryName
   * @return categoryName
  **/
  @JsonProperty("category_name")
  public String getCategoryName() {
    return categoryName;
  }

  public void setCategoryName(String categoryName) {
    this.categoryName = categoryName;
  }

  public ServiceCategory categoryName(String categoryName) {
    this.categoryName = categoryName;
    return this;
  }

 /**
   * Get categoryTag
   * @return categoryTag
  **/
  @JsonProperty("category_tag")
  public String getCategoryTag() {
    return categoryTag;
  }

  public void setCategoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
  }

  public ServiceCategory categoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
    return this;
  }

 /**
   * Get categoryModule
   * @return categoryModule
  **/
  @JsonProperty("category_module")
  public String getCategoryModule() {
    return categoryModule;
  }

  public void setCategoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
  }

  public ServiceCategory categoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
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
    ServiceCategory serviceCategory = (ServiceCategory) o;
    return Objects.equals(this.categoryId, serviceCategory.categoryId) &&
        Objects.equals(this.categoryName, serviceCategory.categoryName) &&
        Objects.equals(this.categoryTag, serviceCategory.categoryTag) &&
        Objects.equals(this.categoryModule, serviceCategory.categoryModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(categoryId, categoryName, categoryTag, categoryModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServiceCategory {\n");
    
    sb.append("    categoryId: ").append(toIndentedString(categoryId)).append("\n");
    sb.append("    categoryName: ").append(toIndentedString(categoryName)).append("\n");
    sb.append("    categoryTag: ").append(toIndentedString(categoryTag)).append("\n");
    sb.append("    categoryModule: ").append(toIndentedString(categoryModule)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

