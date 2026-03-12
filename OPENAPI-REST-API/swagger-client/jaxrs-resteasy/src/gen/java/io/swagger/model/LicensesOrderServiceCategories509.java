package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class LicensesOrderServiceCategories509   {
  private String categoryId = null;  private String categoryName = null;  private String categoryTag = null;  private String categoryModule = null;

  /**
   * Category ID
   **/
  
  @Schema(example = "509", description = "Category ID")
  @JsonProperty("category_id")
  @NotNull
  public String getCategoryId() {
    return categoryId;
  }
  public void setCategoryId(String categoryId) {
    this.categoryId = categoryId;
  }

  /**
   * Category Name
   **/
  
  @Schema(example = "Webuzo", description = "Category Name")
  @JsonProperty("category_name")
  @NotNull
  public String getCategoryName() {
    return categoryName;
  }
  public void setCategoryName(String categoryName) {
    this.categoryName = categoryName;
  }

  /**
   * Category Tag
   **/
  
  @Schema(example = "webuzo", description = "Category Tag")
  @JsonProperty("category_tag")
  @NotNull
  public String getCategoryTag() {
    return categoryTag;
  }
  public void setCategoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
  }

  /**
   * Category Module
   **/
  
  @Schema(example = "licenses", description = "Category Module")
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
    LicensesOrderServiceCategories509 licensesOrderServiceCategories509 = (LicensesOrderServiceCategories509) o;
    return Objects.equals(categoryId, licensesOrderServiceCategories509.categoryId) &&
        Objects.equals(categoryName, licensesOrderServiceCategories509.categoryName) &&
        Objects.equals(categoryTag, licensesOrderServiceCategories509.categoryTag) &&
        Objects.equals(categoryModule, licensesOrderServiceCategories509.categoryModule);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
