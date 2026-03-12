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
  * An affiliate banner image details.
 **/
@Schema(description="An affiliate banner image details.")
public class AffiliateBannerRow   {
  
  @Schema(description = "")
  private String image = null;
  
  @Schema(description = "")
  private String width = null;
  
  @Schema(description = "")
  private String height = null;
 /**
   * Get image
   * @return image
  **/
  @JsonProperty("image")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
