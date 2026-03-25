package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LicensesOrderServiceCategories509  {
  
 /**
  * Category ID
  */
  @ApiModelProperty(example = "509", value = "Category ID")

  private String categoryId;

 /**
  * Category Name
  */
  @ApiModelProperty(example = "Webuzo", value = "Category Name")

  private String categoryName;

 /**
  * Category Tag
  */
  @ApiModelProperty(example = "webuzo", value = "Category Tag")

  private String categoryTag;

 /**
  * Category Module
  */
  @ApiModelProperty(example = "licenses", value = "Category Module")

  private String categoryModule;
 /**
   * Category ID
   * @return categoryId
  **/
  @JsonProperty("category_id")
  public String getCategoryId() {
    return categoryId;
  }

  public void setCategoryId(String categoryId) {
    this.categoryId = categoryId;
  }

  public LicensesOrderServiceCategories509 categoryId(String categoryId) {
    this.categoryId = categoryId;
    return this;
  }

 /**
   * Category Name
   * @return categoryName
  **/
  @JsonProperty("category_name")
  public String getCategoryName() {
    return categoryName;
  }

  public void setCategoryName(String categoryName) {
    this.categoryName = categoryName;
  }

  public LicensesOrderServiceCategories509 categoryName(String categoryName) {
    this.categoryName = categoryName;
    return this;
  }

 /**
   * Category Tag
   * @return categoryTag
  **/
  @JsonProperty("category_tag")
  public String getCategoryTag() {
    return categoryTag;
  }

  public void setCategoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
  }

  public LicensesOrderServiceCategories509 categoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
    return this;
  }

 /**
   * Category Module
   * @return categoryModule
  **/
  @JsonProperty("category_module")
  public String getCategoryModule() {
    return categoryModule;
  }

  public void setCategoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
  }

  public LicensesOrderServiceCategories509 categoryModule(String categoryModule) {
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
    LicensesOrderServiceCategories509 licensesOrderServiceCategories509 = (LicensesOrderServiceCategories509) o;
    return Objects.equals(this.categoryId, licensesOrderServiceCategories509.categoryId) &&
        Objects.equals(this.categoryName, licensesOrderServiceCategories509.categoryName) &&
        Objects.equals(this.categoryTag, licensesOrderServiceCategories509.categoryTag) &&
        Objects.equals(this.categoryModule, licensesOrderServiceCategories509.categoryModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(categoryId, categoryName, categoryTag, categoryModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrderServiceCategories509 {\n");
    
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

