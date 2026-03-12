package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * An affiliate banner image details.
 */




public class AffiliateBannerRow   {
  private String image = null;

  private String width = null;

  private String height = null;

  public AffiliateBannerRow image(String image) {
    this.image = image;
    return this;
  }

  /**
   * Get image
   * @return image
   **/
    public String getImage() {
    return image;
  }

  public void setImage(String image) {
    this.image = image;
  }

  public AffiliateBannerRow width(String width) {
    this.width = width;
    return this;
  }

  /**
   * Get width
   * @return width
   **/
    public String getWidth() {
    return width;
  }

  public void setWidth(String width) {
    this.width = width;
  }

  public AffiliateBannerRow height(String height) {
    this.height = height;
    return this;
  }

  /**
   * Get height
   * @return height
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
