package io.swagger.model;

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

public class LicensesOrderServiceCategories509   {
  
  @Schema(example = "509", description = "Category ID")
 /**
   * Category ID  
  **/
  private String categoryId = null;
  
  @Schema(example = "Webuzo", description = "Category Name")
 /**
   * Category Name  
  **/
  private String categoryName = null;
  
  @Schema(example = "webuzo", description = "Category Tag")
 /**
   * Category Tag  
  **/
  private String categoryTag = null;
  
  @Schema(example = "licenses", description = "Category Module")
 /**
   * Category Module  
  **/
  private String categoryModule = null;
 /**
   * Category ID
   * @return categoryId
  **/
  @JsonProperty("category_id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
