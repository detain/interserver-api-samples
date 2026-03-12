package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A Category of Services.  This is the broadest grouping within a module.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A Category of Services.  This is the broadest grouping within a module.")

public class ServiceCategory   {

  private @Valid Integer categoryId = null;

  private @Valid String categoryName = null;

  private @Valid String categoryTag = null;

  private @Valid String categoryModule = null;

  /**
   **/
  public ServiceCategory categoryId(Integer categoryId) {
    this.categoryId = categoryId;
    return this;
  }

  
  @ApiModelProperty(example = "1", required = true, value = "")
  @JsonProperty("category_id")
  @NotNull

  public Integer getCategoryId() {
    return categoryId;
  }
  public void setCategoryId(Integer categoryId) {
    this.categoryId = categoryId;
  }

  /**
   **/
  public ServiceCategory categoryName(String categoryName) {
    this.categoryName = categoryName;
    return this;
  }

  
  @ApiModelProperty(example = "OpenVZ Virtual Servers", required = true, value = "")
  @JsonProperty("category_name")
  @NotNull

  public String getCategoryName() {
    return categoryName;
  }
  public void setCategoryName(String categoryName) {
    this.categoryName = categoryName;
  }

  /**
   **/
  public ServiceCategory categoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
    return this;
  }

  
  @ApiModelProperty(example = "openvz", required = true, value = "")
  @JsonProperty("category_tag")
  @NotNull

  public String getCategoryTag() {
    return categoryTag;
  }
  public void setCategoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
  }

  /**
   **/
  public ServiceCategory categoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
    return this;
  }

  
  @ApiModelProperty(example = "vps", required = true, value = "")
  @JsonProperty("category_module")
  @NotNull

  public String getCategoryModule() {
    return categoryModule;
  }
  public void setCategoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServiceCategory serviceCategory = (ServiceCategory) o;
    return Objects.equals(categoryId, serviceCategory.categoryId) &&
        Objects.equals(categoryName, serviceCategory.categoryName) &&
        Objects.equals(categoryTag, serviceCategory.categoryTag) &&
        Objects.equals(categoryModule, serviceCategory.categoryModule);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
