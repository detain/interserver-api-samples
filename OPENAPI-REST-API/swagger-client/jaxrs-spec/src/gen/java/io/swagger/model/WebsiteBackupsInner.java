package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsiteBackupsInner   {

  private @Valid String name = null;

  private @Valid Integer size = null;

  /**
   **/
  public WebsiteBackupsInner name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public WebsiteBackupsInner size(Integer size) {
    this.size = size;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("size")
  @NotNull

  public Integer getSize() {
    return size;
  }
  public void setSize(Integer size) {
    this.size = size;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteBackupsInner websiteBackupsInner = (WebsiteBackupsInner) o;
    return Objects.equals(name, websiteBackupsInner.name) &&
        Objects.equals(size, websiteBackupsInner.size);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, size);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteBackupsInner {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
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
