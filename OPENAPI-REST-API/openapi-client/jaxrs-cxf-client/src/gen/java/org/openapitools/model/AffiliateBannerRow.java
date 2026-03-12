package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * An affiliate banner image details.
 */
@ApiModel(description="An affiliate banner image details.")

public class AffiliateBannerRow  {
  
  @ApiModelProperty(value = "")

  private String image;

  @ApiModelProperty(value = "")

  private String width;

  @ApiModelProperty(value = "")

  private String height;
 /**
   * Get image
   * @return image
  **/
  @JsonProperty("image")
  public String getImage() {
    return image;
  }

  public void setImage(String image) {
    this.image = image;
  }

  public AffiliateBannerRow image(String image) {
    this.image = image;
    return this;
  }

 /**
   * Get width
   * @return width
  **/
  @JsonProperty("width")
  public String getWidth() {
    return width;
  }

  public void setWidth(String width) {
    this.width = width;
  }

  public AffiliateBannerRow width(String width) {
    this.width = width;
    return this;
  }

 /**
   * Get height
   * @return height
  **/
  @JsonProperty("height")
  public String getHeight() {
    return height;
  }

  public void setHeight(String height) {
    this.height = height;
  }

  public AffiliateBannerRow height(String height) {
    this.height = height;
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
    AffiliateBannerRow affiliateBannerRow = (AffiliateBannerRow) o;
    return Objects.equals(this.image, affiliateBannerRow.image) &&
        Objects.equals(this.width, affiliateBannerRow.width) &&
        Objects.equals(this.height, affiliateBannerRow.height);
  }

  @Override
  public int hashCode() {
    return Objects.hash(image, width, height);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AffiliateBannerRow {\n");
    
    sb.append("    image: ").append(toIndentedString(image)).append("\n");
    sb.append("    width: ").append(toIndentedString(width)).append("\n");
    sb.append("    height: ").append(toIndentedString(height)).append("\n");
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

