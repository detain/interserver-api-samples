package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * An affiliate banner image details.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "An affiliate banner image details.")

public class AffiliateBannerRow   {
  private String image = null;
  private String width = null;
  private String height = null;

  /**
   **/
  public AffiliateBannerRow image(String image) {
    this.image = image;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("image")
  @NotNull
  public String getImage() {
    return image;
  }
  public void setImage(String image) {
    this.image = image;
  }

  /**
   **/
  public AffiliateBannerRow width(String width) {
    this.width = width;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("width")
  @NotNull
  public String getWidth() {
    return width;
  }
  public void setWidth(String width) {
    this.width = width;
  }

  /**
   **/
  public AffiliateBannerRow height(String height) {
    this.height = height;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("height")
  @NotNull
  public String getHeight() {
    return height;
  }
  public void setHeight(String height) {
    this.height = height;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AffiliateBannerRow affiliateBannerRow = (AffiliateBannerRow) o;
    return Objects.equals(image, affiliateBannerRow.image) &&
        Objects.equals(width, affiliateBannerRow.width) &&
        Objects.equals(height, affiliateBannerRow.height);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
